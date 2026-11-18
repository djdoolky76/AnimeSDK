#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define LGKAHGLDEHL__CCTOR_OFFSET UNITYSDK_OFFSET(0x12560DC0)

inline static constexpr unsigned int LGKAHGLDEHL_TypeDefinitionIndex = 56061;

struct alignas(4) LGKAHGLDEHL
{
	static ::LGKAHGLDEHL* StaticGet_FLFDAKGMMKJ()
	{
		return (::LGKAHGLDEHL*)Il2CppClass::FromTypeDefinitionIndex(LGKAHGLDEHL_TypeDefinitionIndex)->GetStaticField(0xEF30);
	}
	::UnityEngine::Vector2 BKDBPNNGNPA; // 0x10
	::UnityEngine::Vector2 CIBIMOHJAOD; // 0x18
	::UnityEngine::Vector2 AIJIIBAEFGE; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGKAHGLDEHL__CCTOR_OFFSET))();
	}
};
