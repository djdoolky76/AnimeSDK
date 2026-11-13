#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/OutlineOccluderMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define RPG_OUTLINESETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA237F0)

namespace RPG
{
	inline static constexpr unsigned int OutlineSettings_TypeDefinitionIndex = 52806;

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
		::RPG::OutlineOccluderMode OccluderMode; // 0x40
		::System::Single OccludedOutlineAlpha; // 0x44
		::System::Boolean EnableDepthTest; // 0x48
		::System::Byte _padding2[0x3];
		::System::Single DepthTestBias; // 0x4C
		::UnityEngine::Color GlowColor; // 0x50
		::System::Single GlowIntensity; // 0x60
		::System::Single GlowRange; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINESETTINGS_CTOR_OFFSET))(this);
		}

	};
}
