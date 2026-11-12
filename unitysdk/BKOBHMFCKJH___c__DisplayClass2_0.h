#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEFFANHAGFG;
class BKOBHMFCKJH;
class MGEHMMODJHE;

#define BKOBHMFCKJH___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC12AE10)
#define BKOBHMFCKJH___C__DISPLAYCLASS2_0__POSTEVENT_B__0_OFFSET UNITYSDK_OFFSET(0xC12BA70)

inline static constexpr unsigned int BKOBHMFCKJH___c__DisplayClass2_0_TypeDefinitionIndex = 80157;

	class BKOBHMFCKJH___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MGEHMMODJHE* evt; // 0x10
		::BKOBHMFCKJH* __4__this; // 0x18
		::BEFFANHAGFG* context; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOBHMFCKJH___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _PostEvent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOBHMFCKJH___C__DISPLAYCLASS2_0__POSTEVENT_B__0_OFFSET))(this);
		}

	};
