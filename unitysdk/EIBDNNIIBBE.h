#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKAJMEMCBLC;
class KIEIGGGKJOD;
class OBJANKHLNGO;
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }

#define EIBDNNIIBBE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x154BBB20)
#define EIBDNNIIBBE_CTOR_OFFSET UNITYSDK_OFFSET(0x154BBB10)

	class EIBDNNIIBBE : public ::System::Object
	{
	public:
		::KIEIGGGKJOD* DCJKFEDHKFF; // 0x10
		::OBJANKHLNGO* GJALMBBNNOF; // 0x18
		::System::Void _ctor(::KIEIGGGKJOD* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KIEIGGGKJOD*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + EIBDNNIIBBE_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* BPLPBPMEODA(::HKAJMEMCBLC* a1)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + EIBDNNIIBBE_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
