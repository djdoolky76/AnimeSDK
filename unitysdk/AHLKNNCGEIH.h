#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNEGKIBNHLD.h"
class AIMNKMEFBKE;
class CJCHKDLALDN;
class PLAJONHLDJN;

#define AHLKNNCGEIH_BDFPECFMJAB_OFFSET UNITYSDK_OFFSET(0x1D70A9C0)
#define AHLKNNCGEIH_BGGBCGDCJLL_OFFSET UNITYSDK_OFFSET(0x1D70A810)
#define AHLKNNCGEIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70A7F0)
#define AHLKNNCGEIH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D70AA90)

inline static constexpr unsigned int AHLKNNCGEIH_TypeDefinitionIndex = 37422;

	class AHLKNNCGEIH : public ::GNEGKIBNHLD
	{
	public:
		::PLAJONHLDJN* FLMODBLFAGD; // 0x30
		::System::Void _ctor(::PLAJONHLDJN* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PLAJONHLDJN*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + AHLKNNCGEIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BGGBCGDCJLL(::CJCHKDLALDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJCHKDLALDN*))((::PBYTE)hIl2Cpp + AHLKNNCGEIH_BGGBCGDCJLL_OFFSET))(this, a1);
		}

		::CJCHKDLALDN* BDFPECFMJAB()
		{
			return ((::CJCHKDLALDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLKNNCGEIH_BDFPECFMJAB_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLKNNCGEIH_INITIALIZE_OFFSET))(this);
		}

	};
