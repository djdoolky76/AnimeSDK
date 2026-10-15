#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::UINavigation { class UINavigation; }
namespace System { class Action; }

#define CONAIOFALJB___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDCBFDA0)
#define CONAIOFALJB___C__DISPLAYCLASS3_0__ISFOCUSED_B__1_OFFSET UNITYSDK_OFFSET(0xDCBFE10)
#define CONAIOFALJB___C__DISPLAYCLASS3_0__ISFOCUSED_B__2_OFFSET UNITYSDK_OFFSET(0xDCBFE80)

	class CONAIOFALJB___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::UINavigation::UINavigation* navigation; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONAIOFALJB___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _IsFocused_b__1(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CONAIOFALJB___C__DISPLAYCLASS3_0__ISFOCUSED_B__1_OFFSET))(this, a1);
		}

		::System::Void _IsFocused_b__2(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CONAIOFALJB___C__DISPLAYCLASS3_0__ISFOCUSED_B__2_OFFSET))(this, a1);
		}

	};
