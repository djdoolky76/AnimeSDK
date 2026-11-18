#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define HCFELKHFJMB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17E34EA0)
#define HCFELKHFJMB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17E34DA0)
#define HCFELKHFJMB_LNNBEGNDOHL_OFFSET UNITYSDK_OFFSET(0x17E34BB0)
#define HCFELKHFJMB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17E34890)
#define HCFELKHFJMB__CTOR_OFFSET UNITYSDK_OFFSET(0x17E34E90)

inline static constexpr unsigned int HCFELKHFJMB_TypeDefinitionIndex = 79865;

class HCFELKHFJMB : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x20
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OEELDKLMFFJ; // 0x30
	::GCIMMDDIFBJ* DHINNAEKDPG; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* LAGANLOECDA; // 0x40
	::UnityEngine::RectTransform* JFDHDGDAJDH; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x50
	::ADEJAGFCBHK* CKBCJBHOOLM; // 0x58
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* FJPCAHJIAGA; // 0x60
	::UnityEngine::RectTransform* LPCFFMINPFF; // 0x68
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompRewardBtnGroupWidgetController*>* PPOLOFNCGJA; // 0x70
	::MoleMole::MonoGamepadModule* GDEEPNOOCFH; // 0x78
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFELKHFJMB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCFELKHFJMB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFELKHFJMB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCFELKHFJMB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* LNNBEGNDOHL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCFELKHFJMB_LNNBEGNDOHL_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
