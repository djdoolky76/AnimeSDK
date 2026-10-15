#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class DLECIKAMKEG;
class JPDKAJCEOAJ;
class LFAIOGHKNNK;

#define EECCFMKPLKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1334E9B0)
#define EECCFMKPLKK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1334F210)
#define EECCFMKPLKK_LJPNMBMBJCB_OFFSET UNITYSDK_OFFSET(0x1334EA70)
#define EECCFMKPLKK_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x1334E9D0)

	class EECCFMKPLKK : public ::KNFCEJEJINK
	{
	public:
		::JPDKAJCEOAJ* MKKLHFCCCNF; // 0x18
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x20
		::LFAIOGHKNNK* NBHJNGJIIEA; // 0x28
		::System::Single MFLNKDOADDG; // 0x30
		::System::Void _ctor(::JPDKAJCEOAJ* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JPDKAJCEOAJ*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + EECCFMKPLKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECCFMKPLKK_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EECCFMKPLKK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void LJPNMBMBJCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECCFMKPLKK_LJPNMBMBJCB_OFFSET))(this);
		}

	};
