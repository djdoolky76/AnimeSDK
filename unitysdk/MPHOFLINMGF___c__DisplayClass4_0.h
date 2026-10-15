#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPHOFLINMGF;
namespace System { class Action; }

#define MPHOFLINMGF___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3EEB0)
#define MPHOFLINMGF___C__DISPLAYCLASS4_0__TRYHIDE_B__0_OFFSET UNITYSDK_OFFSET(0xBA3EF60)

	class MPHOFLINMGF___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MPHOFLINMGF* __4__this; // 0x10
		::System::Action* fadeoutCallback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHOFLINMGF___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _TryHide_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHOFLINMGF___C__DISPLAYCLASS4_0__TRYHIDE_B__0_OFFSET))(this);
		}

	};
