#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIOverlordFeastLevelWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define DPGKJHDALOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13E69960)
#define DPGKJHDALOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13E69870)
#define DPGKJHDALOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13E696C0)
#define DPGKJHDALOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13E69950)

inline static constexpr unsigned int DPGKJHDALOJ_TypeDefinitionIndex = 45074;

class DPGKJHDALOJ : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* PPMEMDEKAHL; // 0x18
	::LGINJIKKBJA* BKDDKDMILCA; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIOverlordFeastLevelWidgetController*>* DLKBLGMFHIP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGKJHDALOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPGKJHDALOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGKJHDALOJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPGKJHDALOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
