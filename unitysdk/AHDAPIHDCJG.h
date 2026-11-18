#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UINewsStandContentWidgetController; }
namespace MoleMole { class UINewsStandHeadLineWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define AHDAPIHDCJG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14212B90)
#define AHDAPIHDCJG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14212AA0)
#define AHDAPIHDCJG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14212920)
#define AHDAPIHDCJG__CTOR_OFFSET UNITYSDK_OFFSET(0x14212B80)

inline static constexpr unsigned int AHDAPIHDCJG_TypeDefinitionIndex = 65359;

class AHDAPIHDCJG : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UINewsStandContentWidgetController*>* ODALDIOFMPH; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UINewsStandHeadLineWidgetController*>* GJFHEMGEDJH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDAPIHDCJG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHDAPIHDCJG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHDAPIHDCJG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDAPIHDCJG_KGEBDLGBGNM_OFFSET))(this);
	}
};
