#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OJNPHPNMDOH.h"
#include "unitysdk/System/Object.h"

#define DEGAAEEBGDB_CBHGHHHODOI_OFFSET UNITYSDK_OFFSET(0x18334790)
#define DEGAAEEBGDB_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0x18334A80)
#define DEGAAEEBGDB_DJDJKILDPGP_OFFSET UNITYSDK_OFFSET(0x18334750)
#define DEGAAEEBGDB_FABCPKEMFMK_OFFSET UNITYSDK_OFFSET(0x183347E0)
#define DEGAAEEBGDB_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x18334B70)
#define DEGAAEEBGDB_OEJAFAHIPIA_OFFSET UNITYSDK_OFFSET(0x18334B10)
#define DEGAAEEBGDB__CTOR_OFFSET UNITYSDK_OFFSET(0x18334B60)

inline static constexpr unsigned int DEGAAEEBGDB_TypeDefinitionIndex = 50662;

class DEGAAEEBGDB : public ::System::Object
{
public:
	::OJNPHPNMDOH KFLKNNAKCFO; // 0x10
	::System::Int32 NALFHCHDLHD; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGAAEEBGDB__CTOR_OFFSET))(this);
	}

	::System::Void DJDJKILDPGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGAAEEBGDB_DJDJKILDPGP_OFFSET))(this);
	}

	::System::Void CBHGHHHODOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGAAEEBGDB_CBHGHHHODOI_OFFSET))(this);
	}

	::System::Void FABCPKEMFMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGAAEEBGDB_FABCPKEMFMK_OFFSET))(this);
	}

	::System::Void DABGFBDHOGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGAAEEBGDB_DABGFBDHOGD_OFFSET))(this);
	}

	::System::Void OEJAFAHIPIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGAAEEBGDB_OEJAFAHIPIA_OFFSET))(this);
	}

	::DEGAAEEBGDB* IBBLCAOMCKF(::OJNPHPNMDOH CBBCJFPGBOK, ::System::Int32 COMDNFILAIC)
	{
		return ((::DEGAAEEBGDB*(*)(::PVOID, ::OJNPHPNMDOH, ::System::Int32))((::PBYTE)hIl2Cpp + DEGAAEEBGDB_IBBLCAOMCKF_OFFSET))(this, CBBCJFPGBOK, COMDNFILAIC);
	}
};
