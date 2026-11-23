#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class Texture2D; }

#define FURCONTROLLER_AD970635A668CF89_OFFSET UNITYSDK_OFFSET(0x1678550)
#define FURCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x2870F90)

inline static constexpr unsigned int FurController_TypeDefinitionIndex = 16097;

class FurController
{
public:
	::UnityEngine::FAED0374422E783A* furRadius; // 0x28
	::System::Int32 layerCount; // 0x30
	::System::Single furLength; // 0x34
	::System::Single furDitherStrength; // 0x38
	::System::Single uvRandomScale; // 0x3C
	::UnityEngine::Texture2D* albedoRoughness; // 0x40
	::UnityEngine::E8984F4E44AE20E5 albedoScaleOffset; // 0x48
	::UnityEngine::Texture2D* noise; // 0x58
	::UnityEngine::E8984F4E44AE20E5 noiseScaleOffset; // 0x60
	::UnityEngine::E46B881AA2636190 bottomColor; // 0x70
	::UnityEngine::E46B881AA2636190 topColor; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Boolean AD970635A668CF89()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURCONTROLLER_AD970635A668CF89_OFFSET))(this);
	}
};
