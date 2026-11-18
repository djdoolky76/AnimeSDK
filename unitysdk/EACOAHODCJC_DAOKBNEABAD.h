#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EACOAHODCJC;

#define EACOAHODCJC_DAOKBNEABAD_LOPMJJIBCLG_OFFSET UNITYSDK_OFFSET(0x13493E20)
#define EACOAHODCJC_DAOKBNEABAD__CTOR_OFFSET UNITYSDK_OFFSET(0x13493E10)

inline static constexpr unsigned int EACOAHODCJC_DAOKBNEABAD_TypeDefinitionIndex = 78262;

class EACOAHODCJC_DAOKBNEABAD : public ::System::Object
{
public:
	::EACOAHODCJC* KLHPEBKNIFB; // 0x10
	::System::Int32 PAEEEHKILOC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACOAHODCJC_DAOKBNEABAD__CTOR_OFFSET))(this);
	}

	::System::Void LOPMJJIBCLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACOAHODCJC_DAOKBNEABAD_LOPMJJIBCLG_OFFSET))(this);
	}
};
