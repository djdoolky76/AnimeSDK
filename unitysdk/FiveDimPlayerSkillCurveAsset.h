#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define FIVEDIMPLAYERSKILLCURVEASSET_CEHEDAPKGKG_OFFSET UNITYSDK_OFFSET(0x1CA73420)
#define FIVEDIMPLAYERSKILLCURVEASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA737E0)
#define FIVEDIMPLAYERSKILLCURVEASSET_FPLNBDNPECI_OFFSET UNITYSDK_OFFSET(0x1CA73600)
#define FIVEDIMPLAYERSKILLCURVEASSET_HKGEJOKIMDB_OFFSET UNITYSDK_OFFSET(0x1CA73510)
#define FIVEDIMPLAYERSKILLCURVEASSET_JNHPHMBHNNC_OFFSET UNITYSDK_OFFSET(0x1CA736F0)
#define FIVEDIMPLAYERSKILLCURVEASSET_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1CA73380)

inline static constexpr unsigned int FiveDimPlayerSkillCurveAsset_TypeDefinitionIndex = 41924;

	class FiveDimPlayerSkillCurveAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* sourceClipName; // 0x18
		::System::String* boneNodeName; // 0x20
		::System::Single frameRate; // 0x28
		::System::Int32 totalFrames; // 0x2C
		::System::Single duration; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* positionXCurve; // 0x38
		::UnityEngine::AnimationCurve* positionYCurve; // 0x40
		::UnityEngine::AnimationCurve* positionZCurve; // 0x48
		::UnityEngine::AnimationCurve* rotationXCurve; // 0x50
		::UnityEngine::AnimationCurve* rotationYCurve; // 0x58
		::UnityEngine::AnimationCurve* rotationZCurve; // 0x60
		::UnityEngine::AnimationCurve* scaleXCurve; // 0x68
		::UnityEngine::AnimationCurve* scaleYCurve; // 0x70
		::UnityEngine::AnimationCurve* scaleZCurve; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMPLAYERSKILLCURVEASSET_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::System::String* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMPLAYERSKILLCURVEASSET_OINBDMGFFJL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CEHEDAPKGKG(::UnityEngine::AnimationCurve* a1, ::UnityEngine::AnimationCurve* a2, ::UnityEngine::AnimationCurve* a3, ::UnityEngine::AnimationCurve* a4, ::UnityEngine::AnimationCurve* a5, ::UnityEngine::AnimationCurve* a6, ::UnityEngine::AnimationCurve* a7, ::UnityEngine::AnimationCurve* a8, ::UnityEngine::AnimationCurve* a9)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FIVEDIMPLAYERSKILLCURVEASSET_CEHEDAPKGKG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::UnityEngine::Vector3 HKGEJOKIMDB(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMPLAYERSKILLCURVEASSET_HKGEJOKIMDB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 FPLNBDNPECI(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMPLAYERSKILLCURVEASSET_FPLNBDNPECI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 JNHPHMBHNNC(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMPLAYERSKILLCURVEASSET_JNHPHMBHNNC_OFFSET))(this, a1);
		}

	};
