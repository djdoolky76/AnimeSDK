#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddEnhanceConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDENHANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D732AF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDENHANCECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D732B00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDENHANCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D732AB0)

namespace RPG::GameCore
{
	class GridFightModifierAddEnhanceConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDENHANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddEnhanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddEnhanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDENHANCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddEnhanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddEnhanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDENHANCECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
