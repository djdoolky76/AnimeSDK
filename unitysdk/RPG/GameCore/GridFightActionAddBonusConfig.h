#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddBonusConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x205F92F0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x205F9300)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x205F92B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddBonusConfig_TypeDefinitionIndex = 19488;

	class GridFightActionAddBonusConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBONUSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
