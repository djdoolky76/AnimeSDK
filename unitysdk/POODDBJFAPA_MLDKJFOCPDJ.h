#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MIODKPBHOEB;

#define POODDBJFAPA_MLDKJFOCPDJ_HHDNLEDKKLD_OFFSET UNITYSDK_OFFSET(0x1D9D7EE0)
#define POODDBJFAPA_MLDKJFOCPDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D7ED0)

inline static constexpr unsigned int POODDBJFAPA_MLDKJFOCPDJ_TypeDefinitionIndex = 90265;

class POODDBJFAPA_MLDKJFOCPDJ : public ::System::Object
{
public:
	::System::Int32 NACGJJKHEJE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_MLDKJFOCPDJ__CTOR_OFFSET))(this);
	}

	::System::Boolean HHDNLEDKKLD(::MIODKPBHOEB* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MIODKPBHOEB*))((::PBYTE)hIl2Cpp + POODDBJFAPA_MLDKJFOCPDJ_HHDNLEDKKLD_OFFSET))(this, HAAEBCOBKFF);
	}
};
