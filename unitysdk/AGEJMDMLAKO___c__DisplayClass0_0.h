#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }

#define AGEJMDMLAKO___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCF27F30)
#define AGEJMDMLAKO___C__DISPLAYCLASS0_0__ASOBSERVABLE_B__1_OFFSET UNITYSDK_OFFSET(0xCF28010)
#define AGEJMDMLAKO___C__DISPLAYCLASS0_0__ASOBSERVABLE_B__2_OFFSET UNITYSDK_OFFSET(0xCF28030)

	class AGEJMDMLAKO___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityEvent* unityEvent; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEJMDMLAKO___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _AsObservable_b__1(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + AGEJMDMLAKO___C__DISPLAYCLASS0_0__ASOBSERVABLE_B__1_OFFSET))(this, a1);
		}

		::System::Void _AsObservable_b__2(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + AGEJMDMLAKO___C__DISPLAYCLASS0_0__ASOBSERVABLE_B__2_OFFSET))(this, a1);
		}

	};
