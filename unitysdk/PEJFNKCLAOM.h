#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralRewardListBtnWidgetController; }
namespace MoleMole { class UIMiniUIGameLevelSelectWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class MEKABAIJMNM_1;

#define PEJFNKCLAOM_DEJPFFNNNFM_OFFSET UNITYSDK_OFFSET(0x1B9D3560)
#define PEJFNKCLAOM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B9D37C0)
#define PEJFNKCLAOM_GJHFGBHLJJM_OFFSET UNITYSDK_OFFSET(0x1B9D3380)
#define PEJFNKCLAOM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B9D36B0)
#define PEJFNKCLAOM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B9D3170)
#define PEJFNKCLAOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D37B0)

inline static constexpr unsigned int PEJFNKCLAOM_TypeDefinitionIndex = 50062;

class PEJFNKCLAOM : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIGeneralRewardListBtnWidgetController*>* DNGFGABBHEG; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* EKPPKBCGLAM; // 0x20
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x28
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x30
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIMiniUIGameLevelSelectWidgetController*>*>* PGNJICIHOHH; // 0x38
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFNKCLAOM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEJFNKCLAOM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* DEJPFFNNNFM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEJFNKCLAOM_DEJPFFNNNFM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFNKCLAOM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEJFNKCLAOM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIMiniUIGameLevelSelectWidgetController*>*>* GJHFGBHLJJM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIMiniUIGameLevelSelectWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEJFNKCLAOM_GJHFGBHLJJM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
