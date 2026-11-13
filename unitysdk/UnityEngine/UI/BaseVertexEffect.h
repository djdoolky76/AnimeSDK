#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UI_BASEVERTEXEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD1DC60)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int BaseVertexEffect_TypeDefinitionIndex = 6898;

	class BaseVertexEffect : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEVERTEXEFFECT_CTOR_OFFSET))(this);
		}

	};
}
