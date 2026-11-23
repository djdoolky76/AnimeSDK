#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoPassScene; }
namespace MiHoYo::SDK { class UserCenterScene; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_ABTESTCONFIG_5101E47CCF4432D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AbTestConfig_5101E47CCF4432D8_TypeDefinitionIndex = 12934;

	class AbTestConfig_5101E47CCF4432D8 : public ::System::Object
	{
	public:
		::System::String* app_id; // 0x10
		::System::String* app_key; // 0x18
		::MiHoYo::SDK::HoYoPassScene* hoyopass_scene; // 0x20
		::MiHoYo::SDK::UserCenterScene* user_center_scene; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* enable_envs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ABTESTCONFIG_5101E47CCF4432D8__CTOR_OFFSET))(this);
		}
	};
}
