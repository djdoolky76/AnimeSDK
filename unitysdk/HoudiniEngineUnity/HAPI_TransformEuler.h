#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/B29EEC65D526A084.h"
#include "unitysdk/FA78B0257AA80CDE/FC45C8D1ECDADFF5.h"
#include "unitysdk/System/ValueType.h"

#define HOUDINIENGINEUNITY_HAPI_TRANSFORMEULER_INIT_OFFSET UNITYSDK_OFFSET(0x38981F0)
#define HOUDINIENGINEUNITY_HAPI_TRANSFORMEULER__CTOR_OFFSET UNITYSDK_OFFSET(0x38982E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_TransformEuler_TypeDefinitionIndex = 18143;

	struct alignas(8) HAPI_TransformEuler
	{
		::Il2CppArray<::System::Single>* position; // 0x10
		::Il2CppArray<::System::Single>* rotationEuler; // 0x18
		::Il2CppArray<::System::Single>* scale; // 0x20
		::Il2CppArray<::System::Single>* shear; // 0x28
		::FA78B0257AA80CDE::FC45C8D1ECDADFF5 rotationOrder; // 0x30
		::FA78B0257AA80CDE::B29EEC65D526A084 rstOrder; // 0x34

		::System::Void _ctor(::System::Boolean EB1CDDAF823C5CB4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_TRANSFORMEULER__CTOR_OFFSET))(this, EB1CDDAF823C5CB4);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_TRANSFORMEULER_INIT_OFFSET))(this);
		}
	};
}
