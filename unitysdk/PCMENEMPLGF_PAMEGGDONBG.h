#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
class IFOHGNLIAKH;
class PCMENEMPLGF;

#define PCMENEMPLGF_PAMEGGDONBG_JPDHHANMPEE_OFFSET UNITYSDK_OFFSET(0x18461BA0)
#define PCMENEMPLGF_PAMEGGDONBG__CTOR_OFFSET UNITYSDK_OFFSET(0x18461B90)

inline static constexpr unsigned int PCMENEMPLGF_PAMEGGDONBG_TypeDefinitionIndex = 62852;

class PCMENEMPLGF_PAMEGGDONBG : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::FMHDMLBDIJC* BLFMEHNGIPN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_PAMEGGDONBG__CTOR_OFFSET))(this);
	}

	::System::Void JPDHHANMPEE(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_PAMEGGDONBG_JPDHHANMPEE_OFFSET))(this, JOLDOMEIKEF);
	}
};
