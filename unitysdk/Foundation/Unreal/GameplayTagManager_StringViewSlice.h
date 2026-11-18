#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_STRINGVIEWSLICE_GETFULLSTRING_OFFSET UNITYSDK_OFFSET(0x7FC320)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_STRINGVIEWSLICE_GETSLICESTRING_OFFSET UNITYSDK_OFFSET(0x7FC2D0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_STRINGVIEWSLICE__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagManager_StringViewSlice_TypeDefinitionIndex = 12589;

	struct alignas(4) GameplayTagManager_StringViewSlice
	{
		::System::Int32 _start; // 0x10
		::System::Int32 _length; // 0x14

		::System::Void _ctor(::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_STRINGVIEWSLICE__CTOR_OFFSET))(this, start, length);
		}

		::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> GetSliceString(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> stringView)
		{
			return ((::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_STRINGVIEWSLICE_GETSLICESTRING_OFFSET))(this, stringView);
		}

		::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> GetFullString(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> stringView)
		{
			return ((::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_STRINGVIEWSLICE_GETFULLSTRING_OFFSET))(this, stringView);
		}
	};
}
