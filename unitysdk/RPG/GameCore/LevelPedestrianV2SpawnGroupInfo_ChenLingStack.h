#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2SpawnGroupInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2ChenLingStackOffsetInfo; }
namespace RPG::GameCore { class LevelPedestrianV2SpawnGroupInfo_ChenLingStack; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_CHENLINGSTACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C10C0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_CHENLINGSTACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C10D0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_CHENLINGSTACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C9910)

namespace RPG::GameCore
{
	class LevelPedestrianV2SpawnGroupInfo_ChenLingStack : public ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo
	{
	public:
		::System::UInt32 MinCount; // 0x38
		::System::UInt32 MaxCount; // 0x3C
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*>* StackOffsets; // 0x40
		::System::Single OverrideDropTriggerRadius; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_CHENLINGSTACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_CHENLINGSTACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_CHENLINGSTACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
