#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class BIEPBBGBOEI;
class DLECIKAMKEG;

#define FAMBPBIPGOA_CTOR_OFFSET UNITYSDK_OFFSET(0x15686520)
#define FAMBPBIPGOA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15686F10)
#define FAMBPBIPGOA_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x15686530)
#define FAMBPBIPGOA__ONSTART_B__1_0_OFFSET UNITYSDK_OFFSET(0x15686F90)

	class FAMBPBIPGOA : public ::KNFCEJEJINK
	{
	public:
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x18
		::BIEPBBGBOEI* MKKLHFCCCNF; // 0x20
		::System::Int32 FBDCHMOCGLK; // 0x28
		::System::Void _ctor(::BIEPBBGBOEI* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BIEPBBGBOEI*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + FAMBPBIPGOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMBPBIPGOA_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FAMBPBIPGOA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void _OnStart_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMBPBIPGOA__ONSTART_B__1_0_OFFSET))(this);
		}

	};
