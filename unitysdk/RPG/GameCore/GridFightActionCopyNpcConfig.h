#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionCopyNpcConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7248B0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7248C0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D724B30)

namespace RPG::GameCore
{
	class GridFightActionCopyNpcConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionCopyNpcConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionCopyNpcConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionCopyNpcConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionCopyNpcConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
