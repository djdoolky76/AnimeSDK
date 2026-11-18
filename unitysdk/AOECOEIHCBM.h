#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AOECOEIHCBM__CTOR_OFFSET UNITYSDK_OFFSET(0x14C22C70)

inline static constexpr unsigned int AOECOEIHCBM_TypeDefinitionIndex = 86583;

class AOECOEIHCBM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOECOEIHCBM__CTOR_OFFSET))(this);
	}
};
