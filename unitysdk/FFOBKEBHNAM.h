#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class JPOKOHEHHLL;
namespace RPG::Client { class RPGAnimationEvent; }
namespace UnityEngine { class Animator; }

#define FFOBKEBHNAM_ABPPHEDINPP_OFFSET UNITYSDK_OFFSET(0x1574D1D0)
#define FFOBKEBHNAM_CHKHMMGCPCB_OFFSET UNITYSDK_OFFSET(0x1574D040)
#define FFOBKEBHNAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1574D340)
#define FFOBKEBHNAM_IAALPPGKDGL_OFFSET UNITYSDK_OFFSET(0x1574D140)
#define FFOBKEBHNAM_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0x1574D290)
#define FFOBKEBHNAM_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0x1574D2E0)
#define FFOBKEBHNAM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1574CF50)
#define FFOBKEBHNAM_PPOAJKIINKG_OFFSET UNITYSDK_OFFSET(0x1574D0B0)
#define FFOBKEBHNAM__ONBIND_OFFSET UNITYSDK_OFFSET(0x1574CD40)

	class FFOBKEBHNAM : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x60
		::JPOKOHEHHLL* IGHAHBNLIJA; // 0x68
		::UnityEngine::Animator* APPGGMLEPLN; // 0x70
		// static const ::System::String* EBAKNDKIBNB; // 0x0
		// static const ::System::String* PFJFHHIGEGO; // 0x0
		// static const ::System::String* ANNJJNJGDAJ; // 0x0
		// static const ::System::String* IIFENECAOBG; // 0x0
		// static const ::System::String* CGNGHKIIGCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOBKEBHNAM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOBKEBHNAM__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::JPOKOHEHHLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPOKOHEHHLL*))((::PBYTE)hIl2Cpp + FFOBKEBHNAM_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void CHKHMMGCPCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOBKEBHNAM_CHKHMMGCPCB_OFFSET))(this);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOBKEBHNAM_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void PPOAJKIINKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOBKEBHNAM_PPOAJKIINKG_OFFSET))(this);
		}

		::System::Void IAALPPGKDGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOBKEBHNAM_IAALPPGKDGL_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOBKEBHNAM_KBGNFAKDHEH_OFFSET))(this);
		}

		::System::Void ABPPHEDINPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOBKEBHNAM_ABPPHEDINPP_OFFSET))(this);
		}

	};
