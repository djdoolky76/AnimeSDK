#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EBJBACDPFOF_AMIIJLCNEIH_CTOR_OFFSET UNITYSDK_OFFSET(0x12CF9DC0)
#define EBJBACDPFOF_AMIIJLCNEIH_JPPDJPLJIBC_OFFSET UNITYSDK_OFFSET(0x12CF9FC0)
#define EBJBACDPFOF_AMIIJLCNEIH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x12CF9DD0)

inline static constexpr unsigned int EBJBACDPFOF_AMIIJLCNEIH_TypeDefinitionIndex = 77259;

	class EBJBACDPFOF_AMIIJLCNEIH : public ::System::Object
	{
	public:
		::System::Single JPGJKKALABB; // 0x10
		::System::Single ACKIEMLOEDI; // 0x14
		::System::Single FNMALLOEKND; // 0x18
		::System::Single MDPEGPCJEME; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJBACDPFOF_AMIIJLCNEIH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EBJBACDPFOF_AMIIJLCNEIH_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JPPDJPLJIBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJBACDPFOF_AMIIJLCNEIH_JPPDJPLJIBC_OFFSET))(this);
		}

	};
