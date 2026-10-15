#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsResult; }
namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BF228D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF227E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BF22910)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BF0B010)

namespace MiHoYo::SDK::PC::OS
{
	class HoYoChannelDelegate_CheckEntitlementsDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsParams* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsParams*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsParams* a1, ::System::Action* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsParams*, ::System::Action*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CHECKENTITLEMENTSDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
