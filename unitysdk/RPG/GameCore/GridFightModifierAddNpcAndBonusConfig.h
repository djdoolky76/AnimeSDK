#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddNpcAndBonusConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDBONUSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060B3F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDBONUSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060B400)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDBONUSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060B3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddNpcAndBonusConfig_TypeDefinitionIndex = 19799;

	class GridFightModifierAddNpcAndBonusConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDBONUSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddNpcAndBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddNpcAndBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDBONUSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddNpcAndBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddNpcAndBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDBONUSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
