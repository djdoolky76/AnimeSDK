#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class WeGameSessionTicketModel; }
namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C01DAD0)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C01DA50)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C01DB00)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C01DAC0)

namespace MiHoYo::SDK
{
	class WeGameDelegate_AsyncAcquireSessionTicketDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
