#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GBEGJINGNNG_MJKKLLKOGFL_PIAAKFOOGHG_OFFSET UNITYSDK_OFFSET(0x13DABE30)
#define GBEGJINGNNG_MJKKLLKOGFL__CTOR_OFFSET UNITYSDK_OFFSET(0x13DABE20)

inline static constexpr unsigned int GBEGJINGNNG_MJKKLLKOGFL_TypeDefinitionIndex = 59384;

class GBEGJINGNNG_MJKKLLKOGFL : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGJINGNNG_MJKKLLKOGFL__CTOR_OFFSET))(this);
	}

	::System::Void PIAAKFOOGHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGJINGNNG_MJKKLLKOGFL_PIAAKFOOGHG_OFFSET))(this);
	}
};
