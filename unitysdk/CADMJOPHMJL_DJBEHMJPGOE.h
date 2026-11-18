#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NHCBIIMKLBK;

#define CADMJOPHMJL_DJBEHMJPGOE_LKEDPAJJBOA_OFFSET UNITYSDK_OFFSET(0x159A65F0)
#define CADMJOPHMJL_DJBEHMJPGOE__CTOR_OFFSET UNITYSDK_OFFSET(0x159A65E0)

inline static constexpr unsigned int CADMJOPHMJL_DJBEHMJPGOE_TypeDefinitionIndex = 41230;

class CADMJOPHMJL_DJBEHMJPGOE : public ::System::Object
{
public:
	::System::UInt32 ACHBBPJIBIE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMJOPHMJL_DJBEHMJPGOE__CTOR_OFFSET))(this);
	}

	::System::Boolean LKEDPAJJBOA(::NHCBIIMKLBK* LILKIGNNLAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::NHCBIIMKLBK*))((::PBYTE)hIl2Cpp + CADMJOPHMJL_DJBEHMJPGOE_LKEDPAJJBOA_OFFSET))(this, LILKIGNNLAJ);
	}
};
