#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFALGHKLPKI.h"
#include "unitysdk/PPFPIJOPANM.h"

namespace System { class String; }

#define ODLLABKMLOI_CCNCFOBJCHG_OFFSET UNITYSDK_OFFSET(0xB310180)
#define ODLLABKMLOI_MMJNFKGOADK_OFFSET UNITYSDK_OFFSET(0xB3102F0)
#define ODLLABKMLOI__CTOR_OFFSET UNITYSDK_OFFSET(0xB310170)

inline static constexpr unsigned int ODLLABKMLOI_TypeDefinitionIndex = 77544;

class ODLLABKMLOI : public ::BFALGHKLPKI
{
public:
	::System::Void _ctor(::Il2CppArray<::PPFPIJOPANM>* HDKKPOPLHIB, ::Il2CppArray<::System::String*>* NGFLKJKBOBD)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::PPFPIJOPANM>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ODLLABKMLOI__CTOR_OFFSET))(this, HDKKPOPLHIB, NGFLKJKBOBD);
	}

	::System::Void CCNCFOBJCHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLLABKMLOI_CCNCFOBJCHG_OFFSET))(this);
	}

	::System::Void MMJNFKGOADK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLLABKMLOI_MMJNFKGOADK_OFFSET))(this);
	}
};
