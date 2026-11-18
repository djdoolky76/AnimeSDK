#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class MaterialParameterRewriter;
namespace MoleMole { class UIControlCollection; }

#define JENNKHKHIOA_BMDELLAKMKL_OFFSET UNITYSDK_OFFSET(0x1383AE80)
#define JENNKHKHIOA_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1383AD20)
#define JENNKHKHIOA_IBCCOJPBFBP_OFFSET UNITYSDK_OFFSET(0x1383AE90)
#define JENNKHKHIOA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1383AC80)
#define JENNKHKHIOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1383ADF0)

inline static constexpr unsigned int JENNKHKHIOA_TypeDefinitionIndex = 82974;

class JENNKHKHIOA : public ::IOOIHHOJOPI
{
public:
	::MaterialParameterRewriter* _EIIHAIONFAA_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JENNKHKHIOA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JENNKHKHIOA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JENNKHKHIOA_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void BMDELLAKMKL(::MaterialParameterRewriter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter*))((::PBYTE)hIl2Cpp + JENNKHKHIOA_BMDELLAKMKL_OFFSET))(this, EGEGIMGMJHN);
	}

	::MaterialParameterRewriter* IBCCOJPBFBP()
	{
		return ((::MaterialParameterRewriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + JENNKHKHIOA_IBCCOJPBFBP_OFFSET))(this);
	}
};
