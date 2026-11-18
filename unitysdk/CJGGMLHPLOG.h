#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define CJGGMLHPLOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x910610)
#define CJGGMLHPLOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x9105E0)
#define CJGGMLHPLOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x910700)
#define CJGGMLHPLOG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x910710)
#define CJGGMLHPLOG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x910780)
#define CJGGMLHPLOG__CTOR_OFFSET UNITYSDK_OFFSET(0x36F120)

inline static constexpr unsigned int CJGGMLHPLOG_TypeDefinitionIndex = 93617;

struct alignas(4) CJGGMLHPLOG
{
	::JGLIFHIAIEH MNPCIGNOEML; // 0x10
	::System::Boolean JLAEMHBBCOF; // 0x18

	::System::Void _ctor(::JGLIFHIAIEH KMPMJGGHHOI, ::System::Boolean JJANHNNLOLO)
	{
		return ((::System::Void(*)(::PVOID, ::JGLIFHIAIEH, ::System::Boolean))((::PBYTE)hIl2Cpp + CJGGMLHPLOG__CTOR_OFFSET))(this, KMPMJGGHHOI, JJANHNNLOLO);
	}

	/*
	::System::Boolean Equals(::CJGGMLHPLOG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::CJGGMLHPLOG))((::PBYTE)hIl2Cpp + CJGGMLHPLOG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJGGMLHPLOG_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGGMLHPLOG_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGGMLHPLOG_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJGGMLHPLOG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
