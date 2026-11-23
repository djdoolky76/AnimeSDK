#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RayfireUnyielding; }

#define RAYFIRE_RFUNY__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace RayFire
{
	inline static constexpr unsigned int RFUny_TypeDefinitionIndex = 15878;

	class RFUny : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::Byte _padding0[0x4];
		::RayFire::RayfireUnyielding* scr; // 0x18
		::UnityEngine::Vector3 size; // 0x20
		::UnityEngine::Vector3 center; // 0x2C
		::UnityEngine::Quaternion rotation; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFUNY__CTOR_OFFSET))(this);
		}
	};
}
