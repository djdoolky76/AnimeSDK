#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

#define RAYFIRE_RFFLASH__CTOR_OFFSET UNITYSDK_OFFSET(0x29F77F0)

namespace RayFire
{
	inline static constexpr unsigned int RFFlash_TypeDefinitionIndex = 15792;

	class RFFlash : public ::System::Object
	{
	public:
		::System::Single intensityMin; // 0x10
		::System::Single intensityMax; // 0x14
		::System::Single rangeMin; // 0x18
		::System::Single rangeMax; // 0x1C
		::System::Single distance; // 0x20
		::UnityEngine::E46B881AA2636190 color; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFLASH__CTOR_OFFSET))(this);
		}
	};
}
