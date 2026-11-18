#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFALGHKLPKI.h"
#include "unitysdk/PPFPIJOPANM.h"

namespace System { class String; }

#define EPIJNMOCFIF_CCNCFOBJCHG_OFFSET UNITYSDK_OFFSET(0x1427B9E0)
#define EPIJNMOCFIF_MMJNFKGOADK_OFFSET UNITYSDK_OFFSET(0x1427C3F0)
#define EPIJNMOCFIF__CTOR_OFFSET UNITYSDK_OFFSET(0x1427B9D0)

inline static constexpr unsigned int EPIJNMOCFIF_TypeDefinitionIndex = 77457;

class EPIJNMOCFIF : public ::BFALGHKLPKI
{
public:
	::System::Void _ctor(::Il2CppArray<::PPFPIJOPANM>* HDKKPOPLHIB, ::Il2CppArray<::System::String*>* NGFLKJKBOBD)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::PPFPIJOPANM>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIJNMOCFIF__CTOR_OFFSET))(this, HDKKPOPLHIB, NGFLKJKBOBD);
	}

	::System::Void CCNCFOBJCHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIJNMOCFIF_CCNCFOBJCHG_OFFSET))(this);
	}

	::System::Void MMJNFKGOADK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIJNMOCFIF_MMJNFKGOADK_OFFSET))(this);
	}
};
