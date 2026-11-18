#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCityMiniMenuButtonWidgetController; }
namespace UnityEngine { class Transform; }
template <typename T> class CBCLGFEGHLJ_1;

#define FPEGKHPACID_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x156D2DC0)
#define FPEGKHPACID_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x156D2D10)
#define FPEGKHPACID_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x156D2B30)
#define FPEGKHPACID__CTOR_OFFSET UNITYSDK_OFFSET(0x156D2DB0)

inline static constexpr unsigned int FPEGKHPACID_TypeDefinitionIndex = 90135;

class FPEGKHPACID : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* BMCNMANNEGL; // 0x18
	::CBCLGFEGHLJ_1<::MoleMole::UIMainCityMiniMenuButtonWidgetController*>* EKDCELDLOGH; // 0x20
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x28
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEGKHPACID__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPEGKHPACID_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEGKHPACID_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPEGKHPACID_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
