#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define EPDDJKDNCOO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1418C290)
#define EPDDJKDNCOO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1418C200)
#define EPDDJKDNCOO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1418BF90)
#define EPDDJKDNCOO__CTOR_OFFSET UNITYSDK_OFFSET(0x1418C280)

inline static constexpr unsigned int EPDDJKDNCOO_TypeDefinitionIndex = 68008;

class EPDDJKDNCOO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* EHANLMBGMGJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* CGKOIBMEAFH; // 0x20
	::ADEJAGFCBHK* FJPCAHJIAGA; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::UI::Extension::UITabButton* AOKGIEJJPPF; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* PAIDJLAIHNE; // 0x40
	::UnityEngine::Transform* MBKACMJJMBH; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* LIMIILILKCO; // 0x50
	::UnityEngine::UI::Extension::UITabButton* IHACIKBJCGE; // 0x58
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* JCEHKFKPGKB; // 0x68
	::MoleMole::MonoGamepadNestedListDelegate* GMEHKPLALGJ; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDDJKDNCOO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPDDJKDNCOO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDDJKDNCOO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPDDJKDNCOO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
