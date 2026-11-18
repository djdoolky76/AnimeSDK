#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJEMDDDGPG.h"

class GIBMJLOJLKD;
class MOJKADGHBIP;
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIActivityPinkTeleportWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace UnityEngine { class Transform; }

#define HIGABCGKGGI_AAAPHGPPGNI_OFFSET UNITYSDK_OFFSET(0x140B7600)
#define HIGABCGKGGI_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x140B7330)
#define HIGABCGKGGI_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x140B7080)
#define HIGABCGKGGI_FHGMNHFHHCD_OFFSET UNITYSDK_OFFSET(0x140B7450)
#define HIGABCGKGGI_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x140B7650)
#define HIGABCGKGGI_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x140B74D0)
#define HIGABCGKGGI_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x140B70F0)
#define HIGABCGKGGI_MEBHLMFEEIP_OFFSET UNITYSDK_OFFSET(0x140B7570)
#define HIGABCGKGGI__CTOR_OFFSET UNITYSDK_OFFSET(0x140B74C0)

inline static constexpr unsigned int HIGABCGKGGI_TypeDefinitionIndex = 38457;

class HIGABCGKGGI : public ::KDJEMDDDGPG
{
public:
	::UnityEngine::Transform* NLHPGEPJMJC; // 0x30
	::MoleMole::UIActivityGuideInfoWidgetController* BKGLODAHBNK; // 0x38
	::MoleMole::UIActivityPinkTeleportWidgetController* DBPMPFBMOON; // 0x40
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGABCGKGGI__CTOR_OFFSET))(this);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + HIGABCGKGGI_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + HIGABCGKGGI_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void FHGMNHFHHCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGABCGKGGI_FHGMNHFHHCD_OFFSET))(this);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + HIGABCGKGGI_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MEBHLMFEEIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGABCGKGGI_MEBHLMFEEIP_OFFSET))(this);
	}

	::System::Void ABDLEONNPAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGABCGKGGI_ABDLEONNPAJ_OFFSET))(this);
	}

	::System::Void AAAPHGPPGNI(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HIGABCGKGGI_AAAPHGPPGNI_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + HIGABCGKGGI_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}
};
