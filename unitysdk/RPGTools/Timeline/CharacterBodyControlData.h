#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPGTOOLS_TIMELINE_CHARACTERBODYCONTROLDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8BB3B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterBodyControlData_TypeDefinitionIndex = 47939;

	class CharacterBodyControlData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::UnityEngine::Vector3 LocalPosition; // 0x18
		::UnityEngine::Quaternion LocalRotation; // 0x24
		::System::Boolean OverrideConfig; // 0x34
		::System::Byte _padding0[0x3];
		::System::String* OverrideTipBoneAttachPoint; // 0x38
		::System::Int32 OverrideSpineNum; // 0x40
		::System::Single ShoulderRecoverWeight; // 0x44
		::System::Boolean OverridePelvisMoveCurve; // 0x48
		::System::Byte _padding1[0x7];
		::UnityEngine::AnimationCurve* PelvisMoveForwardCurve; // 0x50
		::UnityEngine::AnimationCurve* PelvisMoveRightCurve; // 0x58
		::System::Boolean OverrideWeightCurve; // 0x60
		::System::Byte _padding2[0x7];
		::UnityEngine::AnimationCurve* WeightCurve; // 0x68
		::System::Single Duration; // 0x70
		::System::Byte _padding3[0x4];
		::System::String* CurveName; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERBODYCONTROLDATA_CTOR_OFFSET))(this);
		}

	};
}
