#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/MinMaxRange.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x16E5DC90)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x16E5DC00)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x16E5DCA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x16E5DCB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_MinMaxRangeParameter_TypeDefinitionIndex = 26376;

	class MKGlow_MinMaxRangeParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void Interp(::PostProcess::MKGlow::MinMaxRange from, ::PostProcess::MKGlow::MinMaxRange to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::MinMaxRange, ::PostProcess::MKGlow::MinMaxRange, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::PostProcess::MKGlow::MinMaxRange get_value()
		{
			return ((::PostProcess::MKGlow::MinMaxRange(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::PostProcess::MKGlow::MinMaxRange value)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::MinMaxRange))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
