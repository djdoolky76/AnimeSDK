#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLJGPKJJPIL.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }

#define IOGACHABDAE_ILLMHOAINBL_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1658EAC0)
#define IOGACHABDAE_ILLMHOAINBL_FEFAFNFAAGM_OFFSET UNITYSDK_OFFSET(0x1658EC20)
#define IOGACHABDAE_ILLMHOAINBL_OHAADOHNPPP_OFFSET UNITYSDK_OFFSET(0x1658EC30)
#define IOGACHABDAE_ILLMHOAINBL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1658EA20)
#define IOGACHABDAE_ILLMHOAINBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1658EB90)

inline static constexpr unsigned int IOGACHABDAE_ILLMHOAINBL_TypeDefinitionIndex = 84974;

class IOGACHABDAE_ILLMHOAINBL : public ::MLJGPKJJPIL
{
public:
	// static const ::System::String* HEHMEFBFNEN; // 0x0
	::MoleMole::UIGeneralButtonController* _PAMKJKDBOIF_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGACHABDAE_ILLMHOAINBL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOGACHABDAE_ILLMHOAINBL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void FEFAFNFAAGM(::MoleMole::UIGeneralButtonController* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*))((::PBYTE)hIl2Cpp + IOGACHABDAE_ILLMHOAINBL_FEFAFNFAAGM_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::UIGeneralButtonController* OHAADOHNPPP()
	{
		return ((::MoleMole::UIGeneralButtonController*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGACHABDAE_ILLMHOAINBL_OHAADOHNPPP_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGACHABDAE_ILLMHOAINBL_EFKGNFCEENK_OFFSET))(this);
	}
};
