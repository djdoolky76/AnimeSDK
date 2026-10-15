#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimCreateMascotFakePlayerAction; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCREATEMASCOTFAKEPLAYERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B6730)
#define RPG_GAMECORE_FIVEDIMCREATEMASCOTFAKEPLAYERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B6740)
#define RPG_GAMECORE_FIVEDIMCREATEMASCOTFAKEPLAYERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B6700)

namespace RPG::GameCore
{
	class FiveDimCreateMascotFakePlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 BornEntityID; // 0x10
		::System::UInt32 LegalAreaTriggerID; // 0x14
		::System::Boolean MirrorInput; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameEvent* OnCaught; // 0x20
		::RPG::GameCore::LittleGameEvent* OnCaughtLeft; // 0x28
		::RPG::GameCore::LittleGameEvent* OnCaughtRight; // 0x30
		::RPG::GameCore::LittleGameEvent* OnQuit; // 0x38
		::RPG::GameCore::FiveDimEffectItem* QuitEffectPath; // 0x40
		::System::String* CaughtEffectPath; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCREATEMASCOTFAKEPLAYERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCREATEMASCOTFAKEPLAYERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCREATEMASCOTFAKEPLAYERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
