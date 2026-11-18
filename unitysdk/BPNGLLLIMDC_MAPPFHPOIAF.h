#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEAJMOFMAAK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BPNGLLLIMDC_MAPPFHPOIAF_FKAIKLOJBGN_OFFSET UNITYSDK_OFFSET(0x169350D0)
#define BPNGLLLIMDC_MAPPFHPOIAF__CTOR_OFFSET UNITYSDK_OFFSET(0x169350C0)

inline static constexpr unsigned int BPNGLLLIMDC_MAPPFHPOIAF_TypeDefinitionIndex = 56038;

class BPNGLLLIMDC_MAPPFHPOIAF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MEAJMOFMAAK*>* CIIFFCPJHNJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_MAPPFHPOIAF__CTOR_OFFSET))(this);
	}

	::MEAJMOFMAAK* FKAIKLOJBGN(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::MEAJMOFMAAK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_MAPPFHPOIAF_FKAIKLOJBGN_OFFSET))(this, ACHBBPJIBIE);
	}
};
