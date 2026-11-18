#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/BoneTimeline2.h"
#include "unitysdk/Spine/MixFrom.h"

namespace Spine { class BonePose; }

#define SPINE_TRANSLATETIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x20019950)
#define SPINE_TRANSLATETIMELINE_GETCURVEVALUE_OFFSET UNITYSDK_OFFSET(0x20019B50)
#define SPINE_TRANSLATETIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x20019920)

namespace Spine
{
	inline static constexpr unsigned int TranslateTimeline_TypeDefinitionIndex = 32904;

	class TranslateTimeline : public ::Spine::BoneTimeline2
	{
	public:
		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 boneIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_TRANSLATETIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, boneIndex);
		}

		::System::Void Apply(::Spine::BonePose* pose, ::Spine::BonePose* setup, ::System::Single time, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BonePose*, ::Spine::BonePose*, ::System::Single, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRANSLATETIMELINE_APPLY_OFFSET))(this, pose, setup, time, alpha, from, add, mixOut);
		}

		::System::Void GetCurveValue(::System::Single& x, ::System::Single& y, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSLATETIMELINE_GETCURVEVALUE_OFFSET))(this, x, y, time);
		}
	};
}
