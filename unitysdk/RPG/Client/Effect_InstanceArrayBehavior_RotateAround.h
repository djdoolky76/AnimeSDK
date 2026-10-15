#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/TAUtils/QuaternionTransform.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ROTATEAROUND_CTOR_OFFSET UNITYSDK_OFFSET(0xCD33A60)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ROTATEAROUND_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xCD33680)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ROTATEAROUND_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xCD33450)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceArrayBehavior_RotateAround_TypeDefinitionIndex = 70611;

	class Effect_InstanceArrayBehavior_RotateAround : public ::System::Object
	{
	public:
		::UnityEngine::Transform* RotateAroundPoint; // 0x10
		::System::Single RotateAroundAngleSpeed; // 0x18
		::UnityEngine::Vector3 _RotateAroundPosition; // 0x1C
		::UnityEngine::Vector3 _RotateAroundAxis; // 0x28
		::System::Single _RotateAroundAngle; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ROTATEAROUND_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ROTATEAROUND_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::RPG::Client::TAUtils::QuaternionTransform a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TAUtils::QuaternionTransform))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ROTATEAROUND_HKKFFCBJOKM_OFFSET))(this, a1);
		}

	};
}
