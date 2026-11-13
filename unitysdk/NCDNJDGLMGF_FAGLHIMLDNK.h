#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define NCDNJDGLMGF_FAGLHIMLDNK_CTOR_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define NCDNJDGLMGF_FAGLHIMLDNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E6FC70)
#define NCDNJDGLMGF_FAGLHIMLDNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3F30E70)
#define NCDNJDGLMGF_FAGLHIMLDNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F30DD0)

inline static constexpr unsigned int NCDNJDGLMGF_FAGLHIMLDNK_TypeDefinitionIndex = 14520;

	struct alignas(8) NCDNJDGLMGF_FAGLHIMLDNK
	{
		::System::String* ACEGDAHLDCB; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCDNJDGLMGF_FAGLHIMLDNK_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDNJDGLMGF_FAGLHIMLDNK_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::NCDNJDGLMGF_FAGLHIMLDNK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCDNJDGLMGF_FAGLHIMLDNK))((::PBYTE)hIl2Cpp + NCDNJDGLMGF_FAGLHIMLDNK_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDNJDGLMGF_FAGLHIMLDNK_GETHASHCODE_OFFSET))(this);
		}

	};
