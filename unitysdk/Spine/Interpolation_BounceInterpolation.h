#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation_BounceOutInterpolation.h"

#define SPINE_INTERPOLATION_BOUNCEINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF07FB0)
#define SPINE_INTERPOLATION_BOUNCEINTERPOLATION_OUT_OFFSET UNITYSDK_OFFSET(0x1FF07F50)
#define SPINE_INTERPOLATION_BOUNCEINTERPOLATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF07F40)
#define SPINE_INTERPOLATION_BOUNCEINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF07F30)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_BounceInterpolation_TypeDefinitionIndex = 33029;

	class Interpolation_BounceInterpolation : public ::Spine::Interpolation_BounceOutInterpolation
	{
	public:
		::System::Void _ctor(::Il2CppArray<::System::Single>* widths, ::Il2CppArray<::System::Single>* heights)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_BOUNCEINTERPOLATION__CTOR_OFFSET))(this, widths, heights);
		}

		::System::Void _ctor_1(::System::Int32 bounces)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_BOUNCEINTERPOLATION__CTOR_1_OFFSET))(this, bounces);
		}

		::System::Single Out(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_BOUNCEINTERPOLATION_OUT_OFFSET))(this, a);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_BOUNCEINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
