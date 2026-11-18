#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_TIMELINE_LOOKATBONESETUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C4750)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LookAtBoneSetup_TypeDefinitionIndex = 71343;

	class LookAtBoneSetup : public ::System::Object
	{
	public:
		::System::String* bonePath; // 0x10
		::UnityEngine::Vector3 forwardAxis; // 0x18
		::UnityEngine::Quaternion defaultLocalRotation; // 0x24
		::System::Single weight; // 0x34
		::System::Single yawWeight; // 0x38
		::System::Single pitchWeight; // 0x3C
		::System::Boolean autoAdd; // 0x40
		::System::Boolean referenceCaptured; // 0x41
		::System::Boolean eyeCenterEstimated; // 0x42
		::System::Byte _padding0[0x5];
		::System::String* eyeCenterBonePath; // 0x48
		::UnityEngine::Vector3 eyeRotationCenterOffset; // 0x50
		::UnityEngine::Vector3 eyeReferenceLocalPosition; // 0x5C
		::System::Int32 eyeCenterVertexCount; // 0x68
		::System::Byte _padding1[0x4];
		::System::String* eyeCenterEstimateInfo; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATBONESETUP__CTOR_OFFSET))(this);
		}
	};
}
