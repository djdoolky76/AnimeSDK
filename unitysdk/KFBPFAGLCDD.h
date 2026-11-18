#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JDMPFJDCDKG.h"

namespace System { class String; }

#define KFBPFAGLCDD_COCEKHOBBFK_OFFSET UNITYSDK_OFFSET(0x177032A0)
#define KFBPFAGLCDD_HICLAEIBFLJ_OFFSET UNITYSDK_OFFSET(0x17703020)
#define KFBPFAGLCDD__CTOR_OFFSET UNITYSDK_OFFSET(0x17703290)

inline static constexpr unsigned int KFBPFAGLCDD_TypeDefinitionIndex = 63967;

class KFBPFAGLCDD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPFAGLCDD__CTOR_OFFSET))(this);
	}

	::System::Boolean HICLAEIBFLJ(::Il2CppArray<::System::String*>* KOIBHLHLMFC, ::JDMPFJDCDKG& AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::JDMPFJDCDKG&))((::PBYTE)hIl2Cpp + KFBPFAGLCDD_HICLAEIBFLJ_OFFSET))(this, KOIBHLHLMFC, AAOCANGHBDG);
	}

	::System::Boolean COCEKHOBBFK(::Il2CppArray<::System::String*>* KOIBHLHLMFC, ::JDMPFJDCDKG& AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::JDMPFJDCDKG&))((::PBYTE)hIl2Cpp + KFBPFAGLCDD_COCEKHOBBFK_OFFSET))(this, KOIBHLHLMFC, AAOCANGHBDG);
	}
};
