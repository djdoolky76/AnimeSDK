#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E733EA16DCBE16B0/B0878849BC7428D5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRFeatureDescriptor.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_INPUTSYSTEM_XR_XRDEVICEDESCRIPTOR_FROMJSON_OFFSET UNITYSDK_OFFSET(0x3FDA570)
#define UNITYENGINE_INPUTSYSTEM_XR_XRDEVICEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRDeviceDescriptor_TypeDefinitionIndex = 14429;

	class XRDeviceDescriptor : public ::System::Object
	{
	public:
		::System::String* deviceName; // 0x10
		::System::String* manufacturer; // 0x18
		::System::String* serialNumber; // 0x20
		::E733EA16DCBE16B0::B0878849BC7428D5 characteristics; // 0x28
		::System::Int32 deviceId; // 0x2C
		::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* inputFeatures; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRDEVICEDESCRIPTOR__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* FromJson(::System::String* F1DA3CEDFEA65142)
		{
			return ((::UnityEngine::InputSystem::XR::XRDeviceDescriptor*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRDEVICEDESCRIPTOR_FROMJSON_OFFSET))(F1DA3CEDFEA65142);
		}
	};
}
