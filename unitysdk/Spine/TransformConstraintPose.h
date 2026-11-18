#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_TRANSFORMCONSTRAINTPOSE_GET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x1F56BFC0)
#define SPINE_TRANSFORMCONSTRAINTPOSE_GET_MIXSCALEX_OFFSET UNITYSDK_OFFSET(0x1F56C020)
#define SPINE_TRANSFORMCONSTRAINTPOSE_GET_MIXSCALEY_OFFSET UNITYSDK_OFFSET(0x1F56C040)
#define SPINE_TRANSFORMCONSTRAINTPOSE_GET_MIXSHEARY_OFFSET UNITYSDK_OFFSET(0x1F56C060)
#define SPINE_TRANSFORMCONSTRAINTPOSE_GET_MIXX_OFFSET UNITYSDK_OFFSET(0x1F56BFE0)
#define SPINE_TRANSFORMCONSTRAINTPOSE_GET_MIXY_OFFSET UNITYSDK_OFFSET(0x1F56C000)
#define SPINE_TRANSFORMCONSTRAINTPOSE_SET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x1F56BFD0)
#define SPINE_TRANSFORMCONSTRAINTPOSE_SET_MIXSCALEX_OFFSET UNITYSDK_OFFSET(0x1F56C030)
#define SPINE_TRANSFORMCONSTRAINTPOSE_SET_MIXSCALEY_OFFSET UNITYSDK_OFFSET(0x1F56C050)
#define SPINE_TRANSFORMCONSTRAINTPOSE_SET_MIXSHEARY_OFFSET UNITYSDK_OFFSET(0x1F56C070)
#define SPINE_TRANSFORMCONSTRAINTPOSE_SET_MIXX_OFFSET UNITYSDK_OFFSET(0x1F56BFF0)
#define SPINE_TRANSFORMCONSTRAINTPOSE_SET_MIXY_OFFSET UNITYSDK_OFFSET(0x1F56C010)
#define SPINE_TRANSFORMCONSTRAINTPOSE_SET_OFFSET UNITYSDK_OFFSET(0x1F56BF90)
#define SPINE_TRANSFORMCONSTRAINTPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F56C080)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraintPose_TypeDefinitionIndex = 33089;

	class TransformConstraintPose : public ::System::Object
	{
	public:
		::System::Single mixScaleY; // 0x10
		::System::Single mixScaleX; // 0x14
		::System::Single mixRotate; // 0x18
		::System::Single mixX; // 0x1C
		::System::Single mixY; // 0x20
		::System::Single mixShearY; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTPOSE__CTOR_OFFSET))(this);
		}

		::System::Void Set(::Spine::TransformConstraintPose* pose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TransformConstraintPose*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTPOSE_SET_OFFSET))(this, pose);
		}

		::System::Single get_MixRotate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTPOSE_GET_MIXROTATE_OFFSET))(this);
		}

		::System::Void set_MixRotate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTPOSE_SET_MIXROTATE_OFFSET))(this, value);
		}

		::System::Single get_MixX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTPOSE_GET_MIXX_OFFSET))(this);
		}

		::System::Void set_MixX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTPOSE_SET_MIXX_OFFSET))(this, value);
		}

		::System::Single get_MixY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTPOSE_GET_MIXY_OFFSET))(this);
		}

		::System::Void set_MixY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTPOSE_SET_MIXY_OFFSET))(this, value);
		}

		::System::Single get_MixScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTPOSE_GET_MIXSCALEX_OFFSET))(this);
		}

		::System::Void set_MixScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTPOSE_SET_MIXSCALEX_OFFSET))(this, value);
		}

		::System::Single get_MixScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTPOSE_GET_MIXSCALEY_OFFSET))(this);
		}

		::System::Void set_MixScaleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTPOSE_SET_MIXSCALEY_OFFSET))(this, value);
		}

		::System::Single get_MixShearY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTPOSE_GET_MIXSHEARY_OFFSET))(this);
		}

		::System::Void set_MixShearY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTPOSE_SET_MIXSHEARY_OFFSET))(this, value);
		}
	};
}
