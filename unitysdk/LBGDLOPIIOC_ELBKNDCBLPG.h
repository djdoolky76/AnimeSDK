#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIJJKNGDPAJ;

#define LBGDLOPIIOC_ELBKNDCBLPG_COMPARE_OFFSET UNITYSDK_OFFSET(0x15806930)
#define LBGDLOPIIOC_ELBKNDCBLPG__CTOR_OFFSET UNITYSDK_OFFSET(0x15806AD0)

inline static constexpr unsigned int LBGDLOPIIOC_ELBKNDCBLPG_TypeDefinitionIndex = 79846;

class LBGDLOPIIOC_ELBKNDCBLPG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGDLOPIIOC_ELBKNDCBLPG__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::HIJJKNGDPAJ* EJCBEJMGFAJ, ::HIJJKNGDPAJ* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::HIJJKNGDPAJ*, ::HIJJKNGDPAJ*))((::PBYTE)hIl2Cpp + LBGDLOPIIOC_ELBKNDCBLPG_COMPARE_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
