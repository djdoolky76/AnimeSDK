#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class CDDIGGIDLNK;
class MHDDKNOJJOM;

#define HNJKEHLONHN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D8FE00)
#define HNJKEHLONHN_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x15D8FE10)

inline static constexpr unsigned int HNJKEHLONHN_TypeDefinitionIndex = 78253;

	class HNJKEHLONHN : public ::KNFCEJEJINK
	{
	public:
		::MHDDKNOJJOM* MKKLHFCCCNF; // 0x18
		::CDDIGGIDLNK* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::MHDDKNOJJOM* a1, ::CDDIGGIDLNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MHDDKNOJJOM*, ::CDDIGGIDLNK*))((::PBYTE)hIl2Cpp + HNJKEHLONHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJKEHLONHN_MGFLFCHMGPA_OFFSET))(this);
		}

	};
