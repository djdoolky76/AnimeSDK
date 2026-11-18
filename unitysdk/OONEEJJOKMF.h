#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OONEEJJOKMF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFD986E0)
#define OONEEJJOKMF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFD98570)
#define OONEEJJOKMF__CTOR_OFFSET UNITYSDK_OFFSET(0xFD986D0)

inline static constexpr unsigned int OONEEJJOKMF_TypeDefinitionIndex = 56909;

class OONEEJJOKMF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BJHIPHJIFNI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* LIPEGBMCMJE; // 0x20
	::UnityEngine::UI::Text* MFKOLLFEOGK; // 0x28
	::MonoUITableScrollV2* GLLOJFEEAIB; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* CPHFNAPJKIP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* IODBDPOLPKA; // 0x50
	::UnityEngine::Transform* AMEEMEPHGEL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONEEJJOKMF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OONEEJJOKMF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OONEEJJOKMF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
