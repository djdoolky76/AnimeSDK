#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNBPBKLLMNG;

#define KNBPBKLLMNG_OKAHJAHEDLF_CPJJMFHAODG_OFFSET UNITYSDK_OFFSET(0x1634CC40)
#define KNBPBKLLMNG_OKAHJAHEDLF__CTOR_OFFSET UNITYSDK_OFFSET(0x1634CC30)

inline static constexpr unsigned int KNBPBKLLMNG_OKAHJAHEDLF_TypeDefinitionIndex = 47032;

class KNBPBKLLMNG_OKAHJAHEDLF : public ::System::Object
{
public:
	::KNBPBKLLMNG* KLHPEBKNIFB; // 0x10
	::System::Int32 LEHABHCOMGH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_OKAHJAHEDLF__CTOR_OFFSET))(this);
	}

	::System::Void CPJJMFHAODG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_OKAHJAHEDLF_CPJJMFHAODG_OFFSET))(this);
	}
};
