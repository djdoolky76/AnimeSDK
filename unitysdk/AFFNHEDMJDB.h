#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class CDDIGGIDLNK;
class PPNBJAPBFHI;

#define AFFNHEDMJDB_CTOR_OFFSET UNITYSDK_OFFSET(0xCF0B1A0)
#define AFFNHEDMJDB_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xCF0B1B0)

	class AFFNHEDMJDB : public ::KNFCEJEJINK
	{
	public:
		::CDDIGGIDLNK* EEFMDEHLLFI; // 0x18
		::PPNBJAPBFHI* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::PPNBJAPBFHI* a1, ::CDDIGGIDLNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PPNBJAPBFHI*, ::CDDIGGIDLNK*))((::PBYTE)hIl2Cpp + AFFNHEDMJDB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFFNHEDMJDB_MGFLFCHMGPA_OFFSET))(this);
		}

	};
