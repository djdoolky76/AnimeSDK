#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MiniEmoEffectOverride; }
namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_MINIEMOTIONOVERRIDE_AGICCCBFNJM_OFFSET UNITYSDK_OFFSET(0xE952830)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_MINIEMOTIONOVERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0xE952B00)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int MiniEmotionClip_MiniEmotionOverride_TypeDefinitionIndex = 48659;

	class MiniEmotionClip_MiniEmotionOverride : public ::System::Object
	{
	public:
		::System::Boolean Override_OffsetPosition; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::MVector3 OffsetPosition; // 0x14
		::System::Boolean Override_OffsetRotation; // 0x20
		::System::Byte _padding1[0x3];
		::RPG::MVector3 OffsetRotation; // 0x24
		::System::Boolean Override_AttachTarget; // 0x30
		::System::Byte _padding2[0x7];
		::System::String* AttachPoint; // 0x38
		::System::Boolean Override_NodeVisible; // 0x40
		::System::Byte _padding3[0x7];
		::Il2CppArray<::System::Object*>* NodeVisible; // 0x48
		::System::Boolean Override_Speed; // 0x50
		::System::Byte _padding4[0x3];
		::System::Single Speed; // 0x54
		::System::Boolean Override_Scale; // 0x58
		::System::Byte _padding5[0x3];
		::RPG::MVector3 Scale; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_MINIEMOTIONOVERRIDE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::MiniEmoEffectOverride* AGICCCBFNJM()
		{
			return ((::RPG::GameCore::MiniEmoEffectOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_MINIEMOTIONOVERRIDE_AGICCCBFNJM_OFFSET))(this);
		}

	};
}
