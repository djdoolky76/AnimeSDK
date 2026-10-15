#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAutoAddBonusConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D733450)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D733460)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D733410)

namespace RPG::GameCore
{
	class GridFightModifierAutoAddBonusConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAutoAddBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAutoAddBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAutoAddBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAutoAddBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOADDBONUSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
