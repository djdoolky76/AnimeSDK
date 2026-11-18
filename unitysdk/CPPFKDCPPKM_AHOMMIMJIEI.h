#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define CPPFKDCPPKM_AHOMMIMJIEI_MIEPOBDNLIC_OFFSET UNITYSDK_OFFSET(0x19D4B6E0)
#define CPPFKDCPPKM_AHOMMIMJIEI__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4B6D0)

inline static constexpr unsigned int CPPFKDCPPKM_AHOMMIMJIEI_TypeDefinitionIndex = 54108;

class CPPFKDCPPKM_AHOMMIMJIEI : public ::System::Object
{
public:
	::System::Type* KMKGKHHLHON; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPFKDCPPKM_AHOMMIMJIEI__CTOR_OFFSET))(this);
	}

	::System::Boolean MIEPOBDNLIC(::System::Type* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CPPFKDCPPKM_AHOMMIMJIEI_MIEPOBDNLIC_OFFSET))(this, IMLLDOHDCNC);
	}
};
