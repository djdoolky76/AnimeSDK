#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FABRIK; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FABRIK_WEAPONCONTROL_OTHERHAND_CTOR_OFFSET UNITYSDK_OFFSET(0xCE5D710)
#define RPG_CLIENT_FABRIK_WEAPONCONTROL_OTHERHAND_MKLKPDIMHNJ_OFFSET UNITYSDK_OFFSET(0xCE5D610)

namespace RPG::Client
{
	class FABRIK_WeaponControl_OtherHand : public ::System::Object
	{
	public:
		::RPG::Client::FABRIK* ik; // 0x10
		::UnityEngine::Transform* handPoint; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* handControlPoints; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_WEAPONCONTROL_OTHERHAND_CTOR_OFFSET))(this);
		}

		::System::String* MKLKPDIMHNJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_WEAPONCONTROL_OTHERHAND_MKLKPDIMHNJ_OFFSET))(this);
		}

	};
}
