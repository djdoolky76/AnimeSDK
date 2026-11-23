#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_KODAMABUILDDATA_A37ED838D6A1ECDC_OFFSET UNITYSDK_OFFSET(0x410EE80)
#define UNITYENGINE_KODAMABUILDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x410EE30)

namespace UnityEngine
{
	inline static constexpr unsigned int KodamaBuildData_TypeDefinitionIndex = 17067;

	class KodamaBuildData : public ::UnityEngine::Object
	{
	public:
		::System::Boolean A37ED838D6A1ECDC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KODAMABUILDDATA_A37ED838D6A1ECDC_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KODAMABUILDDATA__CTOR_OFFSET))(this);
		}
	};
}
