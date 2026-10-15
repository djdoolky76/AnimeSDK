#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Component; }

#define AALIJOOJDPO___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB0CDFC0)
#define AALIJOOJDPO___C__DISPLAYCLASS7_0__PLAYSHOWDEFERRED_B__0_OFFSET UNITYSDK_OFFSET(0xB0CE450)
#define AALIJOOJDPO___C__DISPLAYCLASS7_0__PLAYSHOWDEFERRED_B__1_OFFSET UNITYSDK_OFFSET(0xB0CE460)

inline static constexpr unsigned int AALIJOOJDPO___c__DisplayClass7_0_TypeDefinitionIndex = 47841;

	class AALIJOOJDPO___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::UnityEngine::Component* textComponent; // 0x10
		::System::Int32 motionType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIJOOJDPO___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayShowDeferred_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIJOOJDPO___C__DISPLAYCLASS7_0__PLAYSHOWDEFERRED_B__0_OFFSET))(this);
		}

		::System::Void _PlayShowDeferred_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIJOOJDPO___C__DISPLAYCLASS7_0__PLAYSHOWDEFERRED_B__1_OFFSET))(this);
		}

	};
