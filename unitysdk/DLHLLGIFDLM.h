#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define DLHLLGIFDLM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x124202A0)
#define DLHLLGIFDLM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12420140)
#define DLHLLGIFDLM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1241FEA0)
#define DLHLLGIFDLM__CTOR_OFFSET UNITYSDK_OFFSET(0x12420290)

inline static constexpr unsigned int DLHLLGIFDLM_TypeDefinitionIndex = 53407;

class DLHLLGIFDLM : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* ANCAPPBAAHG; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* FDLLDCJADAB; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* BLEONJCBJME; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* CMIOIKFAOPF; // 0x38
	::UnityEngine::RectTransform* EHMLMJKEJMM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HMBAEGDOIKA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHLLGIFDLM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLHLLGIFDLM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHLLGIFDLM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLHLLGIFDLM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
