#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine::UI { class Button; }

#define JKMPIOCHLNN___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB2245A0)
#define JKMPIOCHLNN___C__DISPLAYCLASS0_0__BIND_B__0_OFFSET UNITYSDK_OFFSET(0xB224DE0)

	class JKMPIOCHLNN___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action* cb; // 0x10
		::UnityEngine::UI::Button* button; // 0x18
		::System::Object* cbp; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMPIOCHLNN___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _Bind_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMPIOCHLNN___C__DISPLAYCLASS0_0__BIND_B__0_OFFSET))(this);
		}

	};
