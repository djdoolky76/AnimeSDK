#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFALGHKLPKI.h"
#include "unitysdk/PPFPIJOPANM.h"

namespace System { class String; }

#define LPPPIDPJGAP_CCNCFOBJCHG_OFFSET UNITYSDK_OFFSET(0x12D4BAB0)
#define LPPPIDPJGAP_MMJNFKGOADK_OFFSET UNITYSDK_OFFSET(0x12D4C120)
#define LPPPIDPJGAP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4BAA0)

inline static constexpr unsigned int LPPPIDPJGAP_TypeDefinitionIndex = 56174;

class LPPPIDPJGAP : public ::BFALGHKLPKI
{
public:
	::System::Void _ctor(::Il2CppArray<::PPFPIJOPANM>* HDKKPOPLHIB, ::Il2CppArray<::System::String*>* NGFLKJKBOBD)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::PPFPIJOPANM>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + LPPPIDPJGAP__CTOR_OFFSET))(this, HDKKPOPLHIB, NGFLKJKBOBD);
	}

	::System::Void CCNCFOBJCHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPPIDPJGAP_CCNCFOBJCHG_OFFSET))(this);
	}

	::System::Void MMJNFKGOADK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPPIDPJGAP_MMJNFKGOADK_OFFSET))(this);
	}
};
