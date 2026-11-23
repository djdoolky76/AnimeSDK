#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

#define UNITYENGINE_RENDERING_COLORPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x402EE70)
#define UNITYENGINE_RENDERING_COLORPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x402EF90)
#define UNITYENGINE_RENDERING_COLORPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x402EEE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ColorParameter_TypeDefinitionIndex = 20408;

	class ColorParameter
	{
	public:
		::System::Boolean hdr; // 0x28
		::System::Boolean showAlpha; // 0x29
		::System::Boolean showEyeDropper; // 0x2A

		::System::Void _ctor(::UnityEngine::E46B881AA2636190 E937D4885DAA1AE8, ::System::Boolean EF2595CE75394310, ::System::Boolean F679B5D4E90C2DB7, ::System::Boolean AC39F437EB05B9A0, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, EF2595CE75394310, F679B5D4E90C2DB7, AC39F437EB05B9A0, F61D1A6BA6063471);
		}

		::System::Void _ctor_1(::UnityEngine::E46B881AA2636190 E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORPARAMETER__CTOR_1_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}

		::System::Void Interp(::UnityEngine::E46B881AA2636190 BC546FFFB0A5B7A6, ::UnityEngine::E46B881AA2636190 A41067CFE0E0FB08, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190, ::UnityEngine::E46B881AA2636190, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORPARAMETER_INTERP_OFFSET))(this, BC546FFFB0A5B7A6, A41067CFE0E0FB08, BBCFEC7DB309E927);
		}
	};
}
