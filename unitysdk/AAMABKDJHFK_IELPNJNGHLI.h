#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define AAMABKDJHFK_IELPNJNGHLI_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x126277A0)
#define AAMABKDJHFK_IELPNJNGHLI__CTOR_OFFSET UNITYSDK_OFFSET(0x12627790)

inline static constexpr unsigned int AAMABKDJHFK_IELPNJNGHLI_TypeDefinitionIndex = 74322;

class AAMABKDJHFK_IELPNJNGHLI : public ::System::Object
{
public:
	::HOCDHMEPPEG BOKLBCNADLK; // 0x10
	::System::Boolean DOFCLPCLHOJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMABKDJHFK_IELPNJNGHLI__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMABKDJHFK_IELPNJNGHLI_LIDNPLMPHAL_OFFSET))(this);
	}
};
