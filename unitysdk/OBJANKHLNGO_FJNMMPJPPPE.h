#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define OBJANKHLNGO_FJNMMPJPPPE_CTOR_OFFSET UNITYSDK_OFFSET(0x3C53400)
#define OBJANKHLNGO_FJNMMPJPPPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C53480)
#define OBJANKHLNGO_FJNMMPJPPPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C53410)
#define OBJANKHLNGO_FJNMMPJPPPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C53490)

inline static constexpr unsigned int OBJANKHLNGO_FJNMMPJPPPE_TypeDefinitionIndex = 44269;

	struct alignas(8) OBJANKHLNGO_FJNMMPJPPPE
	{
		::System::Object* MCLLALGABAB; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBJANKHLNGO_FJNMMPJPPPE_CTOR_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals(::OBJANKHLNGO_FJNMMPJPPPE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBJANKHLNGO_FJNMMPJPPPE))((::PBYTE)hIl2Cpp + OBJANKHLNGO_FJNMMPJPPPE_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBJANKHLNGO_FJNMMPJPPPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJANKHLNGO_FJNMMPJPPPE_GETHASHCODE_OFFSET))(this);
		}

	};
