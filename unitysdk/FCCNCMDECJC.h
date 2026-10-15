#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMMIGNNAIJB.h"
class AIMNKMEFBKE;
class GGDIMKDOIGA;

#define FCCNCMDECJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C611990)
#define FCCNCMDECJC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6119A0)

	class FCCNCMDECJC : public ::PMMIGNNAIJB
	{
	public:
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x18
		::GGDIMKDOIGA* CCPHCIBGFJB; // 0x20
		::System::Void _ctor(::GGDIMKDOIGA* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGDIMKDOIGA*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + FCCNCMDECJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCNCMDECJC_INITIALIZE_OFFSET))(this);
		}

	};
