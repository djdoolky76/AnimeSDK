#pragma once
#include "unitysdk/unitysdk.h"

#define OHIOBPKCBFM_CTOR_OFFSET UNITYSDK_OFFSET(0x21D60)

inline static constexpr unsigned int OHIOBPKCBFM_TypeDefinitionIndex = 78657;

	struct alignas(4) OHIOBPKCBFM
	{
		::System::Int32 IJPJJPHNBOJ; // 0x10
		::System::Int32 PPPOLNMDJID; // 0x14
		::System::Int32 CLKDNBNPHLI; // 0x18
		::System::Int32 DDCJDBICNCF; // 0x1C
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OHIOBPKCBFM_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
