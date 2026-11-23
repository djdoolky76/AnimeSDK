#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define A7C4D8DC50C86DC6_E4DEF455B71D5728_E80B9F472EEFDF74_OFFSET UNITYSDK_OFFSET(0x4206890)

namespace A7C4D8DC50C86DC6
{
	inline static constexpr unsigned int E4DEF455B71D5728_TypeDefinitionIndex = 18772;

	struct alignas(4) E4DEF455B71D5728
	{
		::UnityEngine::Vector2 F283F5B370F7A676; // 0x10
		::UnityEngine::Vector2 E6E53490DDD6F5E9; // 0x18

		::System::String* E80B9F472EEFDF74()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A7C4D8DC50C86DC6_E4DEF455B71D5728_E80B9F472EEFDF74_OFFSET))(this);
		}
	};
}
