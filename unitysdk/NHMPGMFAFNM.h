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

#define NHMPGMFAFNM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16B7ECA0)
#define NHMPGMFAFNM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16B7EAB0)
#define NHMPGMFAFNM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16B7E720)
#define NHMPGMFAFNM__CTOR_OFFSET UNITYSDK_OFFSET(0x16B7EC90)

inline static constexpr unsigned int NHMPGMFAFNM_TypeDefinitionIndex = 65312;

class NHMPGMFAFNM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* IAPHAMFGIDG; // 0x18
	::UnityEngine::GameObject* LGNFNMAOHPP; // 0x20
	::LGINJIKKBJA* LJKCACPMAPC; // 0x28
	::FGCOIBFFCHB* BAEHDLDKDNP; // 0x30
	::UnityEngine::Transform* NLGMHLKJPMO; // 0x38
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x40
	::UnityEngine::Transform* EHMLMJKEJMM; // 0x48
	::LGINJIKKBJA* OAIBNCJHGHO; // 0x50
	::GCIMMDDIFBJ* KOCAHFMIGDO; // 0x58
	::LGINJIKKBJA* BKOCHIFODEH; // 0x60
	::FGCOIBFFCHB* FCNCCKPPFBG; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* MAMONMAINNA; // 0x70
	::UnityEngine::Transform* KBBEMJCNEKG; // 0x78
	::LGINJIKKBJA* EHANLMBGMGJ; // 0x80
	::FGCOIBFFCHB* JMNCLPFJCAD; // 0x88
	::UnityEngine::GameObject* JBLDDPMHNFC; // 0x90
	::FGCOIBFFCHB* FMHFIHMHNAJ; // 0x98
	::UnityEngine::UI::Extension::UILocalizationText* CGKOIBMEAFH; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMPGMFAFNM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHMPGMFAFNM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHMPGMFAFNM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMPGMFAFNM_KGEBDLGBGNM_OFFSET))(this);
	}
};
