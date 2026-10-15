#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class ABTestConfig; }
namespace System { class String; }

#define MIHOYO_SDK_ABTESTMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC20EE0)

namespace MiHoYo::SDK
{
	class ABTestModel : public ::System::Object
	{
	public:
		::System::Int32 code; // 0x10
		::System::Int32 type; // 0x14
		::System::String* config_id; // 0x18
		::System::String* period_id; // 0x20
		::System::String* version; // 0x28
		::MiHoYo::SDK::ABTestConfig* configs; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ABTESTMODEL_CTOR_OFFSET))(this);
		}

	};
}
