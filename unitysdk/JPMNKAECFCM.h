#pragma once
#include "unitysdk/unitysdk.h"

#define JPMNKAECFCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CB260)
#define JPMNKAECFCM_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xB2CAD50)
#define JPMNKAECFCM_IDGNPDMICLA_OFFSET UNITYSDK_OFFSET(0xB2CADD0)
#define JPMNKAECFCM_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB2CAE50)

inline static constexpr unsigned int JPMNKAECFCM_TypeDefinitionIndex = 68694;

	class JPMNKAECFCM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMNKAECFCM_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMNKAECFCM_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void IDGNPDMICLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMNKAECFCM_IDGNPDMICLA_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JPMNKAECFCM_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
