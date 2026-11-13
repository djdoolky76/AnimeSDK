#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJFEFCNBJNO;
class NIEPBHBOCBI;
class OFEODCOJNKB;

#define KBMMBFEOFOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1A46D4A0)
#define KBMMBFEOFOL_LDEBBDHIMGH_OFFSET UNITYSDK_OFFSET(0x1A46D4B0)

inline static constexpr unsigned int KBMMBFEOFOL_TypeDefinitionIndex = 65374;

	class KBMMBFEOFOL : public ::System::Object
	{
	public:
		::OFEODCOJNKB* OHEKGEFGDPJ; // 0x10
		::DJFEFCNBJNO* BOMFMBPNFJI; // 0x18
		::System::Void _ctor(::OFEODCOJNKB* a1, ::DJFEFCNBJNO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OFEODCOJNKB*, ::DJFEFCNBJNO*))((::PBYTE)hIl2Cpp + KBMMBFEOFOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LDEBBDHIMGH(::NIEPBHBOCBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIEPBHBOCBI*))((::PBYTE)hIl2Cpp + KBMMBFEOFOL_LDEBBDHIMGH_OFFSET))(this, a1);
		}

	};
