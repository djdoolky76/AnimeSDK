#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_UNREGISTERRECEIVEINVITEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D335A70)
#define MIHOYO_SDK_CONSOLEDELEGATE_UNREGISTERRECEIVEINVITEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D335AA0)
#define MIHOYO_SDK_CONSOLEDELEGATE_UNREGISTERRECEIVEINVITEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D32F410)
#define MIHOYO_SDK_CONSOLEDELEGATE_UNREGISTERRECEIVEINVITEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D335A60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_UnregisterReceiveInviteDelegate_TypeDefinitionIndex = 18893;

	class ConsoleDelegate_UnregisterReceiveInviteDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UNREGISTERRECEIVEINVITEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UNREGISTERRECEIVEINVITEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UNREGISTERRECEIVEINVITEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UNREGISTERRECEIVEINVITEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
