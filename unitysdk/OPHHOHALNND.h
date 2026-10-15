#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BALLHPKKDDH;
class EBMBCBBKEHJ;
class GBLDMBDDIFJ;
class ODJIEONBGBL;
class POKKCEHMFMJ;

#define OPHHOHALNND_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBFAA940)
#define OPHHOHALNND_CTOR_OFFSET UNITYSDK_OFFSET(0xBFAA880)

	class OPHHOHALNND : public ::System::Object
	{
	public:
		::POKKCEHMFMJ* FKBDFJBMPCC; // 0x10
		::GBLDMBDDIFJ* INKJDHFKFNP; // 0x18
		::ODJIEONBGBL* ELJAHHOIABP; // 0x20
		::System::Void _ctor(::GBLDMBDDIFJ* a1, ::ODJIEONBGBL* a2, ::POKKCEHMFMJ* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GBLDMBDDIFJ*, ::ODJIEONBGBL*, ::POKKCEHMFMJ*))((::PBYTE)hIl2Cpp + OPHHOHALNND_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::EBMBCBBKEHJ* BPLPBPMEODA(::BALLHPKKDDH* a1)
		{
			return ((::EBMBCBBKEHJ*(*)(::PVOID, ::BALLHPKKDDH*))((::PBYTE)hIl2Cpp + OPHHOHALNND_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
