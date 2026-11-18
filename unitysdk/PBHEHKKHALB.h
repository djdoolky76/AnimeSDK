#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJEMDDDGPG.h"

class CJIEIHEDMME;
class GIBMJLOJLKD;
class MOJKADGHBIP;
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIActivityTrainingH5WidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define PBHEHKKHALB_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x178AEE90)
#define PBHEHKKHALB_FHFADMFLFKD_OFFSET UNITYSDK_OFFSET(0x178AF1E0)
#define PBHEHKKHALB_FHGMNHFHHCD_OFFSET UNITYSDK_OFFSET(0x178AEF50)
#define PBHEHKKHALB_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x178AF0B0)
#define PBHEHKKHALB_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x178AF140)
#define PBHEHKKHALB_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x178AEBE0)
#define PBHEHKKHALB_MEBHLMFEEIP_OFFSET UNITYSDK_OFFSET(0x178AF020)
#define PBHEHKKHALB_PFEIFCKANAK_OFFSET UNITYSDK_OFFSET(0x178AED90)
#define PBHEHKKHALB__CTOR_OFFSET UNITYSDK_OFFSET(0x178AF010)

inline static constexpr unsigned int PBHEHKKHALB_TypeDefinitionIndex = 50700;

class PBHEHKKHALB : public ::KDJEMDDDGPG
{
public:
	::MoleMole::UIActivityGuideInfoWidgetController* PGJPEEDEODO; // 0x30
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x38
	::MoleMole::UIActivityTrainingH5WidgetController* FPPPIIFJOBO; // 0x40
	::UnityEngine::Transform* LLFEMMDCAAF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHEHKKHALB__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + PBHEHKKHALB_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + PBHEHKKHALB_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void FHGMNHFHHCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHEHKKHALB_FHGMNHFHHCD_OFFSET))(this);
	}

	::System::Void MEBHLMFEEIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHEHKKHALB_MEBHLMFEEIP_OFFSET))(this);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + PBHEHKKHALB_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + PBHEHKKHALB_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void FHFADMFLFKD(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + PBHEHKKHALB_FHFADMFLFKD_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void PFEIFCKANAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHEHKKHALB_PFEIFCKANAK_OFFSET))(this);
	}
};
