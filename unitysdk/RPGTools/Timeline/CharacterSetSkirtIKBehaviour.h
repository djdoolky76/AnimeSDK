#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
class SkirtIK;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xE8C1090)
#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xE8C0E40)
#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8C11A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterSetSkirtIKBehaviour_TypeDefinitionIndex = 47983;

	class CharacterSetSkirtIKBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::String* CharacterUniqueName; // 0x20
		::System::Boolean EnableHair; // 0x28
		::System::Boolean EnableSkirt; // 0x29
		::System::Byte _padding0[0x2];
		::System::Single HairErrTolerRate; // 0x2C
		::System::Boolean DisableHairRestrict; // 0x30
		::System::Byte _padding1[0x3];
		::System::Single HairMaxRestrict; // 0x34
		::System::Single HairOffset_X; // 0x38
		::System::Single HairOffset_Y; // 0x3C
		::System::Single Hair_Duration; // 0x40
		::System::Byte _padding2[0x4];
		::System::String* Hair_CurveName; // 0x48
		::System::Single _BaseDuration; // 0x50
		::System::Boolean _UseCurveBlend; // 0x54
		::System::Byte _padding3[0x3];
		::SkirtIK* _SkirtIK; // 0x58
		::UnityEngine::AnimationCurve* _BlendCurve; // 0x60
		::UnityEngine::AnimationCurve* _BaseCurve; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKBEHAVIOUR_AHEEAFKFALM_OFFSET))(this);
		}

	};
}
