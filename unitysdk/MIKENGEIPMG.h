#pragma once
#include "unitysdk/unitysdk.h"

#define MIKENGEIPMG_CHPAIEEKLGO_OFFSET UNITYSDK_OFFSET(0x1D40)
#define MIKENGEIPMG_CTOR_OFFSET UNITYSDK_OFFSET(0x3C360E0)
#define MIKENGEIPMG_DJDHJNCGEGK_OFFSET UNITYSDK_OFFSET(0x94D0)
#define MIKENGEIPMG_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x3C360F0)
#define MIKENGEIPMG_LKEFCMNJDJI_OFFSET UNITYSDK_OFFSET(0xE620)

inline static constexpr unsigned int MIKENGEIPMG_TypeDefinitionIndex = 43854;

	struct alignas(4) MIKENGEIPMG
	{
		::System::Int32 KEEBPHBMONO; // 0x10
		::System::Byte _padding0[0x4];
		::System::Int64 KAMGHIIKPEE; // 0x18
		::System::Int64 OCCIMHCEEOG; // 0x20
		::System::Void _ctor(::System::Int64 a1, ::System::Int64 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + MIKENGEIPMG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKENGEIPMG_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Int64 DJDHJNCGEGK()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKENGEIPMG_DJDHJNCGEGK_OFFSET))(this);
		}

		::System::Int64 CHPAIEEKLGO()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKENGEIPMG_CHPAIEEKLGO_OFFSET))(this);
		}

		::System::Int32 LKEFCMNJDJI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKENGEIPMG_LKEFCMNJDJI_OFFSET))(this);
		}

	};
