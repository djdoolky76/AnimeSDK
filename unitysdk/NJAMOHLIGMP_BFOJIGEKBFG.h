#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
class MEKACGJBPGE;
class NJAMOHLIGMP;

#define NJAMOHLIGMP_BFOJIGEKBFG_CKHKIPLAJCM_OFFSET UNITYSDK_OFFSET(0x128993F0)
#define NJAMOHLIGMP_BFOJIGEKBFG__CTOR_OFFSET UNITYSDK_OFFSET(0x12897A50)

inline static constexpr unsigned int NJAMOHLIGMP_BFOJIGEKBFG_TypeDefinitionIndex = 41615;

class NJAMOHLIGMP_BFOJIGEKBFG : public ::System::Object
{
public:
	::NJAMOHLIGMP* KLHPEBKNIFB; // 0x10
	::MEKACGJBPGE* APFJBACAEKO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAMOHLIGMP_BFOJIGEKBFG__CTOR_OFFSET))(this);
	}

	::System::Void CKHKIPLAJCM(::ALDOKCCIFNB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + NJAMOHLIGMP_BFOJIGEKBFG_CKHKIPLAJCM_OFFSET))(this, LJBPECKCCEA);
	}
};
