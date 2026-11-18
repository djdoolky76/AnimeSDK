#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOUICAMERA_AWAKE_OFFSET UNITYSDK_OFFSET(0x12B83030)
#define MOLEMOLE_MONOUICAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x12B83130)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUICamera_TypeDefinitionIndex = 45826;

	class MonoUICamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean autoSetCameraClearFlag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICAMERA_AWAKE_OFFSET))(this);
		}
	};
}
