#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class BFPJJDPNKPN;

#define FCNNNHFGEDD_CTOR_OFFSET UNITYSDK_OFFSET(0x156CF770)
#define FCNNNHFGEDD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x156CF840)
#define FCNNNHFGEDD_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x156CF780)

inline static constexpr unsigned int FCNNNHFGEDD_TypeDefinitionIndex = 78238;

	class FCNNNHFGEDD : public ::KNFCEJEJINK
	{
	public:
		::BFPJJDPNKPN* MKKLHFCCCNF; // 0x18
		::System::Single HBDJCFFDGDD; // 0x20
		::System::Boolean OELBLBCINNB; // 0x24
		::System::Void _ctor(::BFPJJDPNKPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFPJJDPNKPN*))((::PBYTE)hIl2Cpp + FCNNNHFGEDD_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNNNHFGEDD_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCNNNHFGEDD_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
