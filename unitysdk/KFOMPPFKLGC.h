#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class DLECIKAMKEG;
class FNHCPKCKBKF;

#define KFOMPPFKLGC_CTOR_OFFSET UNITYSDK_OFFSET(0xB3C2260)
#define KFOMPPFKLGC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB3C2620)
#define KFOMPPFKLGC_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB3C2270)

inline static constexpr unsigned int KFOMPPFKLGC_TypeDefinitionIndex = 78233;

	class KFOMPPFKLGC : public ::KNFCEJEJINK
	{
	public:
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x18
		::FNHCPKCKBKF* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::FNHCPKCKBKF* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FNHCPKCKBKF*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + KFOMPPFKLGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOMPPFKLGC_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFOMPPFKLGC_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
