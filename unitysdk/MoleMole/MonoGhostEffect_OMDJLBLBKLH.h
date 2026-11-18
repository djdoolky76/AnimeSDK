#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/ShaderPropertyType.h"

class NapGradient;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoGhostEffect_OMDJLBLBKLH_TypeDefinitionIndex = 85704;

	struct alignas(8) MonoGhostEffect_OMDJLBLBKLH
	{
		::System::String* ACDCKJKDPGI; // 0x10
		::System::Int32 FJPBKADAMGC; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* KGDFMHEKOAI; // 0x20
		::NapGradient* BLGLPDJABIN; // 0x28
		::System::Single BKLHHDEELFL; // 0x30
		::System::Single OMAIMFOELNN; // 0x34
		::UnityEngine::Rendering::ShaderPropertyType GCABCCJDIKC; // 0x38
		::System::Byte _padding1[0x4];
		::Il2CppArray<::UnityEngine::AnimationCurve*>* IICJLINKOPA; // 0x40
	};
}
