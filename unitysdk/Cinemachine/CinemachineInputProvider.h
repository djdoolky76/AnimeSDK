#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CINEMACHINE_CINEMACHINEINPUTPROVIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x19C5C630)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineInputProvider_TypeDefinitionIndex = 40785;

	class CinemachineInputProvider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER_CTOR_OFFSET))(this);
		}

	};
}
