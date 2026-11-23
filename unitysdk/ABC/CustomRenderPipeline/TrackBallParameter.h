#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Vector4Parameter.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

#define ABC_CUSTOMRENDERPIPELINE_TRACKBALLPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x2826680)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int TrackBallParameter_TypeDefinitionIndex = 16845;

	class TrackBallParameter : public ::UnityEngine::Rendering::Vector4Parameter
	{
	public:
		::System::Void _ctor(::UnityEngine::E8984F4E44AE20E5 E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E8984F4E44AE20E5, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_TRACKBALLPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}
	};
}
