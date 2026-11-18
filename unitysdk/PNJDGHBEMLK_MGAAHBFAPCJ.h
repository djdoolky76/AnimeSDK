#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PNJDGHBEMLK_MGAAHBFAPCJ_MJODCJCEJBB_OFFSET UNITYSDK_OFFSET(0x1EBBD070)
#define PNJDGHBEMLK_MGAAHBFAPCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBD060)

inline static constexpr unsigned int PNJDGHBEMLK_MGAAHBFAPCJ_TypeDefinitionIndex = 64987;

class PNJDGHBEMLK_MGAAHBFAPCJ : public ::System::Object
{
public:
	::System::Action* IHLBALNBGKM; // 0x10
	::System::Boolean BGLGCGACKIF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MGAAHBFAPCJ__CTOR_OFFSET))(this);
	}

	::System::Void MJODCJCEJBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_MGAAHBFAPCJ_MJODCJCEJBB_OFFSET))(this);
	}
};
