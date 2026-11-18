#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LNFFHNCNOAK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18510E60)
#define LNFFHNCNOAK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18510D60)
#define LNFFHNCNOAK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18510A80)
#define LNFFHNCNOAK__CTOR_OFFSET UNITYSDK_OFFSET(0x18510E50)

inline static constexpr unsigned int LNFFHNCNOAK_TypeDefinitionIndex = 66935;

class LNFFHNCNOAK : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HPFDFAKOAGN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KCCAJNCEPJB; // 0x20
	::FGCOIBFFCHB* KIGMGMEEKFC; // 0x28
	::UnityEngine::GameObject* IHGOBCEDPAO; // 0x30
	::FGCOIBFFCHB* GCLAMJHMDDJ; // 0x38
	::FGCOIBFFCHB* LKPICEPBIKE; // 0x40
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x50
	::UnityEngine::GameObject* NOFCCGPPFGD; // 0x58
	::UnityEngine::GameObject* GIEPFLLIJHO; // 0x60
	::UnityEngine::GameObject* PBNJFIJBIGJ; // 0x68
	::UnityEngine::GameObject* CNKJHFLLPDI; // 0x70
	::UnityEngine::Transform* MNPAKJLEMKH; // 0x78
	::UnityEngine::GameObject* FFDFJNLJHJJ; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFFHNCNOAK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNFFHNCNOAK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNFFHNCNOAK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFFHNCNOAK_KGEBDLGBGNM_OFFSET))(this);
	}
};
