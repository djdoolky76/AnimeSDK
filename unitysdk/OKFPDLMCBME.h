#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OKFPDLMCBME__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8CF60)

inline static constexpr unsigned int OKFPDLMCBME_TypeDefinitionIndex = 54588;

class OKFPDLMCBME : public ::System::Object
{
public:
	::System::Int32 GIEIBEMEPMH; // 0x10
	::System::Int32 MNAIIBHLHMA; // 0x14
	::System::Boolean JGOHKDKEHJA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFPDLMCBME__CTOR_OFFSET))(this);
	}
};
