#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define COOKBDGLOBG_DGHJGLOCCAE_OFFSET UNITYSDK_OFFSET(0x16886CE0)
#define COOKBDGLOBG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16886F20)
#define COOKBDGLOBG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16886E90)
#define COOKBDGLOBG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16886AE0)
#define COOKBDGLOBG__CTOR_OFFSET UNITYSDK_OFFSET(0x16886F10)

inline static constexpr unsigned int COOKBDGLOBG_TypeDefinitionIndex = 72565;

class COOKBDGLOBG : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* BNKEEHDFLAG; // 0x18
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x20
	::GCIMMDDIFBJ* IBLFECINIOI; // 0x28
	::UnityEngine::RectTransform* FBLDNPFLAED; // 0x30
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x38
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COOKBDGLOBG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COOKBDGLOBG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* DGHJGLOCCAE(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COOKBDGLOBG_DGHJGLOCCAE_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COOKBDGLOBG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COOKBDGLOBG_KGEBDLGBGNM_OFFSET))(this);
	}
};
