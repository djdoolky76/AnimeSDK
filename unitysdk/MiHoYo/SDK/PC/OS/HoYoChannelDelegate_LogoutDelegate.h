#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelLogoutParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLogoutResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGOUTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D147710)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGOUTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D147750)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGOUTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D1442F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGOUTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D147700)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_LogoutDelegate_TypeDefinitionIndex = 19856;

	class HoYoChannelDelegate_LogoutDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGOUTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelLogoutParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLogoutResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLogoutParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLogoutResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGOUTDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelLogoutParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLogoutResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLogoutParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLogoutResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGOUTDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_LOGOUTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
