#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GBHJPGCJBLH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x116DCBB0)
#define GBHJPGCJBLH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x116DCAA0)
#define GBHJPGCJBLH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x116DC850)
#define GBHJPGCJBLH__CTOR_OFFSET UNITYSDK_OFFSET(0x116DCBA0)

inline static constexpr unsigned int GBHJPGCJBLH_TypeDefinitionIndex = 67619;

class GBHJPGCJBLH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HGBLGJLGMHE; // 0x18
	::UnityEngine::Animation* FLKLIOLANAO; // 0x20
	::UnityEngine::Transform* NGNBNKKHBPJ; // 0x28
	::UnityEngine::Transform* MFEKIGIPFBJ; // 0x30
	::UnityEngine::Transform* EKFNNJIKOPL; // 0x38
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x48
	::UnityEngine::GameObject* HMPNHFMMJBE; // 0x50
	::LGINJIKKBJA* CPDEFFDDBKO; // 0x58
	::UnityEngine::Transform* IHPCADGOEPA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHJPGCJBLH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GBHJPGCJBLH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GBHJPGCJBLH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHJPGCJBLH_KGEBDLGBGNM_OFFSET))(this);
	}
};
