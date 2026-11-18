#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define HBODJBIEJPJ_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x15D95BC0)
#define HBODJBIEJPJ_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x15D95940)
#define HBODJBIEJPJ_JOEOGKMAODK_OFFSET UNITYSDK_OFFSET(0x15D95B90)
#define HBODJBIEJPJ_MMACADIMHFC_OFFSET UNITYSDK_OFFSET(0x15D95BB0)
#define HBODJBIEJPJ_NFFOCOKHMHH_OFFSET UNITYSDK_OFFSET(0x15D95BA0)
#define HBODJBIEJPJ_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x15D95BD0)
#define HBODJBIEJPJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15D95870)
#define HBODJBIEJPJ_PJOKOAAHNCJ_OFFSET UNITYSDK_OFFSET(0x15D95B80)
#define HBODJBIEJPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15D95AF0)

inline static constexpr unsigned int HBODJBIEJPJ_TypeDefinitionIndex = 60688;

class HBODJBIEJPJ : public ::IOOIHHOJOPI
{
public:
	::MoleMole::MonoGamepadModule* _GBIPLDOAKOC_k__BackingField; // 0x28
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x30
	::MonoUITableScrollV2* _MKIJBIBINGK_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBODJBIEJPJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBODJBIEJPJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::MonoUITableScrollV2* PJOKOAAHNCJ()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBODJBIEJPJ_PJOKOAAHNCJ_OFFSET))(this);
	}

	::MoleMole::MonoGamepadModule* JOEOGKMAODK()
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBODJBIEJPJ_JOEOGKMAODK_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBODJBIEJPJ_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void NFFOCOKHMHH(::MoleMole::MonoGamepadModule* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + HBODJBIEJPJ_NFFOCOKHMHH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MMACADIMHFC(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + HBODJBIEJPJ_MMACADIMHFC_OFFSET))(this, EGEGIMGMJHN);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBODJBIEJPJ_CBIBIFBAIFA_OFFSET))(this);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + HBODJBIEJPJ_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}
};
