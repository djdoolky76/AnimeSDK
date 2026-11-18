#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PNJDGHBEMLK_IBPPPPMJAJK_IMGOMJOFDFI_OFFSET UNITYSDK_OFFSET(0x1BF338D0)
#define PNJDGHBEMLK_IBPPPPMJAJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF338C0)

inline static constexpr unsigned int PNJDGHBEMLK_IBPPPPMJAJK_TypeDefinitionIndex = 64958;

class PNJDGHBEMLK_IBPPPPMJAJK : public ::System::Object
{
public:
	::System::Action* IHLBALNBGKM; // 0x10
	::System::Boolean BGLGCGACKIF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IBPPPPMJAJK__CTOR_OFFSET))(this);
	}

	::System::Void IMGOMJOFDFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IBPPPPMJAJK_IMGOMJOFDFI_OFFSET))(this);
	}
};
