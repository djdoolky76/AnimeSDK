#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Interpolation_BounceOutInterpolation.h"

#define SPINE_INTERPOLATION_BOUNCEININTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FA192E0)
#define SPINE_INTERPOLATION_BOUNCEININTERPOLATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA192D0)
#define SPINE_INTERPOLATION_BOUNCEININTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA192C0)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_BounceInInterpolation_TypeDefinitionIndex = 33030;

	class Interpolation_BounceInInterpolation : public ::Spine::Interpolation_BounceOutInterpolation
	{
	public:
		::System::Void _ctor(::Il2CppArray<::System::Single>* widths, ::Il2CppArray<::System::Single>* heights)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_BOUNCEININTERPOLATION__CTOR_OFFSET))(this, widths, heights);
		}

		::System::Void _ctor_1(::System::Int32 bounces)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_BOUNCEININTERPOLATION__CTOR_1_OFFSET))(this, bounces);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_BOUNCEININTERPOLATION_APPLY_OFFSET))(this, a);
		}
	};
}
