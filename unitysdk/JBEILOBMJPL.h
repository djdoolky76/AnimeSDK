#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JBEILOBMJPL_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x15C36540)
#define JBEILOBMJPL_DNAKEIJEHJO_OFFSET UNITYSDK_OFFSET(0x15C36460)
#define JBEILOBMJPL_EFFIBJJPKPO_OFFSET UNITYSDK_OFFSET(0x15C364A0)
#define JBEILOBMJPL_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x15C364E0)
#define JBEILOBMJPL__CTOR_OFFSET UNITYSDK_OFFSET(0x15C36580)

inline static constexpr unsigned int JBEILOBMJPL_TypeDefinitionIndex = 51946;

class JBEILOBMJPL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEILOBMJPL__CTOR_OFFSET))(this);
	}

	::System::Void DNAKEIJEHJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEILOBMJPL_DNAKEIJEHJO_OFFSET))(this);
	}

	::System::Void EFFIBJJPKPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEILOBMJPL_EFFIBJJPKPO_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBEILOBMJPL_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void DIHCGHDHPJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEILOBMJPL_DIHCGHDHPJP_OFFSET))(this);
	}
};
