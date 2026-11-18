#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PERFTEYVAT_NETWORKCLIENTPROFILER__CTOR_OFFSET UNITYSDK_OFFSET(0x1374BFE0)

namespace PerfTeyvat
{
	inline static constexpr unsigned int NetworkClientProfiler_TypeDefinitionIndex = 81968;

	class NetworkClientProfiler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERFTEYVAT_NETWORKCLIENTPROFILER__CTOR_OFFSET))(this);
		}
	};
}
