#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Timeline { class LookAtBoneSetup; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_LOOKATIKCONFIG_BNBEOIEBEMA_OFFSET UNITYSDK_OFFSET(0x1A727080)
#define MOLEMOLE_TIMELINE_LOOKATIKCONFIG_OGAFIPJEAKA_OFFSET UNITYSDK_OFFSET(0x1A728590)
#define MOLEMOLE_TIMELINE_LOOKATIKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A726FD0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LookAtIKConfig_TypeDefinitionIndex = 57775;

	class LookAtIKConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::MoleMole::Timeline::LookAtBoneSetup*>* spineBones; // 0x10
		::MoleMole::Timeline::LookAtBoneSetup* headBone; // 0x18
		::Il2CppArray<::MoleMole::Timeline::LookAtBoneSetup*>* eyeBones; // 0x20
		::System::Single bodyWeight; // 0x28
		::System::Single headWeight; // 0x2C
		::System::Single eyesWeight; // 0x30
		::System::Single clampWeight; // 0x34
		::System::Single clampWeightHead; // 0x38
		::System::Single clampWeightEyes; // 0x3C
		::System::Int32 clampSmoothing; // 0x40
		::UnityEngine::Vector3 spineTargetOffset; // 0x44
		::UnityEngine::Vector3 eyePositionOffset; // 0x50
		::System::Single eyeRotationRadiusScale; // 0x5C
		::System::Single eyeSpread; // 0x60
		::System::Single convergenceDistance; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean BNBEOIEBEMA(::UnityEngine::Transform* IAPKABMDJNF, ::System::Boolean HEILMJPOIME, ::Il2CppArray<::MoleMole::Timeline::LookAtBoneSetup*>*& ODIGJIFAFJP, ::Il2CppArray<::MoleMole::Timeline::LookAtBoneSetup*>*& MJIDELANFDI, ::System::String*& BLLNHDIDKPA)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::Il2CppArray<::MoleMole::Timeline::LookAtBoneSetup*>*&, ::Il2CppArray<::MoleMole::Timeline::LookAtBoneSetup*>*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKCONFIG_BNBEOIEBEMA_OFFSET))(this, IAPKABMDJNF, HEILMJPOIME, ODIGJIFAFJP, MJIDELANFDI, BLLNHDIDKPA);
		}

		static ::System::String* OGAFIPJEAKA(::System::String* CJBJONJDOLI)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKCONFIG_OGAFIPJEAKA_OFFSET))(CJBJONJDOLI);
		}
	};
}
