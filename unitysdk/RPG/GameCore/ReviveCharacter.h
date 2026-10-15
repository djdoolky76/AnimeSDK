#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ReviveCharacter; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REVIVECHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9997C0)
#define RPG_GAMECORE_REVIVECHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9998C0)
#define RPG_GAMECORE_REVIVECHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D999690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReviveCharacter_TypeDefinitionIndex = 22718;

	class ReviveCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* HPRatio; // 0x20
		::RPG::GameCore::DynamicFloat* SPRatio; // 0x28
		::RPG::GameCore::DynamicFloat* ActionDelayRatio; // 0x30
		::System::String* AnimStateName; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVIVECHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReviveCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReviveCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVIVECHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReviveCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReviveCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVIVECHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
