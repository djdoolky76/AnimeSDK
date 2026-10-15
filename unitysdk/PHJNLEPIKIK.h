#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class DLECIKAMKEG;
class ECFBNBABDNG;

#define PHJNLEPIKIK_CTOR_OFFSET UNITYSDK_OFFSET(0xC250D90)
#define PHJNLEPIKIK_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xC250DA0)

inline static constexpr unsigned int PHJNLEPIKIK_TypeDefinitionIndex = 78239;

	class PHJNLEPIKIK : public ::KNFCEJEJINK
	{
	public:
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x18
		::ECFBNBABDNG* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::ECFBNBABDNG* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ECFBNBABDNG*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + PHJNLEPIKIK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJNLEPIKIK_MGFLFCHMGPA_OFFSET))(this);
		}

	};
