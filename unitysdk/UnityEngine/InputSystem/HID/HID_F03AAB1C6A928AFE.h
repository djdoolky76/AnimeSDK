#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFDFD8D59E1B8215;
namespace UnityEngine::InputSystem::HID { class HID_HIDLayoutBuilder; }

#define UNITYENGINE_INPUTSYSTEM_HID_HID_F03AAB1C6A928AFE_FBFB2B2F01504685_OFFSET UNITYSDK_OFFSET(0x40203D0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_F03AAB1C6A928AFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_F03AAB1C6A928AFE_TypeDefinitionIndex = 14583;

	class HID_F03AAB1C6A928AFE : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder* E85EF8FE2FFE77D8; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_F03AAB1C6A928AFE__CTOR_OFFSET))(this);
		}

		::EFDFD8D59E1B8215* FBFB2B2F01504685()
		{
			return ((::EFDFD8D59E1B8215*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_F03AAB1C6A928AFE_FBFB2B2F01504685_OFFSET))(this);
		}
	};
}
