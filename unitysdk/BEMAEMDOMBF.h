#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define BEMAEMDOMBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B4EE0)

inline static constexpr unsigned int BEMAEMDOMBF_TypeDefinitionIndex = 44773;

	class BEMAEMDOMBF : public ::System::Object
	{
	public:
		::System::Action* EMLJHOCGNCC; // 0x10
		::System::String* BDACPPLKLGL; // 0x18
		::UnityEngine::AnimationCurve* KFCELIGJDAD; // 0x20
		::UnityEngine::AnimationCurve* ANLGGOHJFMK; // 0x28
		::UnityEngine::Transform* FAHLGFCIDMN; // 0x30
		::UnityEngine::Quaternion JMODBAACABL; // 0x38
		::System::Single MCEAIMBIHGH; // 0x48
		::UnityEngine::Vector3 FJBPOFJPFNP; // 0x4C
		::UnityEngine::Vector3 KLDJPNDKLMI; // 0x58
		::UnityEngine::Quaternion BMDHDNGHOFA; // 0x64
		::System::Single IEHPFADHJFD; // 0x74
		::UnityEngine::Vector3 DNOBGFPPFLI; // 0x78
		::UnityEngine::Vector3 FPINAFPKKOM; // 0x84
		::System::Single PMHMEGEJDGP; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMAEMDOMBF_CTOR_OFFSET))(this);
		}

	};
