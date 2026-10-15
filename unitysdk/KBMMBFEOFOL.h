#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJFEFCNBJNO;
class NIEPBHBOCBI;
class OFEODCOJNKB;

#define KBMMBFEOFOL_CTOR_OFFSET UNITYSDK_OFFSET(0xB31AB20)
#define KBMMBFEOFOL_LDEBBDHIMGH_OFFSET UNITYSDK_OFFSET(0xB31AB30)

inline static constexpr unsigned int KBMMBFEOFOL_TypeDefinitionIndex = 63932;

	class KBMMBFEOFOL : public ::System::Object
	{
	public:
		::DJFEFCNBJNO* BOMFMBPNFJI; // 0x10
		::OFEODCOJNKB* OHEKGEFGDPJ; // 0x18
		::System::Void _ctor(::OFEODCOJNKB* a1, ::DJFEFCNBJNO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OFEODCOJNKB*, ::DJFEFCNBJNO*))((::PBYTE)hIl2Cpp + KBMMBFEOFOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LDEBBDHIMGH(::NIEPBHBOCBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIEPBHBOCBI*))((::PBYTE)hIl2Cpp + KBMMBFEOFOL_LDEBBDHIMGH_OFFSET))(this, a1);
		}

	};
