#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttractEnemySelectMode.h"
#include "unitysdk/RPG/GameCore/PropAttractEnemyBehaviourType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropAttractEnemy; }

#define RPG_GAMECORE_PROPATTRACTENEMY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9455E0)
#define RPG_GAMECORE_PROPATTRACTENEMY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9455F0)
#define RPG_GAMECORE_PROPATTRACTENEMY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9455A0)

namespace RPG::GameCore
{
	class PropAttractEnemy : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AttractEnemySelectMode SelectMode; // 0x18
		::System::Single Distance; // 0x1C
		::RPG::GameCore::PropAttractEnemyBehaviourType BehaviourType; // 0x20
		::System::Single DeltaValue; // 0x24
		::System::Boolean IsUseDistanceFunction; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single MinDistanX; // 0x2C
		::System::Single MinDistanY; // 0x30
		::System::Boolean IsCheckStageCollider; // 0x34
		::System::Byte _padding1[0x3];
		::RPG::GameCore::DynamicFloat* GroupID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTRACTENEMY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropAttractEnemy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropAttractEnemy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTRACTENEMY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropAttractEnemy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropAttractEnemy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTRACTENEMY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
