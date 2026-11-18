#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MJFPBLFGDMC;
class MonoUITableScrollV2;

#define MJFPBLFGDMC_POOMNDBBNOA_JJLAHOKPGHE_OFFSET UNITYSDK_OFFSET(0x14D89F50)
#define MJFPBLFGDMC_POOMNDBBNOA__CTOR_OFFSET UNITYSDK_OFFSET(0x14D89F40)

inline static constexpr unsigned int MJFPBLFGDMC_POOMNDBBNOA_TypeDefinitionIndex = 45626;

class MJFPBLFGDMC_POOMNDBBNOA : public ::System::Object
{
public:
	::MJFPBLFGDMC* KLHPEBKNIFB; // 0x10
	::MonoUITableScrollV2* FAMGIABLFPH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFPBLFGDMC_POOMNDBBNOA__CTOR_OFFSET))(this);
	}

	::System::Void JJLAHOKPGHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFPBLFGDMC_POOMNDBBNOA_JJLAHOKPGHE_OFFSET))(this);
	}
};
