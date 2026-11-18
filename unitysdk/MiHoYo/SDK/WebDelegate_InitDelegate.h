#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CF42CD0)
#define MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CF42DA0)
#define MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF42630)
#define MIHOYO_SDK_WEBDELEGATE_INITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF42620)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_InitDelegate_TypeDefinitionIndex = 19067;

	class WebDelegate_InitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_INITDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::System::String* url, ::System::Boolean forceOffScreen, ::System::Int32 animationOptions, ::System::Boolean disableReloadLoadingAnimation)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_INVOKE_OFFSET))(this, url, forceOffScreen, animationOptions, disableReloadLoadingAnimation);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* url, ::System::Boolean forceOffScreen, ::System::Int32 animationOptions, ::System::Boolean disableReloadLoadingAnimation, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_BEGININVOKE_OFFSET))(this, url, forceOffScreen, animationOptions, disableReloadLoadingAnimation, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
