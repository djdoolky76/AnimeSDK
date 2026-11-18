#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIPCMLEONLI.h"

namespace System { class Action; }

#define LIIMAKFDKKA_CBJAEOKBGBE_OFFSET UNITYSDK_OFFSET(0x15DFEF30)
#define LIIMAKFDKKA_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x15DFEEB0)
#define LIIMAKFDKKA_FENPLGEJDLF_OFFSET UNITYSDK_OFFSET(0x15DFEDF0)
#define LIIMAKFDKKA__CTOR_OFFSET UNITYSDK_OFFSET(0x15DFED00)

inline static constexpr unsigned int LIIMAKFDKKA_TypeDefinitionIndex = 90777;

class LIIMAKFDKKA : public ::GIPCMLEONLI
{
public:
	::System::Action* BCBFGOCODLJ; // 0x40
	::System::Single HAJACAFCHIM; // 0x48

	::System::Void _ctor(::System::Single JOFGIANGHMK, ::System::Action* JOODFMNDDMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + LIIMAKFDKKA__CTOR_OFFSET))(this, JOFGIANGHMK, JOODFMNDDMK);
	}

	::System::Void FENPLGEJDLF(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LIIMAKFDKKA_FENPLGEJDLF_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIMAKFDKKA_CHCGMACMJLD_OFFSET))(this);
	}

	::System::Void CBJAEOKBGBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIMAKFDKKA_CBJAEOKBGBE_OFFSET))(this);
	}
};
