#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation.h"

#define SPINE_INTERPOLATION_BOUNCEOUTINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF5FFC0)
#define SPINE_INTERPOLATION_BOUNCEOUTINTERPOLATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF5FAE0)
#define SPINE_INTERPOLATION_BOUNCEOUTINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF5FA30)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_BounceOutInterpolation_TypeDefinitionIndex = 33028;

	class Interpolation_BounceOutInterpolation : public ::Spine::Interpolation
	{
	public:
		::Il2CppArray<::System::Single>* widths; // 0x10
		::Il2CppArray<::System::Single>* heights; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Single>* widths, ::Il2CppArray<::System::Single>* heights)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_BOUNCEOUTINTERPOLATION__CTOR_OFFSET))(this, widths, heights);
		}

		::System::Void _ctor_1(::System::Int32 bounces)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_BOUNCEOUTINTERPOLATION__CTOR_1_OFFSET))(this, bounces);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_BOUNCEOUTINTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
