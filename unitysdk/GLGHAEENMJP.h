#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define GLGHAEENMJP_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1814DFB0)
#define GLGHAEENMJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1814E030)

inline static constexpr unsigned int GLGHAEENMJP_TypeDefinitionIndex = 60985;

class GLGHAEENMJP : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::UInt32>* OBFKLMNDCNH; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGHAEENMJP__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGHAEENMJP_ONCREATEPROPERTY_OFFSET))(this);
	}
};
