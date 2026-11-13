#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class CDDIGGIDLNK;
class IMKCHCHHJPC;

#define BGGIEMPODMD_CTOR_OFFSET UNITYSDK_OFFSET(0x151C2030)
#define BGGIEMPODMD_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x151C2040)

inline static constexpr unsigned int BGGIEMPODMD_TypeDefinitionIndex = 80997;

	class BGGIEMPODMD : public ::KNFCEJEJINK
	{
	public:
		::IMKCHCHHJPC* MKKLHFCCCNF; // 0x18
		::CDDIGGIDLNK* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::IMKCHCHHJPC* a1, ::CDDIGGIDLNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IMKCHCHHJPC*, ::CDDIGGIDLNK*))((::PBYTE)hIl2Cpp + BGGIEMPODMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGIEMPODMD_MGFLFCHMGPA_OFFSET))(this);
		}

	};
