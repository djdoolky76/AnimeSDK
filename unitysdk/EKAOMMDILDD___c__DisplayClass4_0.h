#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class EKAOMMDILDD;

#define EKAOMMDILDD___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x154EEDB0)
#define EKAOMMDILDD___C__DISPLAYCLASS4_0__SETANCHORPOS_B__0_OFFSET UNITYSDK_OFFSET(0x154EF9A0)

inline static constexpr unsigned int EKAOMMDILDD___c__DisplayClass4_0_TypeDefinitionIndex = 71540;

	class EKAOMMDILDD___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::EKAOMMDILDD* __4__this; // 0x10
		::UnityEngine::Vector2 pos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetAnchorPos_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD___C__DISPLAYCLASS4_0__SETANCHORPOS_B__0_OFFSET))(this);
		}

	};
