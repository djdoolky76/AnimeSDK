#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueOnFormulaEventConfig; }

#define RPG_GAMECORE_ROGUEONFORMULAEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FC9E0)
#define RPG_GAMECORE_ROGUEONFORMULAEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FC9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueOnFormulaEventConfig_TypeDefinitionIndex = 17789;

	class RogueOnFormulaEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEONFORMULAEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueOnFormulaEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueOnFormulaEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEONFORMULAEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
