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
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KGOGGBMFGNP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x157EC180)
#define KGOGGBMFGNP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x157EC010)
#define KGOGGBMFGNP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x157EBCE0)
#define KGOGGBMFGNP__CTOR_OFFSET UNITYSDK_OFFSET(0x157EC170)

inline static constexpr unsigned int KGOGGBMFGNP_TypeDefinitionIndex = 81544;

class KGOGGBMFGNP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* NMNMCIGILJN; // 0x18
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x20
	::UnityEngine::GameObject* DEAPLILJLJD; // 0x28
	::GCIMMDDIFBJ* EGCFCEIIBDE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MCJKDBEDPBJ; // 0x38
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x48
	::GCIMMDDIFBJ* MDGPMAGNCOM; // 0x50
	::FGCOIBFFCHB* DPGBIANNGPG; // 0x58
	::UnityEngine::RectTransform* BJHPNJKHFAL; // 0x60
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x68
	::FGCOIBFFCHB* FCOCNDLFIKE; // 0x70
	::FGCOIBFFCHB* NFJAFKGOIBN; // 0x78
	::UnityEngine::GameObject* FAPJNOOAOMI; // 0x80
	::LGINJIKKBJA* IMBNMGDNLEF; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOGGBMFGNP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGOGGBMFGNP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGOGGBMFGNP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOGGBMFGNP_KGEBDLGBGNM_OFFSET))(this);
	}
};
