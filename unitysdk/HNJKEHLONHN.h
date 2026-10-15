#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class CDDIGGIDLNK;
class MHDDKNOJJOM;

#define HNJKEHLONHN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D9C6E0)
#define HNJKEHLONHN_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x15D9C6F0)

inline static constexpr unsigned int HNJKEHLONHN_TypeDefinitionIndex = 78254;

	class HNJKEHLONHN : public ::KNFCEJEJINK
	{
	public:
		::CDDIGGIDLNK* EEFMDEHLLFI; // 0x18
		::MHDDKNOJJOM* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::MHDDKNOJJOM* a1, ::CDDIGGIDLNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MHDDKNOJJOM*, ::CDDIGGIDLNK*))((::PBYTE)hIl2Cpp + HNJKEHLONHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJKEHLONHN_MGFLFCHMGPA_OFFSET))(this);
		}

	};
