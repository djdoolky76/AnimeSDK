#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define UNITYENGINE_STATEMACHINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace UnityEngine
{
	inline static constexpr unsigned int StateMachineBehaviour_TypeDefinitionIndex = 21092;

	class StateMachineBehaviour : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
