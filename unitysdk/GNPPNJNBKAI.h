#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEKEIBNBMDJ.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
class CBEBICGIOAB;
class GGJFAFONDHN;
class ODGPPIHLOFF;

#define GNPPNJNBKAI_BAAHEGAIGGF_OFFSET UNITYSDK_OFFSET(0x15B200A0)
#define GNPPNJNBKAI_CKMGEEOAGAD_OFFSET UNITYSDK_OFFSET(0x15B1FFC0)
#define GNPPNJNBKAI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B1FF30)

	class GNPPNJNBKAI : public ::AEKEIBNBMDJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPPNJNBKAI_CTOR_OFFSET))(this);
		}

		::System::Boolean CKMGEEOAGAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPPNJNBKAI_CKMGEEOAGAD_OFFSET))(this);
		}

		::ODGPPIHLOFF* BAAHEGAIGGF(::GGJFAFONDHN* a1, ::EnviromentSystemV2Space::OutputType a2, ::CBEBICGIOAB* a3)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::GGJFAFONDHN*, ::EnviromentSystemV2Space::OutputType, ::CBEBICGIOAB*))((::PBYTE)hIl2Cpp + GNPPNJNBKAI_BAAHEGAIGGF_OFFSET))(this, a1, a2, a3);
		}

	};
