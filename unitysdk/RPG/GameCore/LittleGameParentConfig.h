#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameParentConfig; }

#define RPG_GAMECORE_LITTLEGAMEPARENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E54D0)
#define RPG_GAMECORE_LITTLEGAMEPARENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E54E0)
#define RPG_GAMECORE_LITTLEGAMEPARENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E5430)

namespace RPG::GameCore
{
	class LittleGameParentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 ParentID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPARENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameParentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameParentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPARENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameParentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameParentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPARENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
