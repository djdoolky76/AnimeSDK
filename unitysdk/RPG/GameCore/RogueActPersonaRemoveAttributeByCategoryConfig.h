#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaRemoveAttributeByCategoryConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAREMOVEATTRIBUTEBYCATEGORYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D972600)
#define RPG_GAMECORE_ROGUEACTPERSONAREMOVEATTRIBUTEBYCATEGORYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D972610)
#define RPG_GAMECORE_ROGUEACTPERSONAREMOVEATTRIBUTEBYCATEGORYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9725C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRemoveAttributeByCategoryConfig_TypeDefinitionIndex = 19773;

	class RogueActPersonaRemoveAttributeByCategoryConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVEATTRIBUTEBYCATEGORYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRemoveAttributeByCategoryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRemoveAttributeByCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVEATTRIBUTEBYCATEGORYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRemoveAttributeByCategoryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRemoveAttributeByCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVEATTRIBUTEBYCATEGORYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
