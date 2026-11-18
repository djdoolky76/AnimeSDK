#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/BoneTimeline2.h"
#include "unitysdk/Spine/MixFrom.h"

namespace Spine { class BonePose; }

#define SPINE_SCALETIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FFA7A40)
#define SPINE_SCALETIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA7A10)

namespace Spine
{
	inline static constexpr unsigned int ScaleTimeline_TypeDefinitionIndex = 32907;

	class ScaleTimeline : public ::Spine::BoneTimeline2
	{
	public:
		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 boneIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SCALETIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, boneIndex);
		}

		::System::Void Apply(::Spine::BonePose* pose, ::Spine::BonePose* setup, ::System::Single time, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BonePose*, ::Spine::BonePose*, ::System::Single, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SCALETIMELINE_APPLY_OFFSET))(this, pose, setup, time, alpha, from, add, mixOut);
		}
	};
}
