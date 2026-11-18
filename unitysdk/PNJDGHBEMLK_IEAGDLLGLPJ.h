#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PNJDGHBEMLK_IEAGDLLGLPJ_OHNDONADBIB_OFFSET UNITYSDK_OFFSET(0x119A4410)
#define PNJDGHBEMLK_IEAGDLLGLPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x119A4400)

inline static constexpr unsigned int PNJDGHBEMLK_IEAGDLLGLPJ_TypeDefinitionIndex = 64980;

class PNJDGHBEMLK_IEAGDLLGLPJ : public ::System::Object
{
public:
	::System::Action* IHLBALNBGKM; // 0x10
	::System::Boolean BGLGCGACKIF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IEAGDLLGLPJ__CTOR_OFFSET))(this);
	}

	::System::Void OHNDONADBIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IEAGDLLGLPJ_OHNDONADBIB_OFFSET))(this);
	}
};
