#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelPresenceParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelPresenceResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_PRESENCEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DA32AC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_PRESENCEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DA32B00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_PRESENCEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DA32520)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_PRESENCEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA32510)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_PresenceDelegate_TypeDefinitionIndex = 19857;

	class HoYoChannelDelegate_PresenceDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_PRESENCEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelPresenceParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPresenceResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPresenceParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPresenceResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_PRESENCEDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelPresenceParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPresenceResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelPresenceParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelPresenceResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_PRESENCEDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_PRESENCEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
