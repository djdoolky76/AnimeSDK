#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }

#define KBIALHCFIBK_DBIELFKLNCF_OFFSET UNITYSDK_OFFSET(0x17B659F0)
#define KBIALHCFIBK_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x17B65810)
#define KBIALHCFIBK_EKAICBKKIOH_OFFSET UNITYSDK_OFFSET(0x17B65A10)
#define KBIALHCFIBK_JACJKDMHGAG_OFFSET UNITYSDK_OFFSET(0x17B659E0)
#define KBIALHCFIBK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17B65790)
#define KBIALHCFIBK_OCGBBLLKLGP_OFFSET UNITYSDK_OFFSET(0x17B65A00)
#define KBIALHCFIBK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B65630)
#define KBIALHCFIBK__CTOR_OFFSET UNITYSDK_OFFSET(0x17B65950)

inline static constexpr unsigned int KBIALHCFIBK_TypeDefinitionIndex = 86547;

class KBIALHCFIBK : public ::IOOIHHOJOPI
{
public:
	::MoleMole::UIGeneralButtonController* _HOMLOGIBAFH_k__BackingField; // 0x28
	::FGCOIBFFCHB* _EIBCMNKBJHK_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIALHCFIBK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBIALHCFIBK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIALHCFIBK_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void JACJKDMHGAG(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + KBIALHCFIBK_JACJKDMHGAG_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::UIGeneralButtonController* DBIELFKLNCF()
	{
		return ((::MoleMole::UIGeneralButtonController*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIALHCFIBK_DBIELFKLNCF_OFFSET))(this);
	}

	::System::Void OCGBBLLKLGP(::MoleMole::UIGeneralButtonController* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*))((::PBYTE)hIl2Cpp + KBIALHCFIBK_OCGBBLLKLGP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIALHCFIBK_KGEBDLGBGNM_OFFSET))(this);
	}

	::FGCOIBFFCHB* EKAICBKKIOH()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIALHCFIBK_EKAICBKKIOH_OFFSET))(this);
	}
};
