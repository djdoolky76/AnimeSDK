#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class PushBoxPlayerView;

#define PUSHBOXPLAYERVIEW___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C9D70)

inline static constexpr unsigned int PushBoxPlayerView___c__DisplayClass9_0_TypeDefinitionIndex = 51902;

class PushBoxPlayerView___c__DisplayClass9_0 : public ::System::Object
{
public:
	::PushBoxPlayerView* __4__this; // 0x10
	::UnityEngine::Vector2 tileSize; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}
};
