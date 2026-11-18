#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIBallGameInLevelCollectBulletWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class CBCLGFEGHLJ_1;

#define PIBIILEBGIP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C1D5E90)
#define PIBIILEBGIP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C1D5DE0)
#define PIBIILEBGIP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C1D5C60)
#define PIBIILEBGIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D5E80)

inline static constexpr unsigned int PIBIILEBGIP_TypeDefinitionIndex = 76377;

class PIBIILEBGIP : public ::GIBMJLOJLKD
{
public:
	::CBCLGFEGHLJ_1<::MoleMole::UIBallGameInLevelCollectBulletWidgetController*>* IOGNAPIIHMB; // 0x18
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBIILEBGIP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIBIILEBGIP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIBIILEBGIP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBIILEBGIP_KGEBDLGBGNM_OFFSET))(this);
	}
};
