#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DNPMCMHDJLC.h"

#define BJIDGPFGOIL_NEJLIOPBFEE_BOLCOHMFCDP_OFFSET UNITYSDK_OFFSET(0xF79D3F0)
#define BJIDGPFGOIL_NEJLIOPBFEE__CTOR_OFFSET UNITYSDK_OFFSET(0xF79D3E0)

inline static constexpr unsigned int BJIDGPFGOIL_NEJLIOPBFEE_TypeDefinitionIndex = 47309;

class BJIDGPFGOIL_NEJLIOPBFEE : public ::System::Object
{
public:
	::System::Int32 IJKOLMELBBC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIDGPFGOIL_NEJLIOPBFEE__CTOR_OFFSET))(this);
	}

	::System::Boolean BOLCOHMFCDP(::DNPMCMHDJLC IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::DNPMCMHDJLC))((::PBYTE)hIl2Cpp + BJIDGPFGOIL_NEJLIOPBFEE_BOLCOHMFCDP_OFFSET))(this, IMLLDOHDCNC);
	}
};
