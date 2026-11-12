#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_LIMAOGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0xDDF6690)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainLimaoControl_LimaoGroup_TypeDefinitionIndex = 83146;

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
