#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define BIFCHFEAMDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1867CA60)

inline static constexpr unsigned int BIFCHFEAMDE_TypeDefinitionIndex = 54664;

class BIFCHFEAMDE : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* POBCKFOFIPN; // 0x10
	::System::Single IKOEFCAOEOO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFCHFEAMDE__CTOR_OFFSET))(this);
	}
};
