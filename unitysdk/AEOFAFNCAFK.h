#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOKGNIFDNOK.h"
#include "unitysdk/System/Object.h"

class MEKLIGLLJKM;

#define AEOFAFNCAFK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16FE22C0)
#define AEOFAFNCAFK_PECONPJFOBJ_OFFSET UNITYSDK_OFFSET(0x16FE2360)
#define AEOFAFNCAFK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16FE2310)
#define AEOFAFNCAFK_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x16FE2260)
#define AEOFAFNCAFK__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE2350)

inline static constexpr unsigned int AEOFAFNCAFK_TypeDefinitionIndex = 41035;

class AEOFAFNCAFK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEOFAFNCAFK__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AEOFAFNCAFK_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void BBOMJDBNHIC(::MEKLIGLLJKM* POJEDACFDOF)
	{
		return ((::System::Void(*)(::PVOID, ::MEKLIGLLJKM*))((::PBYTE)hIl2Cpp + AEOFAFNCAFK_BBOMJDBNHIC_OFFSET))(this, POJEDACFDOF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEOFAFNCAFK_PHOADBJGFBE_OFFSET))(this);
	}

	static ::AEOFAFNCAFK* PECONPJFOBJ(::GOKGNIFDNOK JBBFCGAMDHI)
	{
		return ((::AEOFAFNCAFK*(*)(::GOKGNIFDNOK))((::PBYTE)hIl2Cpp + AEOFAFNCAFK_PECONPJFOBJ_OFFSET))(JBBFCGAMDHI);
	}
};
