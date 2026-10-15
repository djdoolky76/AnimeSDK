#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIFCLJJAOFJ.h"
#include "unitysdk/HMJGCFJMEAH.h"
class KCMGAIFFBPL;

#define PGFHFMJNOHD_CTOR_OFFSET UNITYSDK_OFFSET(0xC21FA00)
#define PGFHFMJNOHD_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xC21F650)
#define PGFHFMJNOHD_PLCNHMDHPLH_1_OFFSET UNITYSDK_OFFSET(0xC21F990)
#define PGFHFMJNOHD_PLCNHMDHPLH_OFFSET UNITYSDK_OFFSET(0xC21F6F0)

	class PGFHFMJNOHD : public ::KIFCLJJAOFJ
	{
	public:
		::KCMGAIFFBPL* CAJGEBFJHAL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFHFMJNOHD_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFHFMJNOHD_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void PLCNHMDHPLH(::HMJGCFJMEAH a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMJGCFJMEAH))((::PBYTE)hIl2Cpp + PGFHFMJNOHD_PLCNHMDHPLH_OFFSET))(this, a1);
		}

		::System::Void PLCNHMDHPLH_1(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + PGFHFMJNOHD_PLCNHMDHPLH_1_OFFSET))(this, a1);
		}

	};
