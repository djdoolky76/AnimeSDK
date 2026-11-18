#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAJGCLDPEFI.h"
#include "unitysdk/System/Object.h"

class NKEGAKMNAGM;
class ONOONJGHIFF;

#define NKEGAKMNAGM_PIHCPGNAFCF_HPHOGBFGMKE_OFFSET UNITYSDK_OFFSET(0x10D7D1A0)
#define NKEGAKMNAGM_PIHCPGNAFCF__CTOR_OFFSET UNITYSDK_OFFSET(0x10D7D190)

inline static constexpr unsigned int NKEGAKMNAGM_PIHCPGNAFCF_TypeDefinitionIndex = 82169;

class NKEGAKMNAGM_PIHCPGNAFCF : public ::System::Object
{
public:
	::NKEGAKMNAGM* KLHPEBKNIFB; // 0x10
	::ONOONJGHIFF* AAOCANGHBDG; // 0x18
	::MAJGCLDPEFI FCPCLIJNDLA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_PIHCPGNAFCF__CTOR_OFFSET))(this);
	}

	::System::Void HPHOGBFGMKE(::System::Boolean GDNECMBHKND)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_PIHCPGNAFCF_HPHOGBFGMKE_OFFSET))(this, GDNECMBHKND);
	}
};
