#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Rendering/SDFAtlasLayout.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace UnityEngine { class Texture2D; }

#define RPG_RENDERING_SDFATLASDATA_COAMHPGKHMK_OFFSET UNITYSDK_OFFSET(0xE877F10)
#define RPG_RENDERING_SDFATLASDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8789B0)
#define RPG_RENDERING_SDFATLASDATA_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xE877A80)

namespace RPG::Rendering
{
	inline static constexpr unsigned int SDFAtlasData_TypeDefinitionIndex = 51795;

	class SDFAtlasData : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Texture2D* atlasTexture; // 0x18
		::RPG::Rendering::SDFAtlasLayout layout; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASDATA_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Void COAMHPGKHMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASDATA_COAMHPGKHMK_OFFSET))(this);
		}

	};
}
