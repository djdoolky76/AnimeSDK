#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class CDDIGGIDLNK;
class DABODGCJPHG;

#define OGDKPBGBNIA_CTOR_OFFSET UNITYSDK_OFFSET(0x18DFB9E0)
#define OGDKPBGBNIA_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x18DFB9F0)

inline static constexpr unsigned int OGDKPBGBNIA_TypeDefinitionIndex = 80986;

	class OGDKPBGBNIA : public ::KNFCEJEJINK
	{
	public:
		::DABODGCJPHG* MKKLHFCCCNF; // 0x18
		::CDDIGGIDLNK* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::DABODGCJPHG* a1, ::CDDIGGIDLNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DABODGCJPHG*, ::CDDIGGIDLNK*))((::PBYTE)hIl2Cpp + OGDKPBGBNIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDKPBGBNIA_MGFLFCHMGPA_OFFSET))(this);
		}

	};
