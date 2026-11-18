#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DBEEELCGJOA;

#define HCHNAGJOFHJ_NGCOHOCBDHC_NEHMCOFHJML_OFFSET UNITYSDK_OFFSET(0x1DAC0A10)
#define HCHNAGJOFHJ_NGCOHOCBDHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC0A00)

inline static constexpr unsigned int HCHNAGJOFHJ_NGCOHOCBDHC_TypeDefinitionIndex = 94278;

class HCHNAGJOFHJ_NGCOHOCBDHC : public ::System::Object
{
public:
	::DBEEELCGJOA* GIAEPMKCBIB; // 0x10
	::DBEEELCGJOA* JLLEANHGHOI; // 0x18
	::System::Single GMLDNPGFAAE; // 0x20
	::System::Single JBGLCAFPGHK; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHNAGJOFHJ_NGCOHOCBDHC__CTOR_OFFSET))(this);
	}

	::System::Boolean NEHMCOFHJML(::DBEEELCGJOA* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::DBEEELCGJOA*))((::PBYTE)hIl2Cpp + HCHNAGJOFHJ_NGCOHOCBDHC_NEHMCOFHJML_OFFSET))(this, KECKGDFIALJ);
	}
};
