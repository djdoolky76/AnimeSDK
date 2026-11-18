#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class IObserver_1; }
namespace UnityEngine::InputSystem { class RemoteInputPlayerConnection; }

#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SUBSCRIBER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F4EC280)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SUBSCRIBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4EC2E0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int RemoteInputPlayerConnection_Subscriber_TypeDefinitionIndex = 31732;

	class RemoteInputPlayerConnection_Subscriber : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::RemoteInputPlayerConnection* owner; // 0x10
		::System::IObserver_1<::System::Object*>* observer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SUBSCRIBER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SUBSCRIBER_DISPOSE_OFFSET))(this);
		}
	};
}
