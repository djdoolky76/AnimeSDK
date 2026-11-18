#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannel.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1CF37D90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL_GETCHANNEL_OFFSET UNITYSDK_OFFSET(0x1CF37CC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1CF37CF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL_INIT_OFFSET UNITYSDK_OFFSET(0x1CF37CE0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL_LOGIN_OFFSET UNITYSDK_OFFSET(0x1CF37DA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL_PAY_OFFSET UNITYSDK_OFFSET(0x1CF37D40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL_USEHOYOCHANNEL_OFFSET UNITYSDK_OFFSET(0x1CF37CD0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF37DF0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelOfficial_TypeDefinitionIndex = 19873;

	class HoYoChannelOfficial : public ::MiHoYo::SDK::PC::OS::HoYoChannel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::SubChannelType GetChannel()
		{
			return ((::MiHoYo::SDK::SubChannelType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL_GETCHANNEL_OFFSET))(this);
		}

		::System::Boolean UseHoYoChannel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL_USEHOYOCHANNEL_OFFSET))(this);
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL_INIT_OFFSET))(this);
		}

		::System::Void GetProductList(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL_GETPRODUCTLIST_OFFSET))(this, jsonString, callback);
		}

		::System::Void Pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL_PAY_OFFSET))(this, jsonString, callback);
		}

		::System::Void CheckEntitlements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL_CHECKENTITLEMENTS_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELOFFICIAL_LOGIN_OFFSET))(this, callback);
		}
	};
}
