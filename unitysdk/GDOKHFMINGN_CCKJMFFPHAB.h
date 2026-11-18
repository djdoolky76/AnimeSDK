#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define GDOKHFMINGN_CCKJMFFPHAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x813D70)
#define GDOKHFMINGN_CCKJMFFPHAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x67E960)
#define GDOKHFMINGN_CCKJMFFPHAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x813DD0)

inline static constexpr unsigned int GDOKHFMINGN_CCKJMFFPHAB_TypeDefinitionIndex = 13413;

struct alignas(4) GDOKHFMINGN_CCKJMFFPHAB
{
	::System::Int32 AODDLLLGEIH; // 0x10
	::System::Int32 AMCDAOJKFNF; // 0x14

	/*
	::System::Boolean Equals(::GDOKHFMINGN_CCKJMFFPHAB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GDOKHFMINGN_CCKJMFFPHAB))((::PBYTE)hIl2Cpp + GDOKHFMINGN_CCKJMFFPHAB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDOKHFMINGN_CCKJMFFPHAB_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOKHFMINGN_CCKJMFFPHAB_GETHASHCODE_OFFSET))(this);
	}
};
