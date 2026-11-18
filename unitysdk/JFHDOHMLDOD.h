#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFALGHKLPKI.h"
#include "unitysdk/PPFPIJOPANM.h"

namespace System { class String; }

#define JFHDOHMLDOD_CCNCFOBJCHG_OFFSET UNITYSDK_OFFSET(0x13CB8F40)
#define JFHDOHMLDOD_MMJNFKGOADK_OFFSET UNITYSDK_OFFSET(0x13CB9170)
#define JFHDOHMLDOD__CTOR_OFFSET UNITYSDK_OFFSET(0x13CB8F30)

inline static constexpr unsigned int JFHDOHMLDOD_TypeDefinitionIndex = 64388;

class JFHDOHMLDOD : public ::BFALGHKLPKI
{
public:
	::System::Void _ctor(::Il2CppArray<::PPFPIJOPANM>* HDKKPOPLHIB, ::Il2CppArray<::System::String*>* NGFLKJKBOBD)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::PPFPIJOPANM>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + JFHDOHMLDOD__CTOR_OFFSET))(this, HDKKPOPLHIB, NGFLKJKBOBD);
	}

	::System::Void CCNCFOBJCHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHDOHMLDOD_CCNCFOBJCHG_OFFSET))(this);
	}

	::System::Void MMJNFKGOADK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHDOHMLDOD_MMJNFKGOADK_OFFSET))(this);
	}
};
