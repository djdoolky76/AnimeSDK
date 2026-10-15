#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define OFFGIKEAIFM___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBE41100)
#define OFFGIKEAIFM___C__DISPLAYCLASS6_0__FOREACHPETAPPEARANCE_B__0_OFFSET UNITYSDK_OFFSET(0xBE41320)

	class OFFGIKEAIFM___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFGIKEAIFM___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ForeachPetAppearance_b__0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OFFGIKEAIFM___C__DISPLAYCLASS6_0__FOREACHPETAPPEARANCE_B__0_OFFSET))(this, a1, a2);
		}

	};
