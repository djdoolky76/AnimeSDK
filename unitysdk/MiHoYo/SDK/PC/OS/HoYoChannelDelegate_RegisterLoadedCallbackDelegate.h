#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoadedResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERLOADEDCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D5075C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERLOADEDCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D5075F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERLOADEDCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D5070A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERLOADEDCALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D507090)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_RegisterLoadedCallbackDelegate_TypeDefinitionIndex = 19858;

	class HoYoChannelDelegate_RegisterLoadedCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERLOADEDCALLBACKDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoadedResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoadedResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERLOADEDCALLBACKDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoadedResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLoadedResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERLOADEDCALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_REGISTERLOADEDCALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
