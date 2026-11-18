#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BABFBCHGIHG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

#define LLLNCCPNOGA_LAJJILKNEJB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15665A50)
#define LLLNCCPNOGA_LAJJILKNEJB_EQUALS_OFFSET UNITYSDK_OFFSET(0x15665990)
#define LLLNCCPNOGA_LAJJILKNEJB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15665BC0)
#define LLLNCCPNOGA_LAJJILKNEJB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x15665C20)
#define LLLNCCPNOGA_LAJJILKNEJB_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x15665C30)
#define LLLNCCPNOGA_LAJJILKNEJB__CTOR_OFFSET UNITYSDK_OFFSET(0x15665C10)

inline static constexpr unsigned int LLLNCCPNOGA_LAJJILKNEJB_TypeDefinitionIndex = 63641;

class LLLNCCPNOGA_LAJJILKNEJB : public ::System::Object
{
public:
	::MoleMole::EntityHandle CPLFOFKKGGO; // 0x10
	::BABFBCHGIHG NOOLOILNGPL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLNCCPNOGA_LAJJILKNEJB__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::LLLNCCPNOGA_LAJJILKNEJB* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LLLNCCPNOGA_LAJJILKNEJB*))((::PBYTE)hIl2Cpp + LLLNCCPNOGA_LAJJILKNEJB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLLNCCPNOGA_LAJJILKNEJB_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLNCCPNOGA_LAJJILKNEJB_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLNCCPNOGA_LAJJILKNEJB_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLLNCCPNOGA_LAJJILKNEJB_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
