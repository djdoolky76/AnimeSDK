#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_OutputAttribute; }

#define HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_B3D929E1BF55C05E_OFFSET UNITYSDK_OFFSET(0x3845C50)
#define HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_F206D41D308AB87A_OFFSET UNITYSDK_OFFSET(0x38460F0)
#define HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int HEU_ExampleInstanceCustomAttribute_TypeDefinitionIndex = 17996;

class HEU_ExampleInstanceCustomAttribute : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE__CTOR_OFFSET))(this);
	}

	static ::System::Void F206D41D308AB87A(::HoudiniEngineUnity::HEU_OutputAttribute* ABD861807EB9163A)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_OutputAttribute*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_F206D41D308AB87A_OFFSET))(ABD861807EB9163A);
	}

	::System::Void B3D929E1BF55C05E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_B3D929E1BF55C05E_OFFSET))(this);
	}
};
