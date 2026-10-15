#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define RPG_OUTLINESETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0xE87BBD0)

namespace RPG
{
	class OutlineSettings : public ::System::Object
	{
	public:
		::UnityEngine::Color OutlineColor; // 0x10
		::System::Boolean PCHighQuality; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 Downsample; // 0x24
		::System::Single BlurSize; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::Shader* OutlineShader; // 0x30
		::UnityEngine::Material* OutlineMaterial; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINESETTINGS_CTOR_OFFSET))(this);
		}

	};
}
