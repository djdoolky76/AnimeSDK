#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIModifierNameSelector; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SortByModifierValue; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_AIMODIFIERNAMESELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33A050)
#define RPG_GAMECORE_AIMODIFIERNAMESELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D33A0B0)
#define RPG_GAMECORE_AIMODIFIERNAMESELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D339FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIModifierNameSelector_TypeDefinitionIndex = 15597;

	class AIModifierNameSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::System::String* ModifierName; // 0x10
		::System::Boolean InverseResultFlag; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* ModifierCaster; // 0x20
		::RPG::GameCore::DynamicFloat* MaxNumber; // 0x28
		::RPG::GameCore::SortByModifierValue* SortConfig; // 0x30
		::System::Boolean RandomWhenEquals; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMODIFIERNAMESELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIModifierNameSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIModifierNameSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMODIFIERNAMESELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIModifierNameSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIModifierNameSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMODIFIERNAMESELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
