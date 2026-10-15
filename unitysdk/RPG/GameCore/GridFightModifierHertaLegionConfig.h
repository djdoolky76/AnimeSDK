#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierHertaLegionConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERHERTALEGIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D707160)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERHERTALEGIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D707170)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERHERTALEGIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D707120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierHertaLegionConfig_TypeDefinitionIndex = 19399;

	class GridFightModifierHertaLegionConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERHERTALEGIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierHertaLegionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierHertaLegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERHERTALEGIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierHertaLegionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierHertaLegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERHERTALEGIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
