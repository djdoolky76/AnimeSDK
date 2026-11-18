#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFKJBNAPJIF;
class IFOHGNLIAKH;

#define CFKJBNAPJIF_DIKDEKBOJKP_CHAMIFHFBKC_OFFSET UNITYSDK_OFFSET(0x13258070)
#define CFKJBNAPJIF_DIKDEKBOJKP__CTOR_OFFSET UNITYSDK_OFFSET(0x13258060)

inline static constexpr unsigned int CFKJBNAPJIF_DIKDEKBOJKP_TypeDefinitionIndex = 65227;

class CFKJBNAPJIF_DIKDEKBOJKP : public ::System::Object
{
public:
	::CFKJBNAPJIF* KLHPEBKNIFB; // 0x10
	::System::Int32 OIKFFGKDHME; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKJBNAPJIF_DIKDEKBOJKP__CTOR_OFFSET))(this);
	}

	::System::Void CHAMIFHFBKC(::IFOHGNLIAKH* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + CFKJBNAPJIF_DIKDEKBOJKP_CHAMIFHFBKC_OFFSET))(this, NCIMBHDKIJM);
	}
};
