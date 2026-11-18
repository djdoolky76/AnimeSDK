#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_STRINGANIMATIONCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StringAnimationCurve_TypeDefinitionIndex = 66837;

	struct alignas(8) StringAnimationCurve
	{
		::System::String* name; // 0x10
		::UnityEngine::AnimationCurve* curve; // 0x18

		::System::Void _ctor(::System::String* HIAIKHDFCLN, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STRINGANIMATIONCURVE__CTOR_OFFSET))(this, HIAIKHDFCLN, FAJHPKBELMF);
		}
	};
}
