#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class HIOAMIPNLIN;
class JIFMKEBONHB;
namespace System { class Nullable; }

#define JIFMKEBONHB___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1EFF50)
#define JIFMKEBONHB___C__DISPLAYCLASS1_0__EVALUATE_B__0_OFFSET UNITYSDK_OFFSET(0xB1EFF60)

	class JIFMKEBONHB___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::JIFMKEBONHB* __4__this; // 0x10
		::System::Nullable* ret; // 0x18
		::RPG::GameCore::FixPoint compareValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIFMKEBONHB___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _Evaluate_b__0(::HIOAMIPNLIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOAMIPNLIN*))((::PBYTE)hIl2Cpp + JIFMKEBONHB___C__DISPLAYCLASS1_0__EVALUATE_B__0_OFFSET))(this, a1);
		}

	};
