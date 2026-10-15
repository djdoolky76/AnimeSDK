#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianFlowInfo; }
namespace RPG::GameCore { class LevelPedestrianInfo; }
namespace RPG::GameCore { class LevelPedestrianLineUpPointInfo; }
namespace RPG::GameCore { class LevelPedestrianMemberInfo; }
namespace RPG::GameCore { class LevelPedestrianNodeInfo; }
namespace RPG::GameCore { class NpcWalkStyleWeightInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C05E0)
#define RPG_GAMECORE_LEVELPEDESTRIANINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C05F0)
#define RPG_GAMECORE_LEVELPEDESTRIANINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C36E0)

namespace RPG::GameCore
{
	class LevelPedestrianInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianMemberInfo*>* Members; // 0x38
		::Il2CppArray<::RPG::GameCore::LevelPedestrianFlowInfo*>* Flows; // 0x40
		::Il2CppArray<::RPG::GameCore::LevelPedestrianNodeInfo*>* Path; // 0x48
		::Il2CppArray<::RPG::GameCore::LevelPedestrianLineUpPointInfo*>* LineUps; // 0x50
		::System::Single ForwardTrafficPerMinute; // 0x58
		::System::Single BackwardTrafficPerMinute; // 0x5C
		::Il2CppArray<::RPG::GameCore::NpcWalkStyleWeightInfo*>* WalkStyleOverrideList; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
