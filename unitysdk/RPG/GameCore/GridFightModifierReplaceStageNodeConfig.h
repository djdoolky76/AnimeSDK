#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierReplaceStageNodeConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESTAGENODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735480)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESTAGENODECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735490)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESTAGENODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735440)

namespace RPG::GameCore
{
	class GridFightModifierReplaceStageNodeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESTAGENODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReplaceStageNodeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReplaceStageNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESTAGENODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReplaceStageNodeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReplaceStageNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESTAGENODECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
