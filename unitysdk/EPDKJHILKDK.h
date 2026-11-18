#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAJMNDHMNNO.h"

namespace System { class String; }

#define EPDKJHILKDK__CTOR_OFFSET UNITYSDK_OFFSET(0x172514A0)

inline static constexpr unsigned int EPDKJHILKDK_TypeDefinitionIndex = 80838;

class EPDKJHILKDK : public ::DAJMNDHMNNO
{
public:
	::System::String* MCOHLHMKLIP; // 0x10

	::System::Void _ctor(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPDKJHILKDK__CTOR_OFFSET))(this, MCOHLHMKLIP);
	}
};
