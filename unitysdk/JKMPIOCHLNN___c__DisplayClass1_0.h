#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Button; }

#define JKMPIOCHLNN___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB21E9D0)
#define JKMPIOCHLNN___C__DISPLAYCLASS1_0__BINDHOLD_B__0_OFFSET UNITYSDK_OFFSET(0xB21F110)
#define JKMPIOCHLNN___C__DISPLAYCLASS1_0__BINDHOLD_B__1_OFFSET UNITYSDK_OFFSET(0xB21F2F0)

inline static constexpr unsigned int JKMPIOCHLNN___c__DisplayClass1_0_TypeDefinitionIndex = 73028;

	class JKMPIOCHLNN___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* downCallback; // 0x10
		::System::Action_1<::System::Object*>* onHoldRelease; // 0x18
		::System::Action_1<::System::Object*>* onClick; // 0x20
		::System::Action_1<::System::Object*>* holdBegin; // 0x28
		::System::Object* p; // 0x30
		::UnityEngine::UI::Button* button; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMPIOCHLNN___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _BindHold_b__0(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + JKMPIOCHLNN___C__DISPLAYCLASS1_0__BINDHOLD_B__0_OFFSET))(this, a1);
		}

		::System::Void _BindHold_b__1(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + JKMPIOCHLNN___C__DISPLAYCLASS1_0__BINDHOLD_B__1_OFFSET))(this, a1);
		}

	};
