#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngineInternal/Input/NativeInputUpdateType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x20063150)
#define UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x200631D0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x20062C90)
#define UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x20063140)

namespace UnityEngineInternal::Input
{
	inline static constexpr unsigned int NativeUpdateCallback_TypeDefinitionIndex = 27442;

	class NativeUpdateCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::PVOID buffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngineInternal::Input::NativeInputUpdateType, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_INVOKE_OFFSET))(this, updateType, buffer);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::PVOID buffer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngineInternal::Input::NativeInputUpdateType, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_BEGININVOKE_OFFSET))(this, updateType, buffer, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
