#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace UnityEngine { class RectTransform; }
template <typename T> class MEKABAIJMNM_1;

#define FBGPCHDKBIG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF9EFF80)
#define FBGPCHDKBIG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF9EFED0)
#define FBGPCHDKBIG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF9EFD20)
#define FBGPCHDKBIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF9EFF70)

inline static constexpr unsigned int FBGPCHDKBIG_TypeDefinitionIndex = 91977;

class FBGPCHDKBIG : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIGeneralBtn03WidgetController*>* CNEMGKPCIBB; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::LGINJIKKBJA* KBCLEFAKGHE; // 0x28
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGPCHDKBIG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBGPCHDKBIG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGPCHDKBIG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBGPCHDKBIG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
