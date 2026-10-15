#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNEGKIBNHLD.h"
class AIMNKMEFBKE;
class CJCHKDLALDN;
class PLAJONHLDJN;

#define AHLKNNCGEIH_BDFPECFMJAB_OFFSET UNITYSDK_OFFSET(0x1C589030)
#define AHLKNNCGEIH_BGGBCGDCJLL_OFFSET UNITYSDK_OFFSET(0x1C588E80)
#define AHLKNNCGEIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C588E60)
#define AHLKNNCGEIH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C589100)

inline static constexpr unsigned int AHLKNNCGEIH_TypeDefinitionIndex = 36494;

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
