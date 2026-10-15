#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class DLECIKAMKEG;
class KKJPCAPMGEL;

#define PAOKIIFHBPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFDE210)
#define PAOKIIFHBPJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBFDEAC0)
#define PAOKIIFHBPJ_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xBFDE220)

	class PAOKIIFHBPJ : public ::KNFCEJEJINK
	{
	public:
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x18
		::KKJPCAPMGEL* MKKLHFCCCNF; // 0x20
		::System::Boolean OELBLBCINNB; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single BPAIDCADMDO; // 0x2C
		::System::Void _ctor(::KKJPCAPMGEL* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KKJPCAPMGEL*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + PAOKIIFHBPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOKIIFHBPJ_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAOKIIFHBPJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
