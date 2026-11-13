#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CUSTOMRP_POSMPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x198D3110)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int POSMParams_TypeDefinitionIndex = 38606;

	class POSMParams : public ::System::Object
	{
	public:
		::UnityEngine::Matrix4x4 oobbDelegateDrawMatrix; // 0x10
		::UnityEngine::Vector3 forward; // 0x50
		::UnityEngine::Matrix4x4 worldToBounds; // 0x5C
		::UnityEngine::Matrix4x4 worldToLocal; // 0x9C
		::UnityEngine::Matrix4x4 localToWorld; // 0xDC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_POSMPARAMS_CTOR_OFFSET))(this);
		}

	};
}
