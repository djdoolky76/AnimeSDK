#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseSortConfig.h"
#include "unitysdk/RPG/GameCore/ResolveMultiValueType.h"
#include "unitysdk/RPG/GameCore/SortRuleType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SortByModifierDynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_SORTBYMODIFIERDYNAMICFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF1400)
#define RPG_GAMECORE_SORTBYMODIFIERDYNAMICFLOAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAF1410)
#define RPG_GAMECORE_SORTBYMODIFIERDYNAMICFLOAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF13B0)

namespace RPG::GameCore
{
	class SortByModifierDynamicFloat : public ::RPG::GameCore::BaseSortConfig
	{
	public:
		::RPG::GameCore::SortRuleType SortRule; // 0x10
		::RPG::GameCore::ResolveMultiValueType ResolveType; // 0x14
		::System::String* ModifierName; // 0x18
		::System::String* DynamicFloatKey; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTBYMODIFIERDYNAMICFLOAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SortByModifierDynamicFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SortByModifierDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTBYMODIFIERDYNAMICFLOAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SortByModifierDynamicFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SortByModifierDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTBYMODIFIERDYNAMICFLOAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
