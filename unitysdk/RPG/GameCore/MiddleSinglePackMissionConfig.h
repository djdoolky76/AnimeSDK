#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChronicleCustomUnlockConditionConfig; }
namespace RPG::GameCore { class MiddleSinglePackMissionConfig; }

#define RPG_GAMECORE_MIDDLESINGLEPACKMISSIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D87FA40)
#define RPG_GAMECORE_MIDDLESINGLEPACKMISSIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D87F920)

namespace RPG::GameCore
{
	class MiddleSinglePackMissionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PackMissionID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* CustomUnlockConditionList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIDDLESINGLEPACKMISSIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiddleSinglePackMissionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiddleSinglePackMissionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIDDLESINGLEPACKMISSIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
