#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class ImgTextParserBase; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UIImgText; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define BDFMIGKOMCE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D1A610)
#define BDFMIGKOMCE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D1A560)
#define BDFMIGKOMCE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D1A390)
#define BDFMIGKOMCE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D1A600)

inline static constexpr unsigned int BDFMIGKOMCE_TypeDefinitionIndex = 50820;

class BDFMIGKOMCE : public ::GIBMJLOJLKD
{
public:
	::MoleMole::ImgTextParserBase* POIAMJEKAGE; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* AFPNENOGGLH; // 0x20
	::UnityEngine::UI::Extension::UIImgText* AGCCEHDJPID; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JOCEGIKFPGI; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* AHOKPCBMGDA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFMIGKOMCE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDFMIGKOMCE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFMIGKOMCE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDFMIGKOMCE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
