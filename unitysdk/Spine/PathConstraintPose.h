#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_PATHCONSTRAINTPOSE_GET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x1FA19C80)
#define SPINE_PATHCONSTRAINTPOSE_GET_MIXX_OFFSET UNITYSDK_OFFSET(0x1FA19CA0)
#define SPINE_PATHCONSTRAINTPOSE_GET_MIXY_OFFSET UNITYSDK_OFFSET(0x1FA19CC0)
#define SPINE_PATHCONSTRAINTPOSE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1FA19C40)
#define SPINE_PATHCONSTRAINTPOSE_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x1FA19C60)
#define SPINE_PATHCONSTRAINTPOSE_SET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x1FA19C90)
#define SPINE_PATHCONSTRAINTPOSE_SET_MIXX_OFFSET UNITYSDK_OFFSET(0x1FA19CB0)
#define SPINE_PATHCONSTRAINTPOSE_SET_MIXY_OFFSET UNITYSDK_OFFSET(0x1FA19CD0)
#define SPINE_PATHCONSTRAINTPOSE_SET_OFFSET UNITYSDK_OFFSET(0x1FA19C10)
#define SPINE_PATHCONSTRAINTPOSE_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1FA19C50)
#define SPINE_PATHCONSTRAINTPOSE_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x1FA19C70)
#define SPINE_PATHCONSTRAINTPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA19CE0)

namespace Spine
{
	inline static constexpr unsigned int PathConstraintPose_TypeDefinitionIndex = 33038;

	class PathConstraintPose : public ::System::Object
	{
	public:
		::System::Single position; // 0x10
		::System::Single mixRotate; // 0x14
		::System::Single mixX; // 0x18
		::System::Single mixY; // 0x1C
		::System::Single spacing; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSE__CTOR_OFFSET))(this);
		}

		::System::Void Set(::Spine::PathConstraintPose* pose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PathConstraintPose*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSE_SET_OFFSET))(this, pose);
		}

		::System::Single get_Position()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSE_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSE_SET_POSITION_OFFSET))(this, value);
		}

		::System::Single get_Spacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSE_GET_SPACING_OFFSET))(this);
		}

		::System::Void set_Spacing(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSE_SET_SPACING_OFFSET))(this, value);
		}

		::System::Single get_MixRotate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSE_GET_MIXROTATE_OFFSET))(this);
		}

		::System::Void set_MixRotate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSE_SET_MIXROTATE_OFFSET))(this, value);
		}

		::System::Single get_MixX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSE_GET_MIXX_OFFSET))(this);
		}

		::System::Void set_MixX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSE_SET_MIXX_OFFSET))(this, value);
		}

		::System::Single get_MixY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSE_GET_MIXY_OFFSET))(this);
		}

		::System::Void set_MixY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSE_SET_MIXY_OFFSET))(this, value);
		}
	};
}
