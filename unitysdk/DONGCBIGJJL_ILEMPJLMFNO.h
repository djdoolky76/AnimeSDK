#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADEJAGFCBHK;
class DONGCBIGJJL;

#define DONGCBIGJJL_ILEMPJLMFNO_HGJDNLJFKJI_OFFSET UNITYSDK_OFFSET(0x7FDFD70)
#define DONGCBIGJJL_ILEMPJLMFNO__CTOR_OFFSET UNITYSDK_OFFSET(0x7FDFD60)

inline static constexpr unsigned int DONGCBIGJJL_ILEMPJLMFNO_TypeDefinitionIndex = 70483;

class DONGCBIGJJL_ILEMPJLMFNO : public ::System::Object
{
public:
	::DONGCBIGJJL* KLHPEBKNIFB; // 0x10
	::ADEJAGFCBHK* JNMAEDAAGAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_ILEMPJLMFNO__CTOR_OFFSET))(this);
	}

	::System::Void HGJDNLJFKJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_ILEMPJLMFNO_HGJDNLJFKJI_OFFSET))(this);
	}
};
