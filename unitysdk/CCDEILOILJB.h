#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCityMiniMenuButtonWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class CBCLGFEGHLJ_1;

#define CCDEILOILJB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F13E50)
#define CCDEILOILJB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F13DA0)
#define CCDEILOILJB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F13BC0)
#define CCDEILOILJB__CTOR_OFFSET UNITYSDK_OFFSET(0x14F13E40)

inline static constexpr unsigned int CCDEILOILJB_TypeDefinitionIndex = 42859;

class CCDEILOILJB : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* ECPABAOIPAB; // 0x18
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x20
	::FGCOIBFFCHB* MDKJDDANKMP; // 0x28
	::CBCLGFEGHLJ_1<::MoleMole::UIMainCityMiniMenuButtonWidgetController*>* EKDCELDLOGH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCDEILOILJB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCDEILOILJB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCDEILOILJB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCDEILOILJB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
