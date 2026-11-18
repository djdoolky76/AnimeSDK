#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixFrom.h"

#define SPINE_CURVETIMELINE1_BEFOREFIRSTKEY_OFFSET UNITYSDK_OFFSET(0x1FAB6520)
#define SPINE_CURVETIMELINE1_GETABSOLUTEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1FAB6620)
#define SPINE_CURVETIMELINE1_GETABSOLUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1FAB6540)
#define SPINE_CURVETIMELINE1_GETCURVEVALUE_OFFSET UNITYSDK_OFFSET(0x1FAB62A0)
#define SPINE_CURVETIMELINE1_GETRELATIVEVALUE_OFFSET UNITYSDK_OFFSET(0x1FAB6450)
#define SPINE_CURVETIMELINE1_GETSCALEVALUE_OFFSET UNITYSDK_OFFSET(0x1FAB66E0)
#define SPINE_CURVETIMELINE1_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1FAB6230)
#define SPINE_CURVETIMELINE1_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1FAB6240)
#define SPINE_CURVETIMELINE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB61B0)

namespace Spine
{
	inline static constexpr unsigned int CurveTimeline1_TypeDefinitionIndex = 32899;

	class CurveTimeline1 : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x2; // 0x0
		// static const ::System::Int32 VALUE = 0x1; // 0x0

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::UInt64 propertyId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1__CTOR_OFFSET))(this, frameCount, bezierCount, propertyId);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_SETFRAME_OFFSET))(this, frame, time, value);
		}

		::System::Single GetCurveValue(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GETCURVEVALUE_OFFSET))(this, time);
		}

		::System::Single GetRelativeValue(::System::Single time, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Single current, ::System::Single setup)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GETRELATIVEVALUE_OFFSET))(this, time, alpha, from, add, current, setup);
		}

		::System::Single GetAbsoluteValue(::System::Single time, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Single current, ::System::Single setup)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GETABSOLUTEVALUE_OFFSET))(this, time, alpha, from, add, current, setup);
		}

		::System::Single GetAbsoluteValue_1(::System::Single time, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Single current, ::System::Single setup, ::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GETABSOLUTEVALUE_1_OFFSET))(this, time, alpha, from, add, current, setup, value);
		}

		::System::Single GetScaleValue(::System::Single time, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Single current, ::System::Single setup)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GETSCALEVALUE_OFFSET))(this, time, alpha, from, add, mixOut, current, setup);
		}

		static ::System::Single BeforeFirstKey(::Spine::MixFrom from, ::System::Single alpha, ::System::Single current, ::System::Single setup)
		{
			return ((::System::Single(*)(::Spine::MixFrom, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_BEFOREFIRSTKEY_OFFSET))(from, alpha, current, setup);
		}
	};
}
