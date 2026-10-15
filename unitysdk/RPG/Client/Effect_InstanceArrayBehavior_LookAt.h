#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/TAUtils/QuaternionTransform.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LOOKAT_CTOR_OFFSET UNITYSDK_OFFSET(0xCD3BF40)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LOOKAT_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xCD3BCC0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LOOKAT_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xCD3BC30)

namespace RPG::Client
{
	class Effect_InstanceArrayBehavior_LookAt : public ::System::Object
	{
	public:
		::UnityEngine::Transform* LookAtPoint; // 0x10
		::System::Single LookAtBlend; // 0x18
		::UnityEngine::Vector3 _LookAtPosition; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LOOKAT_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LOOKAT_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::RPG::Client::TAUtils::QuaternionTransform a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TAUtils::QuaternionTransform))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_LOOKAT_HKKFFCBJOKM_OFFSET))(this, a1);
		}

	};
}
