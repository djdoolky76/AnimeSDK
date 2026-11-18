#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

class FCFECFKMNOA;

#define BMLIBADPBGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5DFB90)
#define BMLIBADPBGA_FILIKHJMENK_OFFSET UNITYSDK_OFFSET(0x1E5DF6C0)
#define BMLIBADPBGA_FMNOBGHDMEJ_OFFSET UNITYSDK_OFFSET(0x1E5DFC90)
#define BMLIBADPBGA_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x1E5DF6D0)
#define BMLIBADPBGA_LIEODAGIBFF_OFFSET UNITYSDK_OFFSET(0x1E5DF890)
#define BMLIBADPBGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DF4F0)

inline static constexpr unsigned int BMLIBADPBGA_TypeDefinitionIndex = 34061;

class BMLIBADPBGA : public ::System::Object
{
public:
	::FCFECFKMNOA* FPKBAHNIADJ; // 0x10
	::System::Int32 CLKBJFDGOLJ; // 0x18
	::System::Int32 HBPAINCDEIH; // 0x1C

	::System::Void _ctor(::FCFECFKMNOA* MJHEFGLNLNE, ::System::Int32 BOGPAHGJOJK, ::System::Int32 KMKBJKOEBMF)
	{
		return ((::System::Void(*)(::PVOID, ::FCFECFKMNOA*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BMLIBADPBGA__CTOR_OFFSET))(this, MJHEFGLNLNE, BOGPAHGJOJK, KMKBJKOEBMF);
	}

	::System::Int32 FILIKHJMENK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLIBADPBGA_FILIKHJMENK_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLIBADPBGA_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> LIEODAGIBFF()
	{
		return ((::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLIBADPBGA_LIEODAGIBFF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLIBADPBGA_DISPOSE_OFFSET))(this);
	}

	::BMLIBADPBGA* FMNOBGHDMEJ(::System::Int32 BOGPAHGJOJK, ::System::Int32 KMKBJKOEBMF)
	{
		return ((::BMLIBADPBGA*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BMLIBADPBGA_FMNOBGHDMEJ_OFFSET))(this, BOGPAHGJOJK, KMKBJKOEBMF);
	}
};
