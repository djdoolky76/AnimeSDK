#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define GHFLLJOJIEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x721EB0)
#define GHFLLJOJIEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x721E70)
#define GHFLLJOJIEE_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x721FB0)

inline static constexpr unsigned int GHFLLJOJIEE_TypeDefinitionIndex = 87046;

struct alignas(8) GHFLLJOJIEE
{
	::System::String* ODALDIOFMPH; // 0x10
	::System::String* NJCAGAKEODF; // 0x18
	::Foundation::ViewObject::ViewObjectHandle BMKPDDKHPIE; // 0x20
	::System::String* MMDDEAAPJNB; // 0x30

	/*
	::System::Boolean Equals(::GHFLLJOJIEE LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GHFLLJOJIEE))((::PBYTE)hIl2Cpp + GHFLLJOJIEE_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHFLLJOJIEE_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHFLLJOJIEE_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
