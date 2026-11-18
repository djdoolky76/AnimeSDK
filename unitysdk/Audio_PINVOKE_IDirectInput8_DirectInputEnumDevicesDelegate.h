#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13608110)
#define AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13608170)
#define AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13607DF0)
#define AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x13607DE0)

inline static constexpr unsigned int Audio_PINVOKE_IDirectInput8_DirectInputEnumDevicesDelegate_TypeDefinitionIndex = 38672;

class Audio_PINVOKE_IDirectInput8_DirectInputEnumDevicesDelegate : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE__CTOR_OFFSET))(this, object, method);
	}

	::System::Int32 Invoke(::PVOID deviceInstance, ::System::IntPtr data)
	{
		return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE_INVOKE_OFFSET))(this, deviceInstance, data);
	}

	::System::IAsyncResult* BeginInvoke(::PVOID deviceInstance, ::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE_BEGININVOKE_OFFSET))(this, deviceInstance, data, callback, object);
	}

	::System::Int32 EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE_ENDINVOKE_OFFSET))(this, result);
	}
};
