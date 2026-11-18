#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define HEPMLJDFHNH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11011270)
#define HEPMLJDFHNH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x110111A0)
#define HEPMLJDFHNH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11010F70)
#define HEPMLJDFHNH__CTOR_OFFSET UNITYSDK_OFFSET(0x11011260)

inline static constexpr unsigned int HEPMLJDFHNH_TypeDefinitionIndex = 47421;

class HEPMLJDFHNH : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* OHKECEONILF; // 0x18
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* FMEOCBFIEPI; // 0x30
	::UnityEngine::RectTransform* IOMHPOEIAEG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPMLJDFHNH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEPMLJDFHNH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPMLJDFHNH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEPMLJDFHNH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
