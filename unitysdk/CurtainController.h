#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CurtainController_EAxis.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define CURTAINCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12B96590)
#define CURTAINCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12B96380)
#define CURTAINCONTROLLER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B96AD0)
#define CURTAINCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x12B96840)
#define CURTAINCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B97030)

inline static constexpr unsigned int CurtainController_TypeDefinitionIndex = 85426;

class CurtainController : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* testPoint; // 0x18
	::System::Single blendTime; // 0x20
	::UnityEngine::Vector3 _PivotCenter; // 0x24
	::UnityEngine::Vector3 _SecondWaveAxis; // 0x30
	::System::Int32 _Frequency; // 0x3C
	::System::Single _WindIntensity; // 0x40
	::CurtainController_EAxis processAxis; // 0x44
	::System::Single windTrans; // 0x48
	::System::Single currentIntensity; // 0x4C
	::System::Single targetIntensity; // 0x50
	::System::Single transitionSpeed; // 0x54
	::UnityEngine::Vector3 AvatarPosition; // 0x58
	::UnityEngine::Vector3 LastAvatarPosion; // 0x64
	::GEIHCPAOKKK* charModelComp; // 0x70
	::System::Boolean subscribed; // 0x78
	::System::Byte _padding0[0x7];
	::UnityEngine::MaterialPropertyBlock* mpb; // 0x80
	::System::Boolean ismoving; // 0x88
	::System::Byte _padding1[0x7];
	::Il2CppArray<::UnityEngine::MeshRenderer*>* meshRenderers; // 0x90
	::System::Int32 _Wind; // 0x98
	::System::Int32 _windParam1; // 0x9C
	::System::Int32 _windParam2; // 0xA0
	::System::Int32 _windParam3; // 0xA4
	::System::Int32 _windParam4; // 0xA8
	::System::Int32 _windParam5; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURTAINCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURTAINCONTROLLER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURTAINCONTROLLER_ONDISABLE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURTAINCONTROLLER_START_OFFSET))(this);
	}

	::System::Void OnUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURTAINCONTROLLER_ONUPDATE_OFFSET))(this);
	}
};
