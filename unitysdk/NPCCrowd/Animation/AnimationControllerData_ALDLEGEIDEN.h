#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace NPCCrowd::Animation { class AnimationControllerData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_ALDLEGEIDEN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x106A61D0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_ALDLEGEIDEN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x106A61E0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_ALDLEGEIDEN_WRITE_OFFSET UNITYSDK_OFFSET(0x106A6370)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_ALDLEGEIDEN__CTOR_OFFSET UNITYSDK_OFFSET(0x106A6490)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationControllerData_ALDLEGEIDEN_TypeDefinitionIndex = 77334;

	class AnimationControllerData_ALDLEGEIDEN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_ALDLEGEIDEN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_ALDLEGEIDEN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::Animation::AnimationControllerData*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_ALDLEGEIDEN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::NPCCrowd::Animation::AnimationControllerData*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERDATA_ALDLEGEIDEN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
