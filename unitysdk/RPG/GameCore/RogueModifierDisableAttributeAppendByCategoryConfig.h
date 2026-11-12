#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierDisableAttributeAppendByCategoryConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERDISABLEATTRIBUTEAPPENDBYCATEGORYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC27280)
#define RPG_GAMECORE_ROGUEMODIFIERDISABLEATTRIBUTEAPPENDBYCATEGORYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC27290)
#define RPG_GAMECORE_ROGUEMODIFIERDISABLEATTRIBUTEAPPENDBYCATEGORYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC27240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierDisableAttributeAppendByCategoryConfig_TypeDefinitionIndex = 18013;

	class RogueModifierDisableAttributeAppendByCategoryConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDISABLEATTRIBUTEAPPENDBYCATEGORYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierDisableAttributeAppendByCategoryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierDisableAttributeAppendByCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDISABLEATTRIBUTEAPPENDBYCATEGORYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierDisableAttributeAppendByCategoryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierDisableAttributeAppendByCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDISABLEATTRIBUTEAPPENDBYCATEGORYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
