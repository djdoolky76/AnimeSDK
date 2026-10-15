#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_COMPLIANCESCENE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC4DEB0)

namespace MiHoYo::SDK
{
	class ComplianceScene : public ::System::Object
	{
	public:
		::System::String* compliance_experiment_id; // 0x10
		::System::String* compliance_scene_id; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMPLIANCESCENE_CTOR_OFFSET))(this);
		}

	};
}
