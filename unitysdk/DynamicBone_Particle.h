#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define DYNAMICBONE_PARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9A75B0)

inline static constexpr unsigned int DynamicBone_Particle_TypeDefinitionIndex = 34854;

class DynamicBone_Particle : public ::System::Object
{
public:
	::UnityEngine::Transform* m_Transform; // 0x10
	::System::Int32 m_ParentIndex; // 0x18
	::System::Single m_BoneLength; // 0x1C
	::System::Single m_Damping; // 0x20
	::UnityEngine::Vector3 m_PrevPosition; // 0x24
	::UnityEngine::Quaternion m_InitLocalRotation; // 0x30
	::UnityEngine::Vector3 m_EndOffset; // 0x40
	::System::Single m_Stiffness; // 0x4C
	::UnityEngine::Vector3 m_Position; // 0x50
	::System::Single m_Elasticity; // 0x5C
	::UnityEngine::Vector3 m_InitLocalPosition; // 0x60
	::System::Boolean m_isCollide; // 0x6C
	::System::Byte _padding0[0x3];
	::System::Single m_Friction; // 0x70
	::System::Single m_Radius; // 0x74
	::System::Single m_Inert; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONE_PARTICLE__CTOR_OFFSET))(this);
	}
};
