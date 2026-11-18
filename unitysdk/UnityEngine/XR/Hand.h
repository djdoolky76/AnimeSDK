#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_XR_HAND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9B0B50)
#define UNITYENGINE_XR_HAND_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B0BF0)
#define UNITYENGINE_XR_HAND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B0B70)
#define UNITYENGINE_XR_HAND_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x282350)
#define UNITYENGINE_XR_HAND_GET_FEATUREINDEX_OFFSET UNITYSDK_OFFSET(0x363D60)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int Hand_TypeDefinitionIndex = 27664;

	struct alignas(4) Hand
	{
		::System::UInt64 m_DeviceId; // 0x10
		::System::UInt32 m_FeatureIndex; // 0x18

		::System::UInt64 get_deviceId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_GET_DEVICEID_OFFSET))(this);
		}

		::System::UInt32 get_featureIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_GET_FEATUREINDEX_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_EQUALS_OFFSET))(this, obj);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::XR::Hand other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::XR::Hand))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_EQUALS_1_OFFSET))(this, other);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_HAND_GETHASHCODE_OFFSET))(this);
		}
	};
}
