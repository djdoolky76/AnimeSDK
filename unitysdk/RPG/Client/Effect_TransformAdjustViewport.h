#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_TransformAdjustViewport_AdjustScaleMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_EFFECT_TRANSFORMADJUSTVIEWPORT_CTOR_OFFSET UNITYSDK_OFFSET(0x189AEF30)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TransformAdjustViewport_TypeDefinitionIndex = 72546;

	class Effect_TransformAdjustViewport
	{
	public:
		::System::Boolean AdjustPos; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 ViewportPos; // 0x34
		::UnityEngine::Vector3 LocalOffset; // 0x3C
		::RPG::Client::Effect_TransformAdjustViewport_AdjustScaleMode ScaleMode; // 0x48
		::System::Single ScaleMultiplier; // 0x4C
		::System::Single DefaultAspect; // 0x50
		::System::Single DefaultFov; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMADJUSTVIEWPORT_CTOR_OFFSET))(this);
		}

	};
}
