#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNJKFGPMEGE.h"
#include "unitysdk/EIIHIBHAPKE.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NCIILDJDHMK_HFHKICALMBO_OFFSET UNITYSDK_OFFSET(0x1AB12FA0)
#define NCIILDJDHMK_IKBICHKFDNM_OFFSET UNITYSDK_OFFSET(0x1AB12EE0)
#define NCIILDJDHMK_LCBLOBAAGLK_OFFSET UNITYSDK_OFFSET(0x1AB13060)
#define NCIILDJDHMK_MPNBFJLHEIH_OFFSET UNITYSDK_OFFSET(0x1AB12ED0)
#define NCIILDJDHMK_ODEANEDEJGF_OFFSET UNITYSDK_OFFSET(0x1AB13120)
#define NCIILDJDHMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB12EC0)

inline static constexpr unsigned int NCIILDJDHMK_TypeDefinitionIndex = 13397;

class NCIILDJDHMK : public ::KNJKFGPMEGE
{
public:
	::System::Void _ctor(::EIIHIBHAPKE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EIIHIBHAPKE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NCIILDJDHMK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 MPNBFJLHEIH(::System::Int32 ODJKACDGJLM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NCIILDJDHMK_MPNBFJLHEIH_OFFSET))(this, ODJKACDGJLM);
	}

	::System::String* IKBICHKFDNM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCIILDJDHMK_IKBICHKFDNM_OFFSET))(this);
	}

	::System::String* HFHKICALMBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCIILDJDHMK_HFHKICALMBO_OFFSET))(this);
	}

	::System::String* LCBLOBAAGLK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCIILDJDHMK_LCBLOBAAGLK_OFFSET))(this);
	}

	::System::String* ODEANEDEJGF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCIILDJDHMK_ODEANEDEJGF_OFFSET))(this);
	}
};
