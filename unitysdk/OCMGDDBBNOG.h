#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJEMDDDGPG.h"

class GIBMJLOJLKD;
class MOJKADGHBIP;
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIActivitySkinRewardWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define OCMGDDBBNOG_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0xFB51320)
#define OCMGDDBBNOG_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0xFB51630)
#define OCMGDDBBNOG_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0xFB516C0)
#define OCMGDDBBNOG_IFDNPPCMFDJ_OFFSET UNITYSDK_OFFSET(0xFB513A0)
#define OCMGDDBBNOG_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0xFB50F30)
#define OCMGDDBBNOG__CTOR_OFFSET UNITYSDK_OFFSET(0xFB51620)

inline static constexpr unsigned int OCMGDDBBNOG_TypeDefinitionIndex = 89590;

class OCMGDDBBNOG : public ::KDJEMDDDGPG
{
public:
	::MoleMole::UIActivitySkinRewardWidgetController* JAMECCBCKEC; // 0x30
	::UnityEngine::Transform* CDAMHHDGCBO; // 0x38
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x40
	::MoleMole::UIActivityGuideInfoWidgetController* PGJPEEDEODO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMGDDBBNOG__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + OCMGDDBBNOG_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + OCMGDDBBNOG_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + OCMGDDBBNOG_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void IFDNPPCMFDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMGDDBBNOG_IFDNPPCMFDJ_OFFSET))(this);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + OCMGDDBBNOG_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
