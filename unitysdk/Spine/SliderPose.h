#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_SLIDERPOSE_GET_MIX_OFFSET UNITYSDK_OFFSET(0x200662D0)
#define SPINE_SLIDERPOSE_GET_TIME_OFFSET UNITYSDK_OFFSET(0x200662B0)
#define SPINE_SLIDERPOSE_SET_MIX_OFFSET UNITYSDK_OFFSET(0x200662E0)
#define SPINE_SLIDERPOSE_SET_OFFSET UNITYSDK_OFFSET(0x20066290)
#define SPINE_SLIDERPOSE_SET_TIME_OFFSET UNITYSDK_OFFSET(0x200662C0)
#define SPINE_SLIDERPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x200662F0)

namespace Spine
{
	inline static constexpr unsigned int SliderPose_TypeDefinitionIndex = 33068;

	class SliderPose : public ::System::Object
	{
	public:
		::System::Single time; // 0x10
		::System::Single mix; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLIDERPOSE__CTOR_OFFSET))(this);
		}

		::System::Void Set(::Spine::SliderPose* pose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SliderPose*))((::PBYTE)hIl2Cpp + SPINE_SLIDERPOSE_SET_OFFSET))(this, pose);
		}

		::System::Single get_Time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLIDERPOSE_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLIDERPOSE_SET_TIME_OFFSET))(this, value);
		}

		::System::Single get_Mix()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLIDERPOSE_GET_MIX_OFFSET))(this);
		}

		::System::Void set_Mix(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLIDERPOSE_SET_MIX_OFFSET))(this, value);
		}
	};
}
