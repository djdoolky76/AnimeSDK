#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define JIKEKAMJFMO_AEMJFONHLON_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1A477D80)
#define JIKEKAMJFMO_AEMJFONHLON__CTOR_OFFSET UNITYSDK_OFFSET(0x1A477D70)

inline static constexpr unsigned int JIKEKAMJFMO_AEMJFONHLON_TypeDefinitionIndex = 40673;

class JIKEKAMJFMO_AEMJFONHLON : public ::System::Object
{
public:
	::HOCDHMEPPEG BOKLBCNADLK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKEKAMJFMO_AEMJFONHLON__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKEKAMJFMO_AEMJFONHLON_LIDNPLMPHAL_OFFSET))(this);
	}
};
