#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace NPCCrowd::Animation { class AnimationTransitionConfigAssetSO; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_PHKIHHPPOBP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xF149100)
#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_PHKIHHPPOBP_READMEMBER_OFFSET UNITYSDK_OFFSET(0xF149110)
#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_PHKIHHPPOBP_WRITE_OFFSET UNITYSDK_OFFSET(0xF1492C0)
#define NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_PHKIHHPPOBP__CTOR_OFFSET UNITYSDK_OFFSET(0xF149410)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationTransitionConfigAssetSO_PHKIHHPPOBP_TypeDefinitionIndex = 55465;

	class AnimationTransitionConfigAssetSO_PHKIHHPPOBP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_PHKIHHPPOBP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_PHKIHHPPOBP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::Animation::AnimationTransitionConfigAssetSO*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationTransitionConfigAssetSO*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_PHKIHHPPOBP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::NPCCrowd::Animation::AnimationTransitionConfigAssetSO*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationTransitionConfigAssetSO*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONTRANSITIONCONFIGASSETSO_PHKIHHPPOBP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
