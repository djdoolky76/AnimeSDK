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

#define JIOIACGGHPP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B289D0)
#define JIOIACGGHPP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17B28870)
#define JIOIACGGHPP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B285D0)
#define JIOIACGGHPP__CTOR_OFFSET UNITYSDK_OFFSET(0x17B289C0)

inline static constexpr unsigned int JIOIACGGHPP_TypeDefinitionIndex = 89101;

class JIOIACGGHPP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::FGCOIBFFCHB* NMNMCIGILJN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x30
	::LGINJIKKBJA* BLIKEMLDOCL; // 0x38
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x40
	::LGINJIKKBJA* KEMJHCLLAMH; // 0x48
	::FGCOIBFFCHB* MPNGIAIPCKN; // 0x50
	::GCIMMDDIFBJ* DHCKPIBEKNB; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x60
	::UnityEngine::Transform* LLDNBCLFNBJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOIACGGHPP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIOIACGGHPP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOIACGGHPP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIOIACGGHPP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
