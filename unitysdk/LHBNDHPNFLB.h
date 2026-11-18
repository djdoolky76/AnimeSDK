#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKFJMMGOLCN.h"
#include "unitysdk/INKLDEKDGDN.h"

class HGDBGOLPPHH;
class KGBFLHNJHHN;

#define LHBNDHPNFLB_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E1CDD20)
#define LHBNDHPNFLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CDD10)

inline static constexpr unsigned int LHBNDHPNFLB_TypeDefinitionIndex = 93415;

class LHBNDHPNFLB : public ::MKFJMMGOLCN
{
public:
	::System::Void _ctor(::INKLDEKDGDN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::INKLDEKDGDN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LHBNDHPNFLB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::HGDBGOLPPHH* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::HGDBGOLPPHH*))((::PBYTE)hIl2Cpp + LHBNDHPNFLB_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
