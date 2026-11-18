#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBEPKELNDPC.h"
#include "unitysdk/KHOODDJHJIL.h"

namespace System { class String; }

#define IKIDKCIALOE_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x15ECDF90)
#define IKIDKCIALOE_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x15ECDFA0)
#define IKIDKCIALOE__CTOR_OFFSET UNITYSDK_OFFSET(0x15ECDFE0)

inline static constexpr unsigned int IKIDKCIALOE_TypeDefinitionIndex = 81672;

class IKIDKCIALOE : public ::KBEPKELNDPC
{
public:
	::System::String* IEDPFEJNGJC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKIDKCIALOE__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + IKIDKCIALOE_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKIDKCIALOE_KMMIPNMJILI_OFFSET))(this);
	}
};
