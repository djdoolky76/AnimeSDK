#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BFD2730)
#define MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFD26B0)
#define MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BFD2760)
#define MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BFD2720)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_DeviceFPRefreshDelegate_TypeDefinitionIndex = 7771;

	class SDKDelegate_DeviceFPRefreshDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_DEVICEFPREFRESHDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
