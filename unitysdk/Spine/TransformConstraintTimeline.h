#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixFrom.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_TRANSFORMCONSTRAINTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1F77A8F0)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_GETCURVEVALUE_OFFSET UNITYSDK_OFFSET(0x1F77ACB0)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_CONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x1F77A7A0)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1F77A790)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1F77A7B0)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F77A6F0)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraintTimeline_TypeDefinitionIndex = 32928;

	class TransformConstraintTimeline : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x7; // 0x0
		// static const ::System::Int32 ROTATE = 0x1; // 0x0
		// static const ::System::Int32 X = 0x2; // 0x0
		// static const ::System::Int32 Y = 0x3; // 0x0
		// static const ::System::Int32 SCALEX = 0x4; // 0x0
		// static const ::System::Int32 SCALEY = 0x5; // 0x0
		// static const ::System::Int32 SHEARY = 0x6; // 0x0
		::System::Int32 constraintIndex; // 0x30

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 constraintIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, constraintIndex);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_ConstraintIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_CONSTRAINTINDEX_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::Single mixRotate, ::System::Single mixX, ::System::Single mixY, ::System::Single mixScaleX, ::System::Single mixScaleY, ::System::Single mixShearY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_SETFRAME_OFFSET))(this, frame, time, mixRotate, mixX, mixY, mixScaleX, mixScaleY, mixShearY);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, from, add, mixOut, appliedPose);
		}

		::System::Void GetCurveValue(::System::Single& rotate, ::System::Single& x, ::System::Single& y, ::System::Single& scaleX, ::System::Single& scaleY, ::System::Single& shearY, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_GETCURVEVALUE_OFFSET))(this, rotate, x, y, scaleX, scaleY, shearY, time);
		}
	};
}
