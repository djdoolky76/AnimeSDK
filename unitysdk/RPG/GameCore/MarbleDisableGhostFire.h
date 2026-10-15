#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleDisableGhostFire; }

#define RPG_GAMECORE_MARBLEDISABLEGHOSTFIRE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83C6B0)
#define RPG_GAMECORE_MARBLEDISABLEGHOSTFIRE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D83C6C0)
#define RPG_GAMECORE_MARBLEDISABLEGHOSTFIRE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83C620)

namespace RPG::GameCore
{
	class MarbleDisableGhostFire : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDISABLEGHOSTFIRE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleDisableGhostFire* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleDisableGhostFire*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDISABLEGHOSTFIRE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleDisableGhostFire* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleDisableGhostFire*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDISABLEGHOSTFIRE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
