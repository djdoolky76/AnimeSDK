#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E9ACEE8965E7F35B.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define AF9D230398FD12D8_A456758328A39D17_F1B87D4DA3E93CC1_OFFSET UNITYSDK_OFFSET(0x2242D00)
#define AF9D230398FD12D8_A456758328A39D17__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AF9D230398FD12D8_A456758328A39D17_TypeDefinitionIndex = 9129;

class AF9D230398FD12D8_A456758328A39D17 : public ::System::Object
{
public:
	::E9ACEE8965E7F35B<::UnityEngine::GameObject*> E04D2BE64FCE9814; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF9D230398FD12D8_A456758328A39D17__CTOR_OFFSET))(this);
	}

	::System::Void F1B87D4DA3E93CC1(::UnityEngine::GameObject* AD1247287D2D9217, ::System::Int32 B11482D7A4C7C4C8, ::System::UInt64 A2945EFB5D99316D)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + AF9D230398FD12D8_A456758328A39D17_F1B87D4DA3E93CC1_OFFSET))(this, AD1247287D2D9217, B11482D7A4C7C4C8, A2945EFB5D99316D);
	}
};
