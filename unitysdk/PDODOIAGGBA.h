#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class NIDMHPHHDLI;
namespace System { class String; }

#define PDODOIAGGBA_INVOKE_OFFSET UNITYSDK_OFFSET(0x7CB910)
#define PDODOIAGGBA_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x7CB920)

inline static constexpr unsigned int PDODOIAGGBA_TypeDefinitionIndex = 66099;

struct alignas(8) PDODOIAGGBA
{
	::System::String* MGEDBKBHJPM; // 0x10
	::Foundation::ViewObject::ViewObjectHandle AFGOOJJHDAF; // 0x18
	::System::Int32 FJCHJOGKKGL; // 0x28

	::System::Void Invoke(::NIDMHPHHDLI* MFDKGMLKHGM, ::System::Boolean GELCBJDLBII)
	{
		return ((::System::Void(*)(::PVOID, ::NIDMHPHHDLI*, ::System::Boolean))((::PBYTE)hIl2Cpp + PDODOIAGGBA_INVOKE_OFFSET))(this, MFDKGMLKHGM, GELCBJDLBII);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDODOIAGGBA_JDAPDDEOCEA_OFFSET))(this);
	}
};
