#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBOGGJCJLJD.h"
#include "unitysdk/System/Object.h"

class ICJMAEDEHJB;

#define CFFFHMLOKPF_LECCPHKHMHK_OFFSET UNITYSDK_OFFSET(0x10E35250)
#define CFFFHMLOKPF__CTOR_OFFSET UNITYSDK_OFFSET(0x10E35240)

inline static constexpr unsigned int CFFFHMLOKPF_TypeDefinitionIndex = 67080;

class CFFFHMLOKPF : public ::System::Object
{
public:
	::ICJMAEDEHJB* DEKJDEPKKLH; // 0x10
	::System::UInt32 MOBNMDEDJIP; // 0x18
	::LBOGGJCJLJD FLAHGOKHKAD; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFFHMLOKPF__CTOR_OFFSET))(this);
	}

	::System::Boolean LECCPHKHMHK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFFHMLOKPF_LECCPHKHMHK_OFFSET))(this);
	}
};
