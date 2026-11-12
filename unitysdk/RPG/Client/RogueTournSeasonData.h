#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
class HMGGOEHMIJO;
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class RogueTournModuleRow; }

#define RPG_CLIENT_ROGUETOURNSEASONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEAA9360)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURMAINTOURNID_OFFSET UNITYSDK_OFFSET(0xEAA9690)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xEAA9730)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNID_OFFSET UNITYSDK_OFFSET(0xEAA96B0)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNSCHEDULE_OFFSET UNITYSDK_OFFSET(0xEAA9780)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURTOURNMODE_OFFSET UNITYSDK_OFFSET(0xEAA96D0)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xEAA9710)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_ISNEEDSHOWNEWTOURNDIALOG_OFFSET UNITYSDK_OFFSET(0xEAA93F0)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SETNEWTOURNDIALOGSEENCURTOURN_OFFSET UNITYSDK_OFFSET(0xEAA9540)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SET_CURMAINTOURNID_OFFSET UNITYSDK_OFFSET(0xEAA96A0)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SET_CURSUBTOURNID_OFFSET UNITYSDK_OFFSET(0xEAA96C0)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xEAA9720)
#define RPG_CLIENT_ROGUETOURNSEASONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xEAA9370)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournSeasonData_TypeDefinitionIndex = 69768;

	class RogueTournSeasonData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournModuleRow* _Row_k__BackingField; // 0x10
		::System::UInt32 _CurMainTournID_k__BackingField; // 0x18
		::System::UInt32 _CurSubTournID_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::HMGGOEHMIJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMGGOEHMIJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsNeedShowNewTournDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_ISNEEDSHOWNEWTOURNDIALOG_OFFSET))(this);
		}

		::System::Void SetNewTournDialogSeenCurTourn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_SETNEWTOURNDIALOGSEENCURTOURN_OFFSET))(this);
		}

		::System::UInt32 get_CurMainTournID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURMAINTOURNID_OFFSET))(this);
		}

		::System::Void set_CurMainTournID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_SET_CURMAINTOURNID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurSubTournID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNID_OFFSET))(this);
		}

		::System::Void set_CurSubTournID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_SET_CURSUBTOURNID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournMode get_CurTournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURTOURNMODE_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournModuleRow* get_Row()
		{
			return ((::RPG::GameCore::RogueTournModuleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::RogueTournModuleRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournModuleRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurSubTournActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNACTIVITYMODULEID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_CurSubTournSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSEASONDATA_GET_CURSUBTOURNSCHEDULE_OFFSET))(this);
		}

	};
}
