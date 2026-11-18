#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKFILKHGAOB_BNCIJLACFPI;

#define IKFILKHGAOB_LBFNHDPKAPF_OIDIPKBFKKJ_OFFSET UNITYSDK_OFFSET(0x1987E570)
#define IKFILKHGAOB_LBFNHDPKAPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1987E560)

inline static constexpr unsigned int IKFILKHGAOB_LBFNHDPKAPF_TypeDefinitionIndex = 92373;

class IKFILKHGAOB_LBFNHDPKAPF : public ::System::Object
{
public:
	::System::Int32 GPMOKAFOLBL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFILKHGAOB_LBFNHDPKAPF__CTOR_OFFSET))(this);
	}

	::System::Boolean OIDIPKBFKKJ(::IKFILKHGAOB_BNCIJLACFPI* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::IKFILKHGAOB_BNCIJLACFPI*))((::PBYTE)hIl2Cpp + IKFILKHGAOB_LBFNHDPKAPF_OIDIPKBFKKJ_OFFSET))(this, LJBPECKCCEA);
	}
};
