#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class ImgTextParserBase; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define PAGKGCNFKIP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1AFCCE80)
#define PAGKGCNFKIP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1AFCCDB0)
#define PAGKGCNFKIP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1AFCCC10)
#define PAGKGCNFKIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCCE70)

inline static constexpr unsigned int PAGKGCNFKIP_TypeDefinitionIndex = 77653;

class PAGKGCNFKIP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NDDNIGPCNGN; // 0x18
	::MoleMole::ImgTextParserBase* LBLJMJLAMDO; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* AKHAFANEEFO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGKGCNFKIP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAGKGCNFKIP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAGKGCNFKIP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGKGCNFKIP_KGEBDLGBGNM_OFFSET))(this);
	}
};
