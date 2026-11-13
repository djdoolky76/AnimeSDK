#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class CDDIGGIDLNK;
class PPNBJAPBFHI;

#define AFFNHEDMJDB_CTOR_OFFSET UNITYSDK_OFFSET(0x18DAF460)
#define AFFNHEDMJDB_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x18DAF470)

inline static constexpr unsigned int AFFNHEDMJDB_TypeDefinitionIndex = 80987;

	class AFFNHEDMJDB : public ::KNFCEJEJINK
	{
	public:
		::PPNBJAPBFHI* MKKLHFCCCNF; // 0x18
		::CDDIGGIDLNK* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::PPNBJAPBFHI* a1, ::CDDIGGIDLNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PPNBJAPBFHI*, ::CDDIGGIDLNK*))((::PBYTE)hIl2Cpp + AFFNHEDMJDB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFFNHEDMJDB_MGFLFCHMGPA_OFFSET))(this);
		}

	};
