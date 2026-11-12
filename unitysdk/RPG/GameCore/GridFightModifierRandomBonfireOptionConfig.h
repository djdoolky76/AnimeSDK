#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierRandomBonfireOptionConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMBONFIREOPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E942E40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMBONFIREOPTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E942E50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMBONFIREOPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E942E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRandomBonfireOptionConfig_TypeDefinitionIndex = 19782;

	class GridFightModifierRandomBonfireOptionConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMBONFIREOPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRandomBonfireOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRandomBonfireOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMBONFIREOPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRandomBonfireOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRandomBonfireOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMBONFIREOPTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
