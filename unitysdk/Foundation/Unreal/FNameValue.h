#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FNameHash.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_FNAMEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x9AD050)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FNameValue_TypeDefinitionIndex = 8931;

	struct alignas(8) FNameValue
	{
		::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> StringView; // 0x10
		::System::Byte _padding0[0x10];
		::Foundation::Unreal::FNameHash StringHash; // 0x28

		::System::Void _ctor(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> stringView)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEVALUE__CTOR_OFFSET))(this, stringView);
		}
	};
}
