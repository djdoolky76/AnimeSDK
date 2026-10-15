#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Params.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_PlaySmartObject; }

#define RPG_GAMECORE_ST_MAIN_PLAYSMARTOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA81040)
#define RPG_GAMECORE_ST_MAIN_PLAYSMARTOBJECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA81050)
#define RPG_GAMECORE_ST_MAIN_PLAYSMARTOBJECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA81010)

namespace RPG::GameCore
{
	class ST_Main_PlaySmartObject : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::SO_Params ParamType; // 0x18
		::System::UInt32 GroupId; // 0x1C
		::System::UInt32 InstanceId; // 0x20
		::System::UInt32 SlotIndex; // 0x24
		::System::Boolean RecordContext; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYSMARTOBJECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_PlaySmartObject* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_PlaySmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYSMARTOBJECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_PlaySmartObject* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_PlaySmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYSMARTOBJECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
