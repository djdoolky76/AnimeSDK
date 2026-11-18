#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define DYNAMICBONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9A8910)

inline static constexpr unsigned int DynamicBoneConfig_TypeDefinitionIndex = 34860;

class DynamicBoneConfig : public ::UnityEngine::ScriptableObject
{
public:
	::System::Single m_Damping; // 0x18
	::System::Byte _padding0[0x4];
	::UnityEngine::AnimationCurve* m_DampingDistrib; // 0x20
	::System::Single m_Elasticity; // 0x28
	::System::Byte _padding1[0x4];
	::UnityEngine::AnimationCurve* m_ElasticityDistrib; // 0x30
	::System::Single m_Stiffness; // 0x38
	::System::Byte _padding2[0x4];
	::UnityEngine::AnimationCurve* m_StiffnessDistrib; // 0x40
	::System::Single m_Inert; // 0x48
	::System::Byte _padding3[0x4];
	::UnityEngine::AnimationCurve* m_InertDistrib; // 0x50
	::System::Single m_Friction; // 0x58
	::System::Byte _padding4[0x4];
	::UnityEngine::AnimationCurve* m_FrictionDistrib; // 0x60
	::System::Single m_Radius; // 0x68
	::System::Byte _padding5[0x4];
	::UnityEngine::AnimationCurve* m_RadiusDistrib; // 0x70
	::System::Single m_EndLength; // 0x78
	::UnityEngine::Vector3 m_EndOffset; // 0x7C
	::UnityEngine::Vector3 m_Gravity; // 0x88
	::UnityEngine::Vector3 m_Force; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONECONFIG__CTOR_OFFSET))(this);
	}
};
