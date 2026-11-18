#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NPBFHKHPPMC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xED4DF30)
#define NPBFHKHPPMC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xED4DE10)
#define NPBFHKHPPMC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xED4DB60)
#define NPBFHKHPPMC__CTOR_OFFSET UNITYSDK_OFFSET(0xED4DF20)

inline static constexpr unsigned int NPBFHKHPPMC_TypeDefinitionIndex = 38810;

class NPBFHKHPPMC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::UnityEngine::GameObject* IMDABAJIJCH; // 0x20
	::UnityEngine::GameObject* LBMPDPJKNJH; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::RectTransform* EIGMENANNJH; // 0x38
	::MoleMole::NotificationBadge* HFCOKPBMGGA; // 0x40
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x48
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x50
	::FGCOIBFFCHB* OEFMINBLAGB; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* CPFPGDMBHNL; // 0x60
	::FGCOIBFFCHB* KKMCLPDAJKJ; // 0x68
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x70
	::MoleMole::NotificationBadgeEx* CCLCCFDOFBO; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBFHKHPPMC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPBFHKHPPMC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPBFHKHPPMC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBFHKHPPMC_KGEBDLGBGNM_OFFSET))(this);
	}
};
