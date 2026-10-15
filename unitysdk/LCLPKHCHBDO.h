#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class GBDODOMIMIF;
class JCMDOLKLKEL;
class PGENPMICILM;
class POKKCEHMFMJ;

#define LCLPKHCHBDO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB618B60)
#define LCLPKHCHBDO_CTOR_OFFSET UNITYSDK_OFFSET(0xB618AD0)

	class LCLPKHCHBDO : public ::System::Object
	{
	public:
		::POKKCEHMFMJ* LBNAGLIGKIO; // 0x10
		::JCMDOLKLKEL* ONGDFCGGFDM; // 0x18
		::System::Void _ctor(::JCMDOLKLKEL* a1, ::POKKCEHMFMJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JCMDOLKLKEL*, ::POKKCEHMFMJ*))((::PBYTE)hIl2Cpp + LCLPKHCHBDO_CTOR_OFFSET))(this, a1, a2);
		}

		::PGENPMICILM* BPLPBPMEODA(::AHHNGJGLOKA a1, ::GBDODOMIMIF* a2)
		{
			return ((::PGENPMICILM*(*)(::PVOID, ::AHHNGJGLOKA, ::GBDODOMIMIF*))((::PBYTE)hIl2Cpp + LCLPKHCHBDO_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
