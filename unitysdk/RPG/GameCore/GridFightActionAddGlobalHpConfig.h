#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddGlobalHpConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D723FD0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D723FE0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D723F90)

namespace RPG::GameCore
{
	class GridFightActionAddGlobalHpConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
