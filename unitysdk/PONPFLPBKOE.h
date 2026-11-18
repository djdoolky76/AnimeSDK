#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"
#include "unitysdk/OEFENONCHCI.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIShareBtnWidgetController; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define PONPFLPBKOE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1BF365B0)
#define PONPFLPBKOE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1BF364E0)
#define PONPFLPBKOE_KKAPLNDKFCB_OFFSET UNITYSDK_OFFSET(0x1BF36650)
#define PONPFLPBKOE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1BF36310)
#define PONPFLPBKOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF365A0)

inline static constexpr unsigned int PONPFLPBKOE_TypeDefinitionIndex = 42603;

class PONPFLPBKOE : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* PDACHPLBKIE; // 0x18
	::LGINJIKKBJA* EGKGPAHJGFN; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIShareBtnWidgetController*>* KOFDFMEEENM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PONPFLPBKOE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PONPFLPBKOE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PONPFLPBKOE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PONPFLPBKOE_KGEBDLGBGNM_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* KKAPLNDKFCB(::OEFENONCHCI IAHNMKAEPON)
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID, ::OEFENONCHCI))((::PBYTE)hIl2Cpp + PONPFLPBKOE_KKAPLNDKFCB_OFFSET))(this, IAHNMKAEPON);
	}
};
