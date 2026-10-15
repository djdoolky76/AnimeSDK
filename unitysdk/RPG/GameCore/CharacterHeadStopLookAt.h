#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterHeadStopLookAt; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERHEADSTOPLOOKAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D572030)
#define RPG_GAMECORE_CHARACTERHEADSTOPLOOKAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D572040)
#define RPG_GAMECORE_CHARACTERHEADSTOPLOOKAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D571FF0)

namespace RPG::GameCore
{
	class CharacterHeadStopLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Single FadeOutTime; // 0x20
		::System::Boolean WaitUntilFinish; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADSTOPLOOKAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterHeadStopLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterHeadStopLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADSTOPLOOKAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterHeadStopLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterHeadStopLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADSTOPLOOKAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
