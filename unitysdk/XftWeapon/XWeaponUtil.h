#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define XFTWEAPON_XWEAPONUTIL_FLOATEQUAL_OFFSET UNITYSDK_OFFSET(0x1EC82730)
#define XFTWEAPON_XWEAPONUTIL_VECTOR3EQUAL_OFFSET UNITYSDK_OFFSET(0x1EC78210)

namespace XftWeapon
{
	inline static constexpr unsigned int XWeaponUtil_TypeDefinitionIndex = 37976;

	class XWeaponUtil : public ::System::Object
	{
	public:
		static ::System::Boolean FloatEqual(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONUTIL_FLOATEQUAL_OFFSET))(a, b);
		}

		static ::System::Boolean Vector3Equal(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONUTIL_VECTOR3EQUAL_OFFSET))(a, b);
		}
	};
}
