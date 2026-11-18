#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;

#define PCMENEMPLGF_EGEAOOMKIGK_JEKLHJFEOEP_OFFSET UNITYSDK_OFFSET(0x17314680)
#define PCMENEMPLGF_EGEAOOMKIGK__CTOR_OFFSET UNITYSDK_OFFSET(0x17314670)

inline static constexpr unsigned int PCMENEMPLGF_EGEAOOMKIGK_TypeDefinitionIndex = 62883;

class PCMENEMPLGF_EGEAOOMKIGK : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Int32 GMDOFLBIICM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_EGEAOOMKIGK__CTOR_OFFSET))(this);
	}

	::System::Void JEKLHJFEOEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_EGEAOOMKIGK_JEKLHJFEOEP_OFFSET))(this);
	}
};
