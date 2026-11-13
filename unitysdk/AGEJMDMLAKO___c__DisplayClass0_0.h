#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }

#define AGEJMDMLAKO___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x18DD10E0)
#define AGEJMDMLAKO___C__DISPLAYCLASS0_0__ASOBSERVABLE_B__1_OFFSET UNITYSDK_OFFSET(0x18DD11C0)
#define AGEJMDMLAKO___C__DISPLAYCLASS0_0__ASOBSERVABLE_B__2_OFFSET UNITYSDK_OFFSET(0x18DD11E0)

inline static constexpr unsigned int AGEJMDMLAKO___c__DisplayClass0_0_TypeDefinitionIndex = 51037;

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
