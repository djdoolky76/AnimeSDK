#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceEventType.h"
#include "unitysdk/System/Object.h"
class DICKPDFNEHP;
namespace System { class Object; }

#define DICKPDFNEHP___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xEBF1010)
#define DICKPDFNEHP___C__DISPLAYCLASS6_0___REGISTEREVENT_B__0_OFFSET UNITYSDK_OFFSET(0xEBF1330)

	class DICKPDFNEHP___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::DICKPDFNEHP* __4__this; // 0x10
		::RPG::Client::LittleGame::CakeRace::CakeRaceEventType eventType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICKPDFNEHP___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void __RegisterEvent_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DICKPDFNEHP___C__DISPLAYCLASS6_0___REGISTEREVENT_B__0_OFFSET))(this, a1);
		}

	};
