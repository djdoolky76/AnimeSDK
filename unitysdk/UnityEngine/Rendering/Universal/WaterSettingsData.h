#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GeometryType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ReflectionType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Cubemap; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERSETTINGSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F8720)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterSettingsData_TypeDefinitionIndex = 26497;

	class WaterSettingsData : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Rendering::Universal::GeometryType waterGeomType; // 0x18
		::UnityEngine::Rendering::Universal::ReflectionType refType; // 0x1C
		::UnityEngine::Cubemap* cubemapRefType; // 0x20
		::System::Boolean isInfinite; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector4 originOffset; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERSETTINGSDATA__CTOR_OFFSET))(this);
		}
	};
}
