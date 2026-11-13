#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIFCLJJAOFJ.h"
#include "unitysdk/HMJGCFJMEAH.h"
class KCMGAIFFBPL;

#define PGFHFMJNOHD_CTOR_OFFSET UNITYSDK_OFFSET(0x16D8E110)
#define PGFHFMJNOHD_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x16D8DCC0)
#define PGFHFMJNOHD_PLCNHMDHPLH_1_OFFSET UNITYSDK_OFFSET(0x16D8E0A0)
#define PGFHFMJNOHD_PLCNHMDHPLH_OFFSET UNITYSDK_OFFSET(0x16D8DD60)

inline static constexpr unsigned int PGFHFMJNOHD_TypeDefinitionIndex = 55307;

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
