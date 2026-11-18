#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
template <typename T> class CBCLGFEGHLJ_1;

#define HJMNKFIMBMB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CF5A10)
#define HJMNKFIMBMB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16CF58F0)
#define HJMNKFIMBMB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CF56C0)
#define HJMNKFIMBMB__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF5A00)

inline static constexpr unsigned int HJMNKFIMBMB_TypeDefinitionIndex = 65589;

class HJMNKFIMBMB : public ::GIBMJLOJLKD
{
public:
	::CBCLGFEGHLJ_1<::MoleMole::UIZenkovItemIconBtnWidgetController*>* BGBFELAHCNF; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::CBCLGFEGHLJ_1<::MoleMole::UIZenkovItemIconBtnWidgetController*>* IKEDNIPDFEG; // 0x28
	::CBCLGFEGHLJ_1<::MoleMole::UIZenkovItemIconBtnWidgetController*>* CBIHJNLBOHF; // 0x30
	::CBCLGFEGHLJ_1<::MoleMole::UIZenkovItemIconBtnWidgetController*>* MHFKOOHIIGN; // 0x38
	::MoleMole::MonoGamepadModule* JNIAEBKPLBP; // 0x40
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMNKFIMBMB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJMNKFIMBMB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJMNKFIMBMB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMNKFIMBMB_KGEBDLGBGNM_OFFSET))(this);
	}
};
