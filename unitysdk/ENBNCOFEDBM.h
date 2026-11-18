#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define ENBNCOFEDBM_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x158C1EF0)
#define ENBNCOFEDBM_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x158C1F80)
#define ENBNCOFEDBM__CCTOR_OFFSET UNITYSDK_OFFSET(0x158C1EA0)
#define ENBNCOFEDBM__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

inline static constexpr unsigned int ENBNCOFEDBM_TypeDefinitionIndex = 70786;

struct alignas(8) ENBNCOFEDBM
{
	static ::ENBNCOFEDBM* StaticGet_DDGNFJDLOKA()
	{
		return (::ENBNCOFEDBM*)Il2CppClass::FromTypeDefinitionIndex(ENBNCOFEDBM_TypeDefinitionIndex)->GetStaticField(0x31860);
	}
	::MoleMole::Config::BaseProperty EHAKJBAKGDL; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* LFNMPOCHPLP; // 0x18

	::System::Void _ctor(::MoleMole::Config::BaseProperty KNOEKNJNBGG, ::System::String* GPJDCJGFOPJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + ENBNCOFEDBM__CTOR_OFFSET))(this, KNOEKNJNBGG, GPJDCJGFOPJ);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENBNCOFEDBM__CCTOR_OFFSET))();
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::ENBNCOFEDBM EJCBEJMGFAJ, ::ENBNCOFEDBM EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::ENBNCOFEDBM, ::ENBNCOFEDBM))((::PBYTE)hIl2Cpp + ENBNCOFEDBM_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::ENBNCOFEDBM EJCBEJMGFAJ, ::ENBNCOFEDBM EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::ENBNCOFEDBM, ::ENBNCOFEDBM))((::PBYTE)hIl2Cpp + ENBNCOFEDBM_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/
};
