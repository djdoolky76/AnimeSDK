#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E5BC3412B2C36CEF.h"
#include "unitysdk/E68AA4EB51923C98/B5174987DE13FB49.h"

namespace UnityEngine { class GameObject; }

#define E48735EFA4877440_A5276A8E959E697A_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define E48735EFA4877440__CTOR_OFFSET UNITYSDK_OFFSET(0x2050000)

inline static constexpr unsigned int E48735EFA4877440_TypeDefinitionIndex = 8307;

class E48735EFA4877440 : public ::E5BC3412B2C36CEF
{
public:
	::UnityEngine::GameObject* FF0861877F1685D7; // 0x18

	::UnityEngine::GameObject* A5276A8E959E697A()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + E48735EFA4877440_A5276A8E959E697A_OFFSET))(this);
	}

	::System::Void _ctor(::E68AA4EB51923C98::B5174987DE13FB49 A2D984FE57E7924A, ::UnityEngine::GameObject* AD1247287D2D9217)
	{
		return ((::System::Void(*)(::PVOID, ::E68AA4EB51923C98::B5174987DE13FB49, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + E48735EFA4877440__CTOR_OFFSET))(this, A2D984FE57E7924A, AD1247287D2D9217);
	}
};
