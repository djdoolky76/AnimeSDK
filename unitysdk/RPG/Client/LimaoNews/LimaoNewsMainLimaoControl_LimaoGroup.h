#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_LIMAOGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0xD3C0A80)

namespace RPG::Client::LimaoNews
{
	class LimaoNewsMainLimaoControl_LimaoGroup : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* LimaoItems; // 0x10
		::UnityEngine::Transform* Root; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_LIMAOGROUP_CTOR_OFFSET))(this);
		}

	};
}
