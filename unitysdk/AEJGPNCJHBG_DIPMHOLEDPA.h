#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFIAMAJCAOA.h"
#include "unitysdk/System/Object.h"

class PNIHGNDLMIN;

#define AEJGPNCJHBG_DIPMHOLEDPA_FJDHEKFBGPA_OFFSET UNITYSDK_OFFSET(0x134AD7D0)
#define AEJGPNCJHBG_DIPMHOLEDPA__CTOR_OFFSET UNITYSDK_OFFSET(0x134AD7C0)

inline static constexpr unsigned int AEJGPNCJHBG_DIPMHOLEDPA_TypeDefinitionIndex = 75483;

class AEJGPNCJHBG_DIPMHOLEDPA : public ::System::Object
{
public:
	::System::UInt32 KOGDEKEFHGA; // 0x10
	::HFIAMAJCAOA LDCHPADMHIO; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_DIPMHOLEDPA__CTOR_OFFSET))(this);
	}

	::System::Boolean FJDHEKFBGPA(::PNIHGNDLMIN* KOEDLMILGBL)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNIHGNDLMIN*))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_DIPMHOLEDPA_FJDHEKFBGPA_OFFSET))(this, KOEDLMILGBL);
	}
};
