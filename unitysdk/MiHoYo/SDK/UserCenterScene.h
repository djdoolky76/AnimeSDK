#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_USERCENTERSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UserCenterScene_TypeDefinitionIndex = 12757;

	class UserCenterScene : public ::System::Object
	{
	public:
		::System::String* user_center_experiment_id; // 0x10
		::System::String* user_center_scene_id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_USERCENTERSCENE__CTOR_OFFSET))(this);
		}
	};
}
