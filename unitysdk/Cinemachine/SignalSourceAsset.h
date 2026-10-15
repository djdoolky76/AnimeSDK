#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define CINEMACHINE_SIGNALSOURCEASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x166AC6F0)

namespace Cinemachine
{
	inline static constexpr unsigned int SignalSourceAsset_TypeDefinitionIndex = 39845;

	class SignalSourceAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_SIGNALSOURCEASSET_CTOR_OFFSET))(this);
		}

	};
}
