#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BACFPIJCOBC_COJAMOKNCAK_OFFSET UNITYSDK_OFFSET(0x18547300)
#define BACFPIJCOBC_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x185471A0)
#define BACFPIJCOBC_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x18547310)
#define BACFPIJCOBC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18547100)
#define BACFPIJCOBC__CTOR_OFFSET UNITYSDK_OFFSET(0x18547270)

inline static constexpr unsigned int BACFPIJCOBC_TypeDefinitionIndex = 73676;

class BACFPIJCOBC : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* _MEFGOFNPPMO_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACFPIJCOBC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BACFPIJCOBC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void COJAMOKNCAK(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + BACFPIJCOBC_COJAMOKNCAK_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* LNLNHEMFAEC()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACFPIJCOBC_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACFPIJCOBC_EFKGNFCEENK_OFFSET))(this);
	}
};
