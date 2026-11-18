#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System { class Action; }

#define MKFNBHDICNJ_JAGJNBKPKHD_GLMHNGKILDN_OFFSET UNITYSDK_OFFSET(0x1A695CB0)
#define MKFNBHDICNJ_JAGJNBKPKHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A679B80)

inline static constexpr unsigned int MKFNBHDICNJ_JAGJNBKPKHD_TypeDefinitionIndex = 61364;

class MKFNBHDICNJ_JAGJNBKPKHD : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18
	::System::Boolean LNEIOAELJNG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_JAGJNBKPKHD__CTOR_OFFSET))(this);
	}

	::System::Void GLMHNGKILDN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_JAGJNBKPKHD_GLMHNGKILDN_OFFSET))(this);
	}
};
