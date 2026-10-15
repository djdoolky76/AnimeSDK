#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelRecentPlayersParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelRecentPlayersResult; }
namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BF237D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF236E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BF23810)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BF1CC30)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_RecentPlayersDelegate_TypeDefinitionIndex = 8570;

	class HoYoChannelDelegate_RecentPlayersDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersParams* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersParams*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersParams* a1, ::System::Action* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersParams*, ::System::Action*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_RECENTPLAYERSDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
