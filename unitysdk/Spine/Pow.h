#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/IInterpolation.h"

#define SPINE_POW_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF5C240)
#define SPINE_POW_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF54420)
#define SPINE_POW_GET_POWER_OFFSET UNITYSDK_OFFSET(0x1FF5C220)
#define SPINE_POW_SET_POWER_OFFSET UNITYSDK_OFFSET(0x1FF5C230)

namespace Spine
{
	inline static constexpr unsigned int Pow_TypeDefinitionIndex = 40607;

	class Pow : public ::Spine::IInterpolation
	{
	public:
		::System::Single _Power_k__BackingField; // 0x10
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POW_CTOR_OFFSET))(this, a1);
		}

		::System::Single get_Power()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POW_GET_POWER_OFFSET))(this);
		}

		::System::Void set_Power(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POW_SET_POWER_OFFSET))(this, a1);
		}

		::System::Single Apply(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POW_APPLY_OFFSET))(this, a1);
		}

	};
}
