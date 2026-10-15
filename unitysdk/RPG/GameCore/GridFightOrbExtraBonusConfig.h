#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightOrbExtraBonusConfig; }

#define RPG_GAMECORE_GRIDFIGHTORBEXTRABONUSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D737B00)
#define RPG_GAMECORE_GRIDFIGHTORBEXTRABONUSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D737AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightOrbExtraBonusConfig_TypeDefinitionIndex = 19407;

	class GridFightOrbExtraBonusConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTORBEXTRABONUSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightOrbExtraBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightOrbExtraBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTORBEXTRABONUSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
