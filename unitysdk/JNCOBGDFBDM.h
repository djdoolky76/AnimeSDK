#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOKKFAJCOLI;
class DEGELHCLDJB;
class EBMNAMMEFKB;
class FAODCLALLME;
class FEIPLKMMIOI;
class HKAJMEMCBLC;
class PEAFBFCPFCC;
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }

#define JNCOBGDFBDM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB27A250)
#define JNCOBGDFBDM_CTOR_OFFSET UNITYSDK_OFFSET(0xB27A220)

	class JNCOBGDFBDM : public ::System::Object
	{
	public:
		::EBMNAMMEFKB* KMPBGOHKMAO; // 0x10
		::FAODCLALLME* ILMLNDPKFNO; // 0x18
		::DEGELHCLDJB* JNBGEJAAMEG; // 0x20
		::PEAFBFCPFCC* MHBFNKIFLNN; // 0x28
		::BOKKFAJCOLI* BNIJMCMIILO; // 0x30
		::FEIPLKMMIOI* DEEMJACOGII; // 0x38
		::System::Void _ctor(::DEGELHCLDJB* a1, ::FEIPLKMMIOI* a2, ::BOKKFAJCOLI* a3, ::PEAFBFCPFCC* a4, ::FAODCLALLME* a5, ::EBMNAMMEFKB* a6)
		{
			return ((::System::Void(*)(::PVOID, ::DEGELHCLDJB*, ::FEIPLKMMIOI*, ::BOKKFAJCOLI*, ::PEAFBFCPFCC*, ::FAODCLALLME*, ::EBMNAMMEFKB*))((::PBYTE)hIl2Cpp + JNCOBGDFBDM_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* BPLPBPMEODA(::HKAJMEMCBLC* a1)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + JNCOBGDFBDM_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
