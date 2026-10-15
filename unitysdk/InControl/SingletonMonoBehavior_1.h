#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }

namespace InControl
{
	inline static constexpr unsigned int SingletonMonoBehavior_1_TypeDefinitionIndex = 40914;

	template <typename T>
	class SingletonMonoBehavior_1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		static T* StaticGet_instance()
		{
			return (T*)UnitySDK::FromName("InControl", "SingletonMonoBehavior`1")->GetStaticField(0x0);
		}

		static ::System::Boolean* StaticGet_hasInstance()
		{
			return (::System::Boolean*)UnitySDK::FromName("InControl", "SingletonMonoBehavior`1")->GetStaticField(0x0);
		}

		static ::System::Int32* StaticGet_instanceId()
		{
			return (::System::Int32*)UnitySDK::FromName("InControl", "SingletonMonoBehavior`1")->GetStaticField(0x0);
		}

		static ::System::Object** StaticGet_lockObject()
		{
			return (::System::Object**)UnitySDK::FromName("InControl", "SingletonMonoBehavior`1")->GetStaticField(0x0);
		}

	};
}
