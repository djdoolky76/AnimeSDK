#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIDragComponent;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CFBFBCHDLFN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18DCBDC0)
#define CFBFBCHDLFN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18DCBC60)
#define CFBFBCHDLFN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18DCB960)
#define CFBFBCHDLFN__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCBDB0)

inline static constexpr unsigned int CFBFBCHDLFN_TypeDefinitionIndex = 55264;

class CFBFBCHDLFN : public ::GIBMJLOJLKD
{
public:
	::UIDragComponent* NFEHNHFLPOH; // 0x18
	::UnityEngine::GameObject* PJEMEECKONE; // 0x20
	::UnityEngine::GameObject* CFIIKHBHHCG; // 0x28
	::UnityEngine::UI::SmoothMask* DFDBGBDKGGI; // 0x30
	::UnityEngine::GameObject* KDENFANHNPI; // 0x38
	::FGCOIBFFCHB* IIJPIBIHEHM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* CHFEDONOMMG; // 0x48
	::UnityEngine::GameObject* HIKNPAOENBG; // 0x50
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x58
	::UnityEngine::GameObject* EECGBEDBKED; // 0x60
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x68
	::FGCOIBFFCHB* FHMDDJELGLD; // 0x70
	::FGCOIBFFCHB* CMHCFHJBGOP; // 0x78
	::UnityEngine::RectTransform* EOPNIMNGCAC; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* MDHHGDLPNFG; // 0x88
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBFBCHDLFN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFBFBCHDLFN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFBFBCHDLFN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBFBCHDLFN_KGEBDLGBGNM_OFFSET))(this);
	}
};
