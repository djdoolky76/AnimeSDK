#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define BHBGLADGHIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C526C0)
#define BHBGLADGHIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C52660)
#define BHBGLADGHIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C526D0)

inline static constexpr unsigned int BHBGLADGHIG_TypeDefinitionIndex = 44278;

	struct alignas(4) BHBGLADGHIG
	{
		/*
		::System::Boolean Equals(::BHBGLADGHIG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHBGLADGHIG))((::PBYTE)hIl2Cpp + BHBGLADGHIG_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHBGLADGHIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBGLADGHIG_GETHASHCODE_OFFSET))(this);
		}

	};
