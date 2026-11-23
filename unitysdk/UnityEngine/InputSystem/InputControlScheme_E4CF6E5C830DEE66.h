#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A03AAFF87F42D454.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme_E4CF6E5C830DEE66_BFE8C2E1F1993414.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
template <typename T> class F875E7A8F1781006;

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_E4CF6E5C830DEE66_A457BC12B6CF55CC_OFFSET UNITYSDK_OFFSET(0x40252A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_E4CF6E5C830DEE66_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x40251A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_E4CF6E5C830DEE66_F698D4BCC10E0D2E_OFFSET UNITYSDK_OFFSET(0x4025200)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_E4CF6E5C830DEE66_TypeDefinitionIndex = 14603;

	struct alignas(8) InputControlScheme_E4CF6E5C830DEE66
	{
		::UnityEngine::InputSystem::InputControlScheme_E4CF6E5C830DEE66_BFE8C2E1F1993414 E3638FCDE6B740D9; // 0x10
		::System::Single BD2D477F9B068969; // 0x14
		::A03AAFF87F42D454<::UnityEngine::InputSystem::InputDevice*> BAE65062E744AC6D; // 0x18
		::System::Byte _padding0[0x18];
		::A03AAFF87F42D454<::UnityEngine::InputSystem::InputControl*> BA9C595B6D4B8BC6; // 0x38
		::System::Byte _padding1[0x18];
		::Il2CppArray<::System::Object*>* EC2D4F9AF26EDE8F; // 0x58

		::F875E7A8F1781006<::System::Object*>* F698D4BCC10E0D2E()
		{
			return ((::F875E7A8F1781006<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_E4CF6E5C830DEE66_F698D4BCC10E0D2E_OFFSET))(this);
		}

		::System::Collections::IEnumerator* A457BC12B6CF55CC()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_E4CF6E5C830DEE66_A457BC12B6CF55CC_OFFSET))(this);
		}

		::System::Void E8AF1E0387A100FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_E4CF6E5C830DEE66_E8AF1E0387A100FA_OFFSET))(this);
		}
	};
}
