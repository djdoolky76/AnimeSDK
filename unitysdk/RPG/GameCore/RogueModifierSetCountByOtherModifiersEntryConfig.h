#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetCountByOtherModifiersEntryConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSENTRYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ECDB0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSENTRYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9ECD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByOtherModifiersEntryConfig_TypeDefinitionIndex = 17722;

	class RogueModifierSetCountByOtherModifiersEntryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSENTRYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByOtherModifiersEntryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByOtherModifiersEntryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSENTRYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
