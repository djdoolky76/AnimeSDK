#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define DBKBDBGMKBK_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x12BA49B0)
#define DBKBDBGMKBK_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x12BA4770)
#define DBKBDBGMKBK_JOEOGKMAODK_OFFSET UNITYSDK_OFFSET(0x12BA49F0)
#define DBKBDBGMKBK_MMACADIMHFC_OFFSET UNITYSDK_OFFSET(0x12BA49D0)
#define DBKBDBGMKBK_NFFOCOKHMHH_OFFSET UNITYSDK_OFFSET(0x12BA49C0)
#define DBKBDBGMKBK_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x12BA49E0)
#define DBKBDBGMKBK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12BA46A0)
#define DBKBDBGMKBK_PJOKOAAHNCJ_OFFSET UNITYSDK_OFFSET(0x12BA4A00)
#define DBKBDBGMKBK__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA4920)

inline static constexpr unsigned int DBKBDBGMKBK_TypeDefinitionIndex = 81989;

class DBKBDBGMKBK : public ::IOOIHHOJOPI
{
public:
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x28
	::MoleMole::MonoGamepadModule* _GBIPLDOAKOC_k__BackingField; // 0x30
	::MonoUITableScrollV2* _MKIJBIBINGK_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKBDBGMKBK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBKBDBGMKBK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKBDBGMKBK_EFKGNFCEENK_OFFSET))(this);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKBDBGMKBK_CBIBIFBAIFA_OFFSET))(this);
	}

	::System::Void NFFOCOKHMHH(::MoleMole::MonoGamepadModule* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + DBKBDBGMKBK_NFFOCOKHMHH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MMACADIMHFC(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + DBKBDBGMKBK_MMACADIMHFC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + DBKBDBGMKBK_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::MonoGamepadModule* JOEOGKMAODK()
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKBDBGMKBK_JOEOGKMAODK_OFFSET))(this);
	}

	::MonoUITableScrollV2* PJOKOAAHNCJ()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKBDBGMKBK_PJOKOAAHNCJ_OFFSET))(this);
	}
};
