#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_NACHGOICNOM_CTOR_OFFSET UNITYSDK_OFFSET(0xC3A1A10)

namespace RPG::Client
{
	class A4SkyDomeEffectControlBehavior_NACHGOICNOM : public ::System::Object
	{
	public:
		::UnityEngine::Material* KHFINMBNGBE; // 0x10
		::System::Single IEHPFADHJFD; // 0x18
		::UnityEngine::Vector3 GEPMPMGEMFJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_NACHGOICNOM_CTOR_OFFSET))(this);
		}

	};
}
