#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }
template <typename T> class FA9B773E8C9B97E9;

#define BC08A116C3DE9B5A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BC08A116C3DE9B5A_TypeDefinitionIndex = 320;

class BC08A116C3DE9B5A : public ::E379DE61A548837D
{
public:
	::FA9B773E8C9B97E9<::System::String*>* F4653815DA49366A; // 0x38
	::System::Boolean BCA611733BAC07E9; // 0x40
	::System::Boolean BEAD1912A7DA0ECE; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC08A116C3DE9B5A__CTOR_OFFSET))(this);
	}
};
