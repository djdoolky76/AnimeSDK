#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIVHSStoreWidgetWidgetController; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define NJLLKLBBKOE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16B82AA0)
#define NJLLKLBBKOE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16B82940)
#define NJLLKLBBKOE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16B82730)
#define NJLLKLBBKOE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B82A90)

inline static constexpr unsigned int NJLLKLBBKOE_TypeDefinitionIndex = 45330;

class NJLLKLBBKOE : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIVHSStoreWidgetWidgetController*>* NGLDKIHFCLO; // 0x18
	::LGINJIKKBJA* LOGANJHLHAM; // 0x20
	::LGINJIKKBJA* BKDDKDMILCA; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* PFAHOBHKEJG; // 0x30
	::LGINJIKKBJA* MEPOKOBFJIF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLLKLBBKOE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NJLLKLBBKOE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLLKLBBKOE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NJLLKLBBKOE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
