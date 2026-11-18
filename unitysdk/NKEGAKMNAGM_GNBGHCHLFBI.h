#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAJGCLDPEFI.h"
#include "unitysdk/System/Object.h"

class BLJCNKFKFGL;
class NKEGAKMNAGM;

#define NKEGAKMNAGM_GNBGHCHLFBI_NLAJDEBBEDH_OFFSET UNITYSDK_OFFSET(0x11F86800)
#define NKEGAKMNAGM_GNBGHCHLFBI__CTOR_OFFSET UNITYSDK_OFFSET(0x11F867F0)

inline static constexpr unsigned int NKEGAKMNAGM_GNBGHCHLFBI_TypeDefinitionIndex = 82173;

class NKEGAKMNAGM_GNBGHCHLFBI : public ::System::Object
{
public:
	::BLJCNKFKFGL* PFPKIDEBCCM; // 0x10
	::NKEGAKMNAGM* KLHPEBKNIFB; // 0x18
	::MAJGCLDPEFI FCPCLIJNDLA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_GNBGHCHLFBI__CTOR_OFFSET))(this);
	}

	::System::Void NLAJDEBBEDH(::System::Boolean GDNECMBHKND)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_GNBGHCHLFBI_NLAJDEBBEDH_OFFSET))(this, GDNECMBHKND);
	}
};
