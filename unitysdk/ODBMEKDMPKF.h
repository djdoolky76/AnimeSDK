#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define ODBMEKDMPKF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16BFB470)
#define ODBMEKDMPKF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16BFB3C0)
#define ODBMEKDMPKF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BFB220)
#define ODBMEKDMPKF__CTOR_OFFSET UNITYSDK_OFFSET(0x16BFB460)

inline static constexpr unsigned int ODBMEKDMPKF_TypeDefinitionIndex = 57001;

class ODBMEKDMPKF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x20
	::UnityEngine::RectTransform* HFNMAFENJDH; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::UI::Extension::UITabButton* KHOJKFHFKIJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBMEKDMPKF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODBMEKDMPKF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBMEKDMPKF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODBMEKDMPKF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
