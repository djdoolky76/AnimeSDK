#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJCPKMHPHNI;
class GGLMNBCBJGJ;

#define BJCPKMHPHNI_INMNLNGGDCD_AACLKPHGMLM_OFFSET UNITYSDK_OFFSET(0x14C46D40)
#define BJCPKMHPHNI_INMNLNGGDCD_LDMKNICFFNB_OFFSET UNITYSDK_OFFSET(0x14C46D10)
#define BJCPKMHPHNI_INMNLNGGDCD__CTOR_OFFSET UNITYSDK_OFFSET(0x14C46D00)

inline static constexpr unsigned int BJCPKMHPHNI_INMNLNGGDCD_TypeDefinitionIndex = 44266;

class BJCPKMHPHNI_INMNLNGGDCD : public ::System::Object
{
public:
	::GGLMNBCBJGJ* DFMKILICPFB; // 0x10
	::BJCPKMHPHNI* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCPKMHPHNI_INMNLNGGDCD__CTOR_OFFSET))(this);
	}

	::System::Void LDMKNICFFNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCPKMHPHNI_INMNLNGGDCD_LDMKNICFFNB_OFFSET))(this);
	}

	::System::Void AACLKPHGMLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCPKMHPHNI_INMNLNGGDCD_AACLKPHGMLM_OFFSET))(this);
	}
};
