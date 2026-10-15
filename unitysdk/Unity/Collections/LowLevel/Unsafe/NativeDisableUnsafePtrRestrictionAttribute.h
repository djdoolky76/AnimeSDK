#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEDISABLEUNSAFEPTRRESTRICTIONATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3CB730)

namespace Unity::Collections::LowLevel::Unsafe
{
	class NativeDisableUnsafePtrRestrictionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEDISABLEUNSAFEPTRRESTRICTIONATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
