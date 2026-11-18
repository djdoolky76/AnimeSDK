#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPDNMFONAEH.h"
#include "unitysdk/ALODNBLGKKM.h"

namespace System { class String; }

#define BCNPGGJEIMP_EFMCNJGCMNM_OFFSET UNITYSDK_OFFSET(0xFF66B70)
#define BCNPGGJEIMP_KIIONEDFMPN_OFFSET UNITYSDK_OFFSET(0xFF66F10)
#define BCNPGGJEIMP_KMGIOBEPIDI_OFFSET UNITYSDK_OFFSET(0xFF66F80)
#define BCNPGGJEIMP_OJEFBNNBELP_OFFSET UNITYSDK_OFFSET(0xFF67010)
#define BCNPGGJEIMP__CTOR_OFFSET UNITYSDK_OFFSET(0xFF66B50)

inline static constexpr unsigned int BCNPGGJEIMP_TypeDefinitionIndex = 56819;

class BCNPGGJEIMP : public ::PPDNMFONAEH
{
public:
	::System::Void _ctor(::ALODNBLGKKM KPGAFJBIBCC)
	{
		return ((::System::Void(*)(::PVOID, ::ALODNBLGKKM))((::PBYTE)hIl2Cpp + BCNPGGJEIMP__CTOR_OFFSET))(this, KPGAFJBIBCC);
	}

	::System::Void EFMCNJGCMNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNPGGJEIMP_EFMCNJGCMNM_OFFSET))(this);
	}

	::System::String* KIIONEDFMPN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNPGGJEIMP_KIIONEDFMPN_OFFSET))(this);
	}

	::System::Void KMGIOBEPIDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNPGGJEIMP_KMGIOBEPIDI_OFFSET))(this);
	}

	::System::String* OJEFBNNBELP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNPGGJEIMP_OJEFBNNBELP_OFFSET))(this);
	}
};
