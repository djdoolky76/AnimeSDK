#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define HHHHCNFLLCP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x101049C0)
#define HHHHCNFLLCP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x101048D0)
#define HHHHCNFLLCP_LAFDJAMFHPC_OFFSET UNITYSDK_OFFSET(0x101046F0)
#define HHHHCNFLLCP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x101044C0)
#define HHHHCNFLLCP__CTOR_OFFSET UNITYSDK_OFFSET(0x101049B0)

inline static constexpr unsigned int HHHHCNFLLCP_TypeDefinitionIndex = 66307;

class HHHHCNFLLCP : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* EFCDHKMLBBA; // 0x18
	::LGINJIKKBJA* PKMGBLHGHFG; // 0x20
	::UnityEngine::RectTransform* KILLDPGLBPH; // 0x28
	::UnityEngine::Animation* KCILDMNCGDN; // 0x30
	::UnityEngine::RectTransform* DIOFALFGDIE; // 0x38
	::UnityEngine::RectTransform* KGIIMNHPCNJ; // 0x40
	::UnityEngine::Animation* PEPAEEBAFJE; // 0x48
	::FGCOIBFFCHB* IKOFJEHPPAN; // 0x50
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHHCNFLLCP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHHHCNFLLCP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHHCNFLLCP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHHHCNFLLCP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* LAFDJAMFHPC(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHHHCNFLLCP_LAFDJAMFHPC_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
