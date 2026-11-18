#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CJAHBACLCHK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1154FA50)
#define CJAHBACLCHK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1154F980)
#define CJAHBACLCHK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1154F7B0)
#define CJAHBACLCHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1154FA40)

inline static constexpr unsigned int CJAHBACLCHK_TypeDefinitionIndex = 65349;

class CJAHBACLCHK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* NFCOMMMMCIN; // 0x18
	::UnityEngine::GameObject* POJEBOKBLHN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x28
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x30
	::LGINJIKKBJA* KEMJHCLLAMH; // 0x38
	::UnityEngine::GameObject* ALHMGMODEOH; // 0x40
	::UnityEngine::Animation* NDIOCEGELLJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAHBACLCHK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJAHBACLCHK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAHBACLCHK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJAHBACLCHK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
