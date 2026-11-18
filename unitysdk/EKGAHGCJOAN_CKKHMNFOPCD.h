#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNCGCMHIOGN;

#define EKGAHGCJOAN_CKKHMNFOPCD_BFGDCONFBHG_OFFSET UNITYSDK_OFFSET(0x154B69F0)
#define EKGAHGCJOAN_CKKHMNFOPCD__CTOR_OFFSET UNITYSDK_OFFSET(0x154B69E0)

inline static constexpr unsigned int EKGAHGCJOAN_CKKHMNFOPCD_TypeDefinitionIndex = 51248;

class EKGAHGCJOAN_CKKHMNFOPCD : public ::System::Object
{
public:
	::System::UInt32 FIOCHBBFGLA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CKKHMNFOPCD__CTOR_OFFSET))(this);
	}

	::System::Boolean BFGDCONFBHG(::PNCGCMHIOGN* NOCCODBMGFP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNCGCMHIOGN*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CKKHMNFOPCD_BFGDCONFBHG_OFFSET))(this, NOCCODBMGFP);
	}
};
