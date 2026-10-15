#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class DLECIKAMKEG;
class LFAIOGHKNNK;
class LKAPHINNOGA;

#define KHJAJBDFDMP_CTOR_OFFSET UNITYSDK_OFFSET(0xB4099B0)
#define KHJAJBDFDMP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB40A210)
#define KHJAJBDFDMP_LJPNMBMBJCB_OFFSET UNITYSDK_OFFSET(0xB409A70)
#define KHJAJBDFDMP_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB4099D0)

	class KHJAJBDFDMP : public ::KNFCEJEJINK
	{
	public:
		::LFAIOGHKNNK* NBHJNGJIIEA; // 0x18
		::LKAPHINNOGA* MKKLHFCCCNF; // 0x20
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x28
		::System::Single FOMCKBAHCFM; // 0x30
		::System::Single MFLNKDOADDG; // 0x34
		::System::Void _ctor(::LKAPHINNOGA* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LKAPHINNOGA*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + KHJAJBDFDMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJAJBDFDMP_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHJAJBDFDMP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void LJPNMBMBJCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJAJBDFDMP_LJPNMBMBJCB_OFFSET))(this);
		}

	};
