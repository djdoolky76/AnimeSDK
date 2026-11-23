#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define BE853680CA1C1344__CCTOR_OFFSET UNITYSDK_OFFSET(0x22D0700)

inline static constexpr unsigned int BE853680CA1C1344_TypeDefinitionIndex = 7253;

struct alignas(8) BE853680CA1C1344
{
	static ::BE853680CA1C1344* StaticGet_AE04A22CC80CDB9D()
	{
		return (::BE853680CA1C1344*)Il2CppClass::FromTypeDefinitionIndex(BE853680CA1C1344_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::UnityEngine::Vector3 A0C1F1E95D5F6CA9; // 0x10
	::UnityEngine::Quaternion FBF9C1F5AF32571D; // 0x1C
	::UnityEngine::Vector3 A73B96BE7F2DEBF7; // 0x2C
	::UnityEngine::Transform* EFE497ABF6BF98D8; // 0x38
	::System::Boolean FB732D37F47B1F04; // 0x40
	::System::Boolean A187B0A4ACA502FF; // 0x41

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BE853680CA1C1344__CCTOR_OFFSET))();
	}
};
