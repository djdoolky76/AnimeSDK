#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CDIMGHBPNGK_FNKKDKGCBAG;

#define CDIMGHBPNGK_IECENGCOGON_CJAIEMCINNF_OFFSET UNITYSDK_OFFSET(0x1478AF40)
#define CDIMGHBPNGK_IECENGCOGON__CTOR_OFFSET UNITYSDK_OFFSET(0x1478AF30)

inline static constexpr unsigned int CDIMGHBPNGK_IECENGCOGON_TypeDefinitionIndex = 58857;

class CDIMGHBPNGK_IECENGCOGON : public ::System::Object
{
public:
	::CDIMGHBPNGK_FNKKDKGCBAG* EEMOEMFLABI; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIMGHBPNGK_IECENGCOGON__CTOR_OFFSET))(this);
	}

	::System::Void CJAIEMCINNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIMGHBPNGK_IECENGCOGON_CJAIEMCINNF_OFFSET))(this);
	}
};
