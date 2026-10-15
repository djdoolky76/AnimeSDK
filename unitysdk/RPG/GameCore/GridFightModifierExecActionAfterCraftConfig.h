#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterCraftConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D733ED0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D733EE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D733E90)

namespace RPG::GameCore
{
	class GridFightModifierExecActionAfterCraftConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterCraftConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterCraftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterCraftConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterCraftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
