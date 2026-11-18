#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_IKCONSTRAINTPOSE_GET_BENDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1FFA6F00)
#define SPINE_IKCONSTRAINTPOSE_GET_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1FFA6F20)
#define SPINE_IKCONSTRAINTPOSE_GET_MIX_OFFSET UNITYSDK_OFFSET(0x1FFA6EC0)
#define SPINE_IKCONSTRAINTPOSE_GET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1FFA6EE0)
#define SPINE_IKCONSTRAINTPOSE_GET_STRETCH_OFFSET UNITYSDK_OFFSET(0x1FFA6F40)
#define SPINE_IKCONSTRAINTPOSE_SET_BENDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1FFA6F10)
#define SPINE_IKCONSTRAINTPOSE_SET_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1FFA6F30)
#define SPINE_IKCONSTRAINTPOSE_SET_MIX_OFFSET UNITYSDK_OFFSET(0x1FFA6ED0)
#define SPINE_IKCONSTRAINTPOSE_SET_OFFSET UNITYSDK_OFFSET(0x1FFA6E80)
#define SPINE_IKCONSTRAINTPOSE_SET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1FFA6EF0)
#define SPINE_IKCONSTRAINTPOSE_SET_STRETCH_OFFSET UNITYSDK_OFFSET(0x1FFA6F50)
#define SPINE_IKCONSTRAINTPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA6F60)

namespace Spine
{
	inline static constexpr unsigned int IkConstraintPose_TypeDefinitionIndex = 33000;

	class IkConstraintPose : public ::System::Object
	{
	public:
		::System::Single mix; // 0x10
		::System::Single softness; // 0x14
		::System::Int32 bendDirection; // 0x18
		::System::Boolean compress; // 0x1C
		::System::Boolean stretch; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTPOSE__CTOR_OFFSET))(this);
		}

		::System::Void Set(::Spine::IkConstraintPose* pose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::IkConstraintPose*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTPOSE_SET_OFFSET))(this, pose);
		}

		::System::Single get_Mix()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTPOSE_GET_MIX_OFFSET))(this);
		}

		::System::Void set_Mix(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTPOSE_SET_MIX_OFFSET))(this, value);
		}

		::System::Single get_Softness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTPOSE_GET_SOFTNESS_OFFSET))(this);
		}

		::System::Void set_Softness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTPOSE_SET_SOFTNESS_OFFSET))(this, value);
		}

		::System::Int32 get_BendDirection()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTPOSE_GET_BENDDIRECTION_OFFSET))(this);
		}

		::System::Void set_BendDirection(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTPOSE_SET_BENDDIRECTION_OFFSET))(this, value);
		}

		::System::Boolean get_Compress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTPOSE_GET_COMPRESS_OFFSET))(this);
		}

		::System::Void set_Compress(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTPOSE_SET_COMPRESS_OFFSET))(this, value);
		}

		::System::Boolean get_Stretch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTPOSE_GET_STRETCH_OFFSET))(this);
		}

		::System::Void set_Stretch(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTPOSE_SET_STRETCH_OFFSET))(this, value);
		}
	};
}
