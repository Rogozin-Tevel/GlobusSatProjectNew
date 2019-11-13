#include <satellite-subsystems/IsisAntS.h>


#include "SubSystemModules/Communication/SubsystemCommands/TRXVU_Commands.h"
#include "SubSystemModules/Communication/SubsystemCommands/Maintanence_Commands.h"
#include "SubSystemModules/Communication/SubsystemCommands/FS_Commands.h"
#include "SubSystemModules/Communication/SubsystemCommands/EPS_Commands.h"

#include "SubSystemModules/Housekepping/TelemetryCollector.h"
#include "SubSystemModules/PowerManagment/EPS.h"
#include "TLM_management.h"
#include <stdio.h>
#include "CommandDictionary.h"

int trxvu_command_router(sat_packet_t *cmd)
{
	int err = 0;
	sat_packet_t delayed_cmd = { 0 };
	//TODO: finish 'trxvu_command_router'
	switch (cmd->cmd_subtype)
	{
	case DUMP_SUBTYPE:
		err = CMD_StartDump(cmd);
		break;
	return 0;
}

int eps_command_router(sat_packet_t *cmd)
{
	return 0;
}

int telemetry_command_router(sat_packet_t *cmd)
{
	return 0;
}

int managment_command_router(sat_packet_t *cmd)
{
	return 0;
}

int filesystem_command_router(sat_packet_t *cmd)
{
	return 0;
}
