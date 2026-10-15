#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierElationHeroConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERELATIONHEROCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D733A50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERELATIONHEROCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D733A60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERELATIONHEROCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D733A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierElationHeroConfig_TypeDefinitionIndex = 19480;

	class GridFightModifierElationHeroConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERELATIONHEROCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierElationHeroConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierElationHeroConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERELATIONHEROCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierElationHeroConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierElationHeroConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERELATIONHEROCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
