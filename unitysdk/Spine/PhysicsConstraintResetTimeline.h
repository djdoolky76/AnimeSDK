#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixFrom.h"
#include "unitysdk/Spine/Timeline.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_PHYSICSCONSTRAINTRESETTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF92070)
#define SPINE_PHYSICSCONSTRAINTRESETTIMELINE_GET_CONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x1FF92000)
#define SPINE_PHYSICSCONSTRAINTRESETTIMELINE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1FF92010)
#define SPINE_PHYSICSCONSTRAINTRESETTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1FF92030)
#define SPINE_PHYSICSCONSTRAINTRESETTIMELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF923D0)
#define SPINE_PHYSICSCONSTRAINTRESETTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF91EF0)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraintResetTimeline_TypeDefinitionIndex = 32941;

	class PhysicsConstraintResetTimeline : public ::Spine::Timeline
	{
	public:
		static ::Il2CppArray<::System::UInt64>** StaticGet_propertyIds()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(PhysicsConstraintResetTimeline_TypeDefinitionIndex)->GetStaticField(0x29C40);
		}
		::System::Int32 constraintIndex; // 0x28

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 constraintIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTRESETTIMELINE__CTOR_OFFSET))(this, frameCount, constraintIndex);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTRESETTIMELINE__CCTOR_OFFSET))();
		}

		::System::Int32 get_ConstraintIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTRESETTIMELINE_GET_CONSTRAINTINDEX_OFFSET))(this);
		}

		::System::Int32 get_FrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTRESETTIMELINE_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTRESETTIMELINE_SETFRAME_OFFSET))(this, frame, time);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* firedEvents, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTRESETTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, firedEvents, alpha, from, add, mixOut, appliedPose);
		}
	};
}
