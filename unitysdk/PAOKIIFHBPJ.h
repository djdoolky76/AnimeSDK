#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class DLECIKAMKEG;
class KKJPCAPMGEL;

#define PAOKIIFHBPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD6D40)
#define PAOKIIFHBPJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBFD75F0)
#define PAOKIIFHBPJ_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xBFD6D50)

inline static constexpr unsigned int PAOKIIFHBPJ_TypeDefinitionIndex = 78239;

	class PAOKIIFHBPJ : public ::KNFCEJEJINK
	{
	public:
		::KKJPCAPMGEL* MKKLHFCCCNF; // 0x18
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x20
		::System::Single BPAIDCADMDO; // 0x28
		::System::Boolean OELBLBCINNB; // 0x2C
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
