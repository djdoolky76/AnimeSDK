#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CINEMACHINE_CINEMACHINEPIPELINE_CTOR_OFFSET UNITYSDK_OFFSET(0x174E0910)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePipeline_TypeDefinitionIndex = 40675;

	class CinemachinePipeline : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPIPELINE_CTOR_OFFSET))(this);
		}

	};
}
