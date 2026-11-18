#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AHCNHDMFJAH;
class NKEGAKMNAGM_FEBMKFJLDDO;

#define NKEGAKMNAGM_FCCMINEDIKO_OPFCFDPPJLM_OFFSET UNITYSDK_OFFSET(0x17294180)
#define NKEGAKMNAGM_FCCMINEDIKO__CTOR_OFFSET UNITYSDK_OFFSET(0x17294170)

inline static constexpr unsigned int NKEGAKMNAGM_FCCMINEDIKO_TypeDefinitionIndex = 82170;

class NKEGAKMNAGM_FCCMINEDIKO : public ::System::Object
{
public:
	::NKEGAKMNAGM_FEBMKFJLDDO* FGBNBFHOKAA; // 0x10
	::AHCNHDMFJAH* PFPKIDEBCCM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_FCCMINEDIKO__CTOR_OFFSET))(this);
	}

	::System::Void OPFCFDPPJLM(::System::Boolean APBONFCBAMB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_FCCMINEDIKO_OPFCFDPPJLM_OFFSET))(this, APBONFCBAMB);
	}
};
