#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FILAGJIJLHG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x174FE6B0)
#define FILAGJIJLHG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x174FE590)
#define FILAGJIJLHG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x174FE2A0)
#define FILAGJIJLHG__CTOR_OFFSET UNITYSDK_OFFSET(0x174FE6A0)

inline static constexpr unsigned int FILAGJIJLHG_TypeDefinitionIndex = 82322;

class FILAGJIJLHG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* LDNAGLDHFOF; // 0x28
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HCOHONOBCEF; // 0x38
	::FGCOIBFFCHB* AODKJAMJLCF; // 0x40
	::FGCOIBFFCHB* PBBHIOABJLP; // 0x48
	::FGCOIBFFCHB* GFLEPFOCFKF; // 0x50
	::UnityEngine::GameObject* LBMPDPJKNJH; // 0x58
	::LGINJIKKBJA* FDDAMLEALPJ; // 0x60
	::FILNFMCNCFE* NKCACMAAHIK; // 0x68
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x70
	::GCIMMDDIFBJ* GIEIMNEBMID; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILAGJIJLHG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FILAGJIJLHG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FILAGJIJLHG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILAGJIJLHG_KGEBDLGBGNM_OFFSET))(this);
	}
};
