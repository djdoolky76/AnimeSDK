#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseSortConfig.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/ResolveMultiValueType.h"
#include "unitysdk/RPG/GameCore/SortRuleType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SortByModifierValue; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SORTBYMODIFIERVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC3D40)
#define RPG_GAMECORE_SORTBYMODIFIERVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC3D50)
#define RPG_GAMECORE_SORTBYMODIFIERVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC3D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SortByModifierValue_TypeDefinitionIndex = 18260;

	class SortByModifierValue : public ::RPG::GameCore::BaseSortConfig
	{
	public:
		::RPG::GameCore::SortRuleType SortRule; // 0x10
		::RPG::GameCore::ResolveMultiValueType ResolveType; // 0x14
		::System::String* ModifierName; // 0x18
		::RPG::GameCore::ModifierValueType ValueType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ModifierCaster; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTBYMODIFIERVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SortByModifierValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SortByModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTBYMODIFIERVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SortByModifierValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SortByModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTBYMODIFIERVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
