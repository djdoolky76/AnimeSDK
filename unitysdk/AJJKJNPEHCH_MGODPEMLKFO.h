#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOMJDICEKPN;

#define AJJKJNPEHCH_MGODPEMLKFO_OBDBJGPECFD_OFFSET UNITYSDK_OFFSET(0x15503020)
#define AJJKJNPEHCH_MGODPEMLKFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15503010)

inline static constexpr unsigned int AJJKJNPEHCH_MGODPEMLKFO_TypeDefinitionIndex = 83673;

class AJJKJNPEHCH_MGODPEMLKFO : public ::System::Object
{
public:
	::System::Int32 DONFNODEALN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_MGODPEMLKFO__CTOR_OFFSET))(this);
	}

	::System::Boolean OBDBJGPECFD(::FOMJDICEKPN* AIEOEEHCJKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::FOMJDICEKPN*))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_MGODPEMLKFO_OBDBJGPECFD_OFFSET))(this, AIEOEEHCJKB);
	}
};
