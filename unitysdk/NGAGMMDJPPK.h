#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHollowCardItemBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class MEKABAIJMNM_1;

#define NGAGMMDJPPK_BLLMMGJOJEI_OFFSET UNITYSDK_OFFSET(0x137560D0)
#define NGAGMMDJPPK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13756340)
#define NGAGMMDJPPK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x137562B0)
#define NGAGMMDJPPK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13755F40)
#define NGAGMMDJPPK__CTOR_OFFSET UNITYSDK_OFFSET(0x13756330)

inline static constexpr unsigned int NGAGMMDJPPK_TypeDefinitionIndex = 40311;

class NGAGMMDJPPK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* BBDNNPLCCPF; // 0x18
	::UnityEngine::GameObject* MBJMAGHFLFO; // 0x20
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIHollowCardItemBtnWidgetController*>*>* AAFBPPGALLF; // 0x28
	::LGINJIKKBJA* JEAJALOHING; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGMMDJPPK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGAGMMDJPPK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGMMDJPPK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIHollowCardItemBtnWidgetController*>*>* BLLMMGJOJEI(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIHollowCardItemBtnWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGAGMMDJPPK_BLLMMGJOJEI_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGAGMMDJPPK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
