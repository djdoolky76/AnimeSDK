#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define PHHMPEALLMP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C1D4BA0)
#define PHHMPEALLMP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C1D49F0)
#define PHHMPEALLMP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C1D46A0)
#define PHHMPEALLMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D4B90)

inline static constexpr unsigned int PHHMPEALLMP_TypeDefinitionIndex = 78074;

class PHHMPEALLMP : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* NFKOJMPEIBE; // 0x18
	::LGINJIKKBJA* HOPMOOGAMHK; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* IHNAOJKCOIA; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompRewardBtnGroupWidgetController*>* PPOLOFNCGJA; // 0x38
	::KNLFLMMHALL_1<::System::Object*>* FDOGGANACAP; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIGeneralBtn03WidgetController*>* CNEMGKPCIBB; // 0x48
	::KNLFLMMHALL_1<::System::Object*>* EMDLDPJPPCE; // 0x50
	::KNLFLMMHALL_1<::System::Object*>* IIDHBMOMIMP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHMPEALLMP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHHMPEALLMP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHMPEALLMP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHHMPEALLMP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
