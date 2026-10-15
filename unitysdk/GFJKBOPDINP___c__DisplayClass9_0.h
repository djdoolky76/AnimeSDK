#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define GFJKBOPDINP___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x159FAD90)
#define GFJKBOPDINP___C__DISPLAYCLASS9_0___ONFADEINFINISHED_B__0_OFFSET UNITYSDK_OFFSET(0x159FADA0)

	class GFJKBOPDINP___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* switchMapCallback; // 0x10
		::System::Action* beforeSwitchMapCallback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJKBOPDINP___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnFadeInFinished_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJKBOPDINP___C__DISPLAYCLASS9_0___ONFADEINFINISHED_B__0_OFFSET))(this);
		}

	};
