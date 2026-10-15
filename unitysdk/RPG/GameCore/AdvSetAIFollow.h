#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIFollowMode.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetAIFollow; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETAIFOLLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37F9D0)
#define RPG_GAMECORE_ADVSETAIFOLLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D37FA80)
#define RPG_GAMECORE_ADVSETAIFOLLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37F900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetAIFollow_TypeDefinitionIndex = 22201;

	class AdvSetAIFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean FetchTarget; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* EntityInstanceID; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Boolean FetchFollowTarget; // 0x30
		::System::Byte _padding1[0x7];
		::RPG::GameCore::DynamicFloat* FollowEntityInstanceID; // 0x38
		::RPG::GameCore::TargetEvaluator* FollowTargetType; // 0x40
		::RPG::GameCore::AIFollowMode FollowMode; // 0x48
		::System::Single StopMoveDistance; // 0x4C
		::System::Single StartWalkDistance; // 0x50
		::System::Single StartWalkTime; // 0x54
		::System::Single StartRunDistance; // 0x58
		::System::Single StartSprintDistance; // 0x5C
		::System::Single TeleportDistance; // 0x60
		::System::Single AngleTolerance; // 0x64
		::System::Boolean UseSlot; // 0x68
		::System::Byte _padding2[0x3];
		::RPG::GameCore::AdvancedFollowType FollowType; // 0x6C
		::System::Single StartFollowDistance; // 0x70
		::System::Byte _padding3[0x4];
		::Il2CppArray<::System::Int32>* PreferSlotIDs; // 0x78
		::System::Single PredictTime; // 0x80
		::System::Single Halflife; // 0x84
		::System::Single TeleportDist; // 0x88
		::System::Boolean NeedAvoid; // 0x8C
		::System::Byte _padding4[0x3];
		::System::Single StartAvoidDistance; // 0x90
		::System::Single StartAvoidTime; // 0x94
		::System::Boolean DisableTeleport; // 0x98
		::System::Boolean NoTeleportInCamera; // 0x99
		::System::Boolean UseEvent; // 0x9A
		::System::Byte _padding5[0x5];
		::RPG::GameCore::DynamicString* StartEvent; // 0xA0
		::RPG::GameCore::DynamicString* StopEvent; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAIFOLLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetAIFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetAIFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAIFOLLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetAIFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetAIFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAIFOLLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
