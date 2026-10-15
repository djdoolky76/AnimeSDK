#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetLocalPlayerDitherAlpha; }

#define RPG_GAMECORE_SETLOCALPLAYERDITHERALPHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB8440)
#define RPG_GAMECORE_SETLOCALPLAYERDITHERALPHA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB8450)
#define RPG_GAMECORE_SETLOCALPLAYERDITHERALPHA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB8410)

namespace RPG::GameCore
{
	class SetLocalPlayerDitherAlpha : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single DitherAlpha; // 0x18
		::System::Single Duration; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALPLAYERDITHERALPHA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLocalPlayerDitherAlpha* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLocalPlayerDitherAlpha*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALPLAYERDITHERALPHA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLocalPlayerDitherAlpha* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLocalPlayerDitherAlpha*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALPLAYERDITHERALPHA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
