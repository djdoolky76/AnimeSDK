#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLJGPKJJPIL.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define KJMCHNKFDBK_BKBAALGCNHK_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x152148E0)
#define KJMCHNKFDBK_BKBAALGCNHK_GNKFAIKOKII_OFFSET UNITYSDK_OFFSET(0x15214790)
#define KJMCHNKFDBK_BKBAALGCNHK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x152145B0)
#define KJMCHNKFDBK_BKBAALGCNHK__CTOR_OFFSET UNITYSDK_OFFSET(0x15214BC0)

inline static constexpr unsigned int KJMCHNKFDBK_BKBAALGCNHK_TypeDefinitionIndex = 70323;

class KJMCHNKFDBK_BKBAALGCNHK : public ::MLJGPKJJPIL
{
public:
	::FGCOIBFFCHB* OPMIDGCFJDF; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* FKFJANGCCLH; // 0x30
	::UnityEngine::UI::Extension::UITabButton* FNMOJAPJAJI; // 0x38
	::FGCOIBFFCHB* NMICOAHDPAJ; // 0x40
	::FGCOIBFFCHB* HFEHDHCNJHB; // 0x48
	::FGCOIBFFCHB* IPCOIFBOEPA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMCHNKFDBK_BKBAALGCNHK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJMCHNKFDBK_BKBAALGCNHK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMCHNKFDBK_BKBAALGCNHK_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* GNKFAIKOKII(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJMCHNKFDBK_BKBAALGCNHK_GNKFAIKOKII_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
