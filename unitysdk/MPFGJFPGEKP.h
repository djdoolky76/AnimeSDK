#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
template <typename T> class KNLFLMMHALL_1;

#define MPFGJFPGEKP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11A30C40)
#define MPFGJFPGEKP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11A30B90)
#define MPFGJFPGEKP_MHHGEJIALKI_OFFSET UNITYSDK_OFFSET(0x11A309A0)
#define MPFGJFPGEKP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11A307F0)
#define MPFGJFPGEKP__CTOR_OFFSET UNITYSDK_OFFSET(0x11A30C30)

inline static constexpr unsigned int MPFGJFPGEKP_TypeDefinitionIndex = 79691;

class MPFGJFPGEKP : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* PGILAJEMAFH; // 0x18
	::LGINJIKKBJA* OKGBOAENDNC; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28
	::UnityEngine::RectTransform* HPDMBJFALNM; // 0x30
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFGJFPGEKP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPFGJFPGEKP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPFGJFPGEKP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* MHHGEJIALKI(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPFGJFPGEKP_MHHGEJIALKI_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFGJFPGEKP_KGEBDLGBGNM_OFFSET))(this);
	}
};
