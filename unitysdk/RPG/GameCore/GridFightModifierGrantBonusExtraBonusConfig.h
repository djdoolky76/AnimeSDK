#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierGrantBonusExtraBonusConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERGRANTBONUSEXTRABONUSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BA060)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGRANTBONUSEXTRABONUSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BA070)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGRANTBONUSEXTRABONUSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BA020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierGrantBonusExtraBonusConfig_TypeDefinitionIndex = 19635;

	class GridFightModifierGrantBonusExtraBonusConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGRANTBONUSEXTRABONUSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierGrantBonusExtraBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierGrantBonusExtraBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGRANTBONUSEXTRABONUSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierGrantBonusExtraBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierGrantBonusExtraBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGRANTBONUSEXTRABONUSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
