#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDBOGJINCFP;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCFC7D20)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS11_0___CREATEPLAYAUDIOCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xCFC7F80)

namespace RPG::Client::FateRin::View::Battle
{
	class FateRinDiscardCardFlowView___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MDBOGJINCFP* audioService; // 0x10
		::System::String* eventName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void __CreatePlayAudioCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS11_0___CREATEPLAYAUDIOCOMMAND_B__0_OFFSET))(this);
		}

	};
}
