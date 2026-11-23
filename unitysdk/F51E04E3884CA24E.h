#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AC53E891708F142C.h"

#define F51E04E3884CA24E_A1DD152114916AAB_OFFSET UNITYSDK_OFFSET(0x4452960)
#define F51E04E3884CA24E_F8784EE9DBC80DC9_OFFSET UNITYSDK_OFFSET(0x29136C0)
#define F51E04E3884CA24E__CTOR_OFFSET UNITYSDK_OFFSET(0x44528D0)

inline static constexpr unsigned int F51E04E3884CA24E_TypeDefinitionIndex = 19050;

class F51E04E3884CA24E : public ::AC53E891708F142C
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F51E04E3884CA24E__CTOR_OFFSET))(this);
	}

	::System::Int32 A1DD152114916AAB(::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + F51E04E3884CA24E_A1DD152114916AAB_OFFSET))(this, B48C66E5FB2449C6);
	}

	::System::Int32 F8784EE9DBC80DC9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + F51E04E3884CA24E_F8784EE9DBC80DC9_OFFSET))(this);
	}
};
