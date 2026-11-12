#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierChangeRoleByRegionConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYREGIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E940860)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYREGIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E940870)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYREGIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E940820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierChangeRoleByRegionConfig_TypeDefinitionIndex = 19696;

	class GridFightModifierChangeRoleByRegionConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYREGIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierChangeRoleByRegionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierChangeRoleByRegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYREGIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierChangeRoleByRegionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierChangeRoleByRegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYREGIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
