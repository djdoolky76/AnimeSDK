#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MMHBJFFNJKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x795960)
#define MMHBJFFNJKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x7958B0)
#define MMHBJFFNJKN_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x795A50)
#define MMHBJFFNJKN_MJGAKIJMLCN_OFFSET UNITYSDK_OFFSET(0x795970)

inline static constexpr unsigned int MMHBJFFNJKN_TypeDefinitionIndex = 92493;

struct alignas(4) MMHBJFFNJKN
{
	::System::Single HPEPIHODAGN; // 0x10
	::System::Int32 OAHEADEHGAN; // 0x14
	::System::Int32 IEDMKJLCNJL; // 0x18
	::System::Int32 NCFOLLGCCIP; // 0x1C

	/*
	::System::Boolean Equals(::MMHBJFFNJKN LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MMHBJFFNJKN))((::PBYTE)hIl2Cpp + MMHBJFFNJKN_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHBJFFNJKN_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	/*
	::System::Int32 MJGAKIJMLCN(::MMHBJFFNJKN LIBPKNHDIGP)
	{
		return ((::System::Int32(*)(::PVOID, ::MMHBJFFNJKN))((::PBYTE)hIl2Cpp + MMHBJFFNJKN_MJGAKIJMLCN_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHBJFFNJKN_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
