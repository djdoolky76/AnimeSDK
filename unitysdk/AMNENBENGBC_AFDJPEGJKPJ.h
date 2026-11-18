#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define AMNENBENGBC_AFDJPEGJKPJ_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1648D910)
#define AMNENBENGBC_AFDJPEGJKPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1648D900)

inline static constexpr unsigned int AMNENBENGBC_AFDJPEGJKPJ_TypeDefinitionIndex = 48373;

class AMNENBENGBC_AFDJPEGJKPJ : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNENBENGBC_AFDJPEGJKPJ__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNENBENGBC_AFDJPEGJKPJ_LIDNPLMPHAL_OFFSET))(this);
	}
};
