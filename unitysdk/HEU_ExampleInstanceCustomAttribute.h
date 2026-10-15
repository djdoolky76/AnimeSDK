#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace HoudiniEngineUnity { class HEU_OutputAttribute; }

#define HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8BDD90)
#define HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_INSTANCERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B8BD5C0)
#define HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_LOGATTR_OFFSET UNITYSDK_OFFSET(0x1B8BDBE0)

	class HEU_ExampleInstanceCustomAttribute : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_CTOR_OFFSET))(this);
		}

		::System::Void InstancerCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_INSTANCERCALLBACK_OFFSET))(this);
		}

		static ::System::Void LogAttr(::HoudiniEngineUnity::HEU_OutputAttribute* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_OutputAttribute*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_LOGATTR_OFFSET))(a1);
		}

	};
