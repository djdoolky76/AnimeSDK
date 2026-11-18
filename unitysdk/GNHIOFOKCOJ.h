#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIArpeggioCardWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class MEKABAIJMNM_1;

#define GNHIOFOKCOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17A07F30)
#define GNHIOFOKCOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17A07E40)
#define GNHIOFOKCOJ_LGGFOFDJABB_OFFSET UNITYSDK_OFFSET(0x17A07C60)
#define GNHIOFOKCOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17A07AE0)
#define GNHIOFOKCOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17A07F20)

inline static constexpr unsigned int GNHIOFOKCOJ_TypeDefinitionIndex = 81061;

class GNHIOFOKCOJ : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* GPNDLJKIBLP; // 0x18
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x20
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIArpeggioCardWidgetController*>*>* GNEGCNHDBCO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHIOFOKCOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GNHIOFOKCOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIArpeggioCardWidgetController*>*>* LGGFOFDJABB(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIArpeggioCardWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GNHIOFOKCOJ_LGGFOFDJABB_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GNHIOFOKCOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHIOFOKCOJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
