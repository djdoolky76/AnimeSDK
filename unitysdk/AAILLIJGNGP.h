#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define AAILLIJGNGP__CTOR_OFFSET UNITYSDK_OFFSET(0x16433100)

inline static constexpr unsigned int AAILLIJGNGP_TypeDefinitionIndex = 78394;

class AAILLIJGNGP : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* FAJHPKBELMF; // 0x10
	::System::Single MDPPNMIPDMP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAILLIJGNGP__CTOR_OFFSET))(this);
	}
};
