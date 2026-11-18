#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

class FCFECFKMNOA;

#define OCDAFGFCKJD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5E9060)
#define OCDAFGFCKJD_FILIKHJMENK_OFFSET UNITYSDK_OFFSET(0x1E5F7D70)
#define OCDAFGFCKJD_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x1E5F7D10)
#define OCDAFGFCKJD_LIEODAGIBFF_OFFSET UNITYSDK_OFFSET(0x1E5F7D80)
#define OCDAFGFCKJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E7CA0)

inline static constexpr unsigned int OCDAFGFCKJD_TypeDefinitionIndex = 34098;

class OCDAFGFCKJD : public ::System::Object
{
public:
	::FCFECFKMNOA* FPKBAHNIADJ; // 0x10
	::System::Int32 HBPAINCDEIH; // 0x18
	::System::Int32 CLKBJFDGOLJ; // 0x1C

	::System::Void _ctor(::FCFECFKMNOA* MJHEFGLNLNE, ::System::Int32 BOGPAHGJOJK, ::System::Int32 KMKBJKOEBMF)
	{
		return ((::System::Void(*)(::PVOID, ::FCFECFKMNOA*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCDAFGFCKJD__CTOR_OFFSET))(this, MJHEFGLNLNE, BOGPAHGJOJK, KMKBJKOEBMF);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAFGFCKJD_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Int32 FILIKHJMENK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAFGFCKJD_FILIKHJMENK_OFFSET))(this);
	}

	::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> LIEODAGIBFF()
	{
		return ((::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAFGFCKJD_LIEODAGIBFF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAFGFCKJD_DISPOSE_OFFSET))(this);
	}
};
