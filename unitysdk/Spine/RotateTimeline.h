#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/BoneTimeline1.h"
#include "unitysdk/Spine/MixFrom.h"

namespace Spine { class BonePose; }

#define SPINE_ROTATETIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF5E580)
#define SPINE_ROTATETIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF5E4F0)

namespace Spine
{
	inline static constexpr unsigned int RotateTimeline_TypeDefinitionIndex = 32903;

	class RotateTimeline : public ::Spine::BoneTimeline1
	{
	public:
		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 boneIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ROTATETIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, boneIndex);
		}

		::System::Void Apply(::Spine::BonePose* pose, ::Spine::BonePose* setup, ::System::Single time, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BonePose*, ::Spine::BonePose*, ::System::Single, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ROTATETIMELINE_APPLY_OFFSET))(this, pose, setup, time, alpha, from, add, mixOut);
		}
	};
}
