#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JDMPFJDCDKG.h"

namespace System { class String; }

#define GHCCNDDOPLC_COCEKHOBBFK_OFFSET UNITYSDK_OFFSET(0xBB8F8B0)
#define GHCCNDDOPLC_HICLAEIBFLJ_OFFSET UNITYSDK_OFFSET(0xBB8F4F0)
#define GHCCNDDOPLC__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8F8A0)

inline static constexpr unsigned int GHCCNDDOPLC_TypeDefinitionIndex = 56923;

class GHCCNDDOPLC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCCNDDOPLC__CTOR_OFFSET))(this);
	}

	::System::Boolean HICLAEIBFLJ(::Il2CppArray<::System::String*>* KOIBHLHLMFC, ::JDMPFJDCDKG& AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::JDMPFJDCDKG&))((::PBYTE)hIl2Cpp + GHCCNDDOPLC_HICLAEIBFLJ_OFFSET))(this, KOIBHLHLMFC, AAOCANGHBDG);
	}

	::System::Boolean COCEKHOBBFK(::Il2CppArray<::System::String*>* KOIBHLHLMFC, ::JDMPFJDCDKG& AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::JDMPFJDCDKG&))((::PBYTE)hIl2Cpp + GHCCNDDOPLC_COCEKHOBBFK_OFFSET))(this, KOIBHLHLMFC, AAOCANGHBDG);
	}
};
