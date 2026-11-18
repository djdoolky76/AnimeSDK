#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLJGPKJJPIL.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define LOAFHGHDDAH_FDKNDNIMHHL_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x14036E00)
#define LOAFHGHDDAH_FDKNDNIMHHL_GNKFAIKOKII_OFFSET UNITYSDK_OFFSET(0x14036CB0)
#define LOAFHGHDDAH_FDKNDNIMHHL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14036B30)
#define LOAFHGHDDAH_FDKNDNIMHHL__CTOR_OFFSET UNITYSDK_OFFSET(0x140370E0)

inline static constexpr unsigned int LOAFHGHDDAH_FDKNDNIMHHL_TypeDefinitionIndex = 60749;

class LOAFHGHDDAH_FDKNDNIMHHL : public ::MLJGPKJJPIL
{
public:
	::FGCOIBFFCHB* NMICOAHDPAJ; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* FKFJANGCCLH; // 0x30
	::FGCOIBFFCHB* HFEHDHCNJHB; // 0x38
	::UnityEngine::UI::Extension::UITabButton* FNMOJAPJAJI; // 0x40
	::FGCOIBFFCHB* OPMIDGCFJDF; // 0x48
	::FGCOIBFFCHB* IPCOIFBOEPA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAFHGHDDAH_FDKNDNIMHHL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LOAFHGHDDAH_FDKNDNIMHHL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAFHGHDDAH_FDKNDNIMHHL_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* GNKFAIKOKII(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LOAFHGHDDAH_FDKNDNIMHHL_GNKFAIKOKII_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
