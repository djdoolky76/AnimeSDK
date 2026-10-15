#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierRandomRoleDelayGrantConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMROLEDELAYGRANTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7352A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMROLEDELAYGRANTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7352B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMROLEDELAYGRANTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735260)

namespace RPG::GameCore
{
	class GridFightModifierRandomRoleDelayGrantConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMROLEDELAYGRANTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRandomRoleDelayGrantConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRandomRoleDelayGrantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMROLEDELAYGRANTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRandomRoleDelayGrantConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRandomRoleDelayGrantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMROLEDELAYGRANTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
