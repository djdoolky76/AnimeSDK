#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class GEIHCPAOKKK;
class JFBNBOHNJBF;
class JOOHBDMHGCA;
class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collision; }

#define MONOROOTMOTION_CACHECOMPONENTS_OFFSET UNITYSDK_OFFSET(0x10596080)
#define MONOROOTMOTION_CANSKIPCURRENTANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x10596740)
#define MONOROOTMOTION_GET_MUTEROOTMOTION_OFFSET UNITYSDK_OFFSET(0x10595FA0)
#define MONOROOTMOTION_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x10596380)
#define MONOROOTMOTION_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x105969E0)
#define MONOROOTMOTION_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x10596AA0)
#define MONOROOTMOTION_SETOWNER_OFFSET UNITYSDK_OFFSET(0x10596020)
#define MONOROOTMOTION_SET_MUTEROOTMOTION_OFFSET UNITYSDK_OFFSET(0x10595FB0)
#define MONOROOTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x10596B60)

inline static constexpr unsigned int MonoRootMotion_TypeDefinitionIndex = 58048;

class MonoRootMotion : public ::UnityEngine::MonoBehaviour
{
public:
	::MoleMole::Battle::Entity* _ownerEntity; // 0x18
	::System::Boolean collisionHandleEnable; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 _muteRootMotionCount; // 0x24
	::JOOHBDMHGCA* movementComponent; // 0x28
	::GEIHCPAOKKK* modelComponent; // 0x30
	::NLNIIPDCABP* animatorComponent; // 0x38
	::JFBNBOHNJBF* finalMoveComponent; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOROOTMOTION__CTOR_OFFSET))(this);
	}

	::System::Boolean get_MuteRootMotion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOROOTMOTION_GET_MUTEROOTMOTION_OFFSET))(this);
	}

	::System::Void set_MuteRootMotion(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOROOTMOTION_SET_MUTEROOTMOTION_OFFSET))(this, value);
	}

	::System::Void SetOwner(::MoleMole::Battle::Entity* owner)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MONOROOTMOTION_SETOWNER_OFFSET))(this, owner);
	}

	::System::Void OnAnimatorMove()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOROOTMOTION_ONANIMATORMOVE_OFFSET))(this);
	}

	::System::Boolean CanSkipCurrentAnimatorMove()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOROOTMOTION_CANSKIPCURRENTANIMATORMOVE_OFFSET))(this);
	}

	::System::Void CacheComponents()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOROOTMOTION_CACHECOMPONENTS_OFFSET))(this);
	}

	::System::Void OnCollisionEnter(::UnityEngine::Collision* other)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MONOROOTMOTION_ONCOLLISIONENTER_OFFSET))(this, other);
	}

	::System::Void OnCollisionExit(::UnityEngine::Collision* other)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MONOROOTMOTION_ONCOLLISIONEXIT_OFFSET))(this, other);
	}
};
