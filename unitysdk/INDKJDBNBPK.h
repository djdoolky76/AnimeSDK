#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define INDKJDBNBPK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13C9E580)
#define INDKJDBNBPK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13C9E4F0)
#define INDKJDBNBPK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C9E470)
#define INDKJDBNBPK__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9E4E0)

inline static constexpr unsigned int INDKJDBNBPK_TypeDefinitionIndex = 68418;

class INDKJDBNBPK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xAD; // 0x0
	::System::String* JIPFOLMLFCI; // 0x20
	::System::String* BNKBPBFKDDL; // 0x28
	::System::Int32 INCGAHLKDOJ; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INDKJDBNBPK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDKJDBNBPK__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDKJDBNBPK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDKJDBNBPK_FIGPAOKNJLN_OFFSET))(this);
	}
};
