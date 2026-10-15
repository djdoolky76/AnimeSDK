#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class MBLFLAMBGDH;

#define MBLFLAMBGDH___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB861260)
#define MBLFLAMBGDH___C__DISPLAYCLASS4_0__SETANCHORPOS_B__0_OFFSET UNITYSDK_OFFSET(0xB8627A0)

	class MBLFLAMBGDH___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MBLFLAMBGDH* __4__this; // 0x10
		::UnityEngine::Vector2 pos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetAnchorPos_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH___C__DISPLAYCLASS4_0__SETANCHORPOS_B__0_OFFSET))(this);
		}

	};
