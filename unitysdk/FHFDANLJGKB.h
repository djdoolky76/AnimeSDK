#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class MaterialParameterRewriter;
namespace MoleMole { class UIControlCollection; }

#define FHFDANLJGKB_BMDELLAKMKL_OFFSET UNITYSDK_OFFSET(0x140F5240)
#define FHFDANLJGKB_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x140F50D0)
#define FHFDANLJGKB_IBCCOJPBFBP_OFFSET UNITYSDK_OFFSET(0x140F5230)
#define FHFDANLJGKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140F5030)
#define FHFDANLJGKB__CTOR_OFFSET UNITYSDK_OFFSET(0x140F51A0)

inline static constexpr unsigned int FHFDANLJGKB_TypeDefinitionIndex = 53564;

class FHFDANLJGKB : public ::IOOIHHOJOPI
{
public:
	::MaterialParameterRewriter* _EIIHAIONFAA_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFDANLJGKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHFDANLJGKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFDANLJGKB_EFKGNFCEENK_OFFSET))(this);
	}

	::MaterialParameterRewriter* IBCCOJPBFBP()
	{
		return ((::MaterialParameterRewriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFDANLJGKB_IBCCOJPBFBP_OFFSET))(this);
	}

	::System::Void BMDELLAKMKL(::MaterialParameterRewriter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter*))((::PBYTE)hIl2Cpp + FHFDANLJGKB_BMDELLAKMKL_OFFSET))(this, EGEGIMGMJHN);
	}
};
