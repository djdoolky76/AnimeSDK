#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlList_1.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme_MatchResult_Result.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme_MatchResult_Match.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x976DE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x976D70)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x976CB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_GET_HASMISSINGOPTIONALDEVICES_OFFSET UNITYSDK_OFFSET(0x5ED530)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_GET_HASMISSINGREQUIREDDEVICES_OFFSET UNITYSDK_OFFSET(0x5ED4B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_GET_ISSUCCESSFULMATCH_OFFSET UNITYSDK_OFFSET(0x976CA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x976CD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x409330)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x976D70)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_MatchResult_TypeDefinitionIndex = 31656;

	struct alignas(8) InputControlScheme_MatchResult
	{
		::UnityEngine::InputSystem::InputControlScheme_MatchResult_Result m_Result; // 0x10
		::System::Single m_Score; // 0x14
		::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> m_Devices; // 0x18
		::System::Byte _padding0[0x18];
		::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> m_Controls; // 0x38
		::System::Byte _padding1[0x18];
		::Il2CppArray<::System::Object*>* m_Requirements; // 0x58

		::System::Single get_score()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_GET_SCORE_OFFSET))(this);
		}

		::System::Boolean get_isSuccessfulMatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_GET_ISSUCCESSFULMATCH_OFFSET))(this);
		}

		::System::Boolean get_hasMissingRequiredDevices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_GET_HASMISSINGREQUIREDDEVICES_OFFSET))(this);
		}

		::System::Boolean get_hasMissingOptionalDevices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_GET_HASMISSINGOPTIONALDEVICES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> get_devices()
		{
			return ((::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_GET_DEVICES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControlScheme_MatchResult_Match get_Item(::System::Int32 index)
		{
			return ((::UnityEngine::InputSystem::InputControlScheme_MatchResult_Match(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_GET_ITEM_OFFSET))(this, index);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_MATCHRESULT_DISPOSE_OFFSET))(this);
		}
	};
}
