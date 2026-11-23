#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }
template <typename T> class FA9B773E8C9B97E9;

#define B304DCF86DE6355B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B304DCF86DE6355B_TypeDefinitionIndex = 454;

class B304DCF86DE6355B : public ::E379DE61A548837D
{
public:
	::FA9B773E8C9B97E9<::System::String*>* E075F6F66C0C25A3; // 0x38
	::System::Boolean B03E4FC09E683F07; // 0x40
	::System::Boolean BEAD1912A7DA0ECE; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B304DCF86DE6355B__CTOR_OFFSET))(this);
	}
};
