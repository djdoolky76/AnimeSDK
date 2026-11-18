#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DPJAAFDMMEI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13490B20)
#define DPJAAFDMMEI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13490A00)
#define DPJAAFDMMEI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13490750)
#define DPJAAFDMMEI__CTOR_OFFSET UNITYSDK_OFFSET(0x13490B10)

inline static constexpr unsigned int DPJAAFDMMEI_TypeDefinitionIndex = 55403;

class DPJAAFDMMEI : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* MDGPMAGNCOM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::UnityEngine::GameObject* FAPJNOOAOMI; // 0x28
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x30
	::FGCOIBFFCHB* DPGBIANNGPG; // 0x38
	::GCIMMDDIFBJ* EGCFCEIIBDE; // 0x40
	::LGINJIKKBJA* IMBNMGDNLEF; // 0x48
	::UnityEngine::GameObject* DEAPLILJLJD; // 0x50
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x58
	::FGCOIBFFCHB* FCOCNDLFIKE; // 0x60
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJAAFDMMEI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPJAAFDMMEI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJAAFDMMEI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPJAAFDMMEI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
