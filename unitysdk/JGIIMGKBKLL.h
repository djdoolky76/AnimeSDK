#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGIIMGKBKLL_DOHLICAPCPO_OFFSET UNITYSDK_OFFSET(0x1F3809D0)
#define JGIIMGKBKLL_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x1F380870)
#define JGIIMGKBKLL_ODGEKAGFNLP_OFFSET UNITYSDK_OFFSET(0x1F380A10)
#define JGIIMGKBKLL_PGPAGPCJLOC_OFFSET UNITYSDK_OFFSET(0x1F3807A0)
#define JGIIMGKBKLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F380740)

inline static constexpr unsigned int JGIIMGKBKLL_TypeDefinitionIndex = 7970;

class JGIIMGKBKLL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* CCGNCPIPIEJ; // 0x10
	::System::Boolean OEFPIBMPAJK; // 0x18

	::System::Void _ctor(::System::Int32 LANMHHEMIHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JGIIMGKBKLL__CTOR_OFFSET))(this, LANMHHEMIHG);
	}

	::System::Void PGPAGPCJLOC(::System::Int32 CKPGOKHECCH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JGIIMGKBKLL_PGPAGPCJLOC_OFFSET))(this, CKPGOKHECCH);
	}

	::System::Void GIAOBHOJCDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGIIMGKBKLL_GIAOBHOJCDP_OFFSET))(this);
	}

	::System::Void DOHLICAPCPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGIIMGKBKLL_DOHLICAPCPO_OFFSET))(this);
	}

	static ::JGIIMGKBKLL* ODGEKAGFNLP(::System::Int32 OFAMKDGIJOB)
	{
		return ((::JGIIMGKBKLL*(*)(::System::Int32))((::PBYTE)hIl2Cpp + JGIIMGKBKLL_ODGEKAGFNLP_OFFSET))(OFAMKDGIJOB);
	}
};
