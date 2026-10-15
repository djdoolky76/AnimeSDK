#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngineInternal/Input/NativeInputUpdateType.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F4718E0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F471870)
#define UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F471960)
#define UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F471790)

namespace UnityEngineInternal::Input
{
	class NativeUpdateCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngineInternal::Input::NativeInputUpdateType a1, ::PVOID a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngineInternal::Input::NativeInputUpdateType, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngineInternal::Input::NativeInputUpdateType a1, ::PVOID a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngineInternal::Input::NativeInputUpdateType, ::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
