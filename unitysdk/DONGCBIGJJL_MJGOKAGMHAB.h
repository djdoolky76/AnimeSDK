#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DONGCBIGJJL_MJGOKAGMHAB_CLCJNHPLNFC_OFFSET UNITYSDK_OFFSET(0x10F184C0)
#define DONGCBIGJJL_MJGOKAGMHAB__CTOR_OFFSET UNITYSDK_OFFSET(0x10F184B0)

inline static constexpr unsigned int DONGCBIGJJL_MJGOKAGMHAB_TypeDefinitionIndex = 70508;

class DONGCBIGJJL_MJGOKAGMHAB : public ::System::Object
{
public:
	::System::Int32 DLPCHOGNANN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_MJGOKAGMHAB__CTOR_OFFSET))(this);
	}

	::System::Void CLCJNHPLNFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_MJGOKAGMHAB_CLCJNHPLNFC_OFFSET))(this);
	}
};
