#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CameraBattleTransitionAimDirection.h"
#include "unitysdk/RPG/GameCore/CameraBattleTransitionAimPos.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CameraBattleTransitionBeHitConfig; }
namespace RPG::GameCore { class CustomCameraBattleTransitionShotConfig; }
namespace RPG::GameCore { class EnableFreelookCameraBattleTransitionMode; }

#define RPG_GAMECORE_ENABLEFREELOOKCAMERABATTLETRANSITIONMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D611450)
#define RPG_GAMECORE_ENABLEFREELOOKCAMERABATTLETRANSITIONMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D611470)
#define RPG_GAMECORE_ENABLEFREELOOKCAMERABATTLETRANSITIONMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D611410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableFreelookCameraBattleTransitionMode_TypeDefinitionIndex = 20425;

	class EnableFreelookCameraBattleTransitionMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsBattleToMaze; // 0x18
		::System::Boolean Enable; // 0x19
		::System::Byte _padding0[0x2];
		::System::Single OverrideInitBlendTime; // 0x1C
		::System::Single IgnoreAttackerDistance; // 0x20
		::System::Single LongEnterBattleCameraDistance; // 0x24
		::System::Single TransitionSpeed; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::GameCore::CameraBattleTransitionBeHitConfig* SpecialBeHitConfig; // 0x30
		::RPG::MVector2 AimScreenOffset; // 0x38
		::RPG::GameCore::CameraBattleTransitionAimPos CustomShotAimPos; // 0x40
		::RPG::GameCore::CameraBattleTransitionAimDirection CustomShotAimDir; // 0x44
		::Il2CppArray<::RPG::GameCore::CustomCameraBattleTransitionShotConfig*>* CustomShotConfigs; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFREELOOKCAMERABATTLETRANSITIONMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableFreelookCameraBattleTransitionMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableFreelookCameraBattleTransitionMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFREELOOKCAMERABATTLETRANSITIONMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableFreelookCameraBattleTransitionMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableFreelookCameraBattleTransitionMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFREELOOKCAMERABATTLETRANSITIONMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
