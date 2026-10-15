#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOBHMADMEDF;

#define FOBHMADMEDF___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x158D6190)
#define FOBHMADMEDF___C__DISPLAYCLASS13_0___ONUISHOWPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x158D6210)

inline static constexpr unsigned int FOBHMADMEDF___c__DisplayClass13_0_TypeDefinitionIndex = 60735;

	class FOBHMADMEDF___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::FOBHMADMEDF* __4__this; // 0x10
		::System::Int32 sessionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHMADMEDF___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnUIShowPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHMADMEDF___C__DISPLAYCLASS13_0___ONUISHOWPAGE_B__0_OFFSET))(this);
		}

	};
