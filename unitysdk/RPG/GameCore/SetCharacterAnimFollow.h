#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharacterAnimFollow; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERANIMFOLLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA99CD0)
#define RPG_GAMECORE_SETCHARACTERANIMFOLLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA99CE0)
#define RPG_GAMECORE_SETCHARACTERANIMFOLLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA99CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterAnimFollow_TypeDefinitionIndex = 22649;

	class SetCharacterAnimFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* FollowTarget; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERANIMFOLLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterAnimFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterAnimFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERANIMFOLLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterAnimFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterAnimFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERANIMFOLLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
