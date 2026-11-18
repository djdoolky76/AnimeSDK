#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
class UIDragComponent;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class SmoothMask; }

#define ILHILFJNIFH_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x13C9B200)
#define ILHILFJNIFH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13C9B280)
#define ILHILFJNIFH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13C9B070)
#define ILHILFJNIFH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C9AD80)
#define ILHILFJNIFH_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x13C9B320)
#define ILHILFJNIFH__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9B270)

inline static constexpr unsigned int ILHILFJNIFH_TypeDefinitionIndex = 39991;

class ILHILFJNIFH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* NOIKCCIFMOF; // 0x18
	::UIDragComponent* AJMDIJEJCEA; // 0x20
	::UnityEngine::GameObject* BFBMGJEIOEB; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::GameObject* CFIIKHBHHCG; // 0x38
	::FGCOIBFFCHB* CMHCFHJBGOP; // 0x40
	::UnityEngine::GameObject* GMGBIBJBIJO; // 0x48
	::FGCOIBFFCHB* IPHHKNKIJOA; // 0x50
	::UnityEngine::GameObject* HIKNPAOENBG; // 0x58
	::UIControllerExtensionData* NHPCCIFGOBF; // 0x60
	::FGCOIBFFCHB* OCNMJCOFPGA; // 0x68
	::FGCOIBFFCHB* HIINJHJDEPP; // 0x70
	::UnityEngine::UI::SmoothMask* DFDBGBDKGGI; // 0x78
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x80
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHILFJNIFH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILHILFJNIFH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + ILHILFJNIFH_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILHILFJNIFH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + ILHILFJNIFH_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHILFJNIFH_KGEBDLGBGNM_OFFSET))(this);
	}
};
