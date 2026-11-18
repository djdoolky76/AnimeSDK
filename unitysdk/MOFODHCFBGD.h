#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEDOOAFOHEO.h"

class GIBMJLOJLKD;
class MOJKADGHBIP;
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIActivitySkinRewardV2WidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOFODHCFBGD_BNDKBJMBLNH_OFFSET UNITYSDK_OFFSET(0x11F63A40)
#define MOFODHCFBGD_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x11F63AC0)
#define MOFODHCFBGD_HHELGOMHFFF_OFFSET UNITYSDK_OFFSET(0x11F63B60)
#define MOFODHCFBGD_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x11F63890)
#define MOFODHCFBGD__CTOR_OFFSET UNITYSDK_OFFSET(0x11F63AB0)

inline static constexpr unsigned int MOFODHCFBGD_TypeDefinitionIndex = 44261;

class MOFODHCFBGD : public ::EEDOOAFOHEO
{
public:
	::MoleMole::UIActivitySkinRewardV2WidgetController* GIILEGOKFGH; // 0x38
	::UnityEngine::Transform* DIENOIBDBPL; // 0x40
	::MoleMole::UIActivityGuideInfoWidgetController* BKGLODAHBNK; // 0x48
	::MOJKADGHBIP* KMMKMGDHCOI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFODHCFBGD__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOFODHCFBGD_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOFODHCFBGD_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void BNDKBJMBLNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFODHCFBGD_BNDKBJMBLNH_OFFSET))(this);
	}

	::System::Void HHELGOMHFFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFODHCFBGD_HHELGOMHFFF_OFFSET))(this);
	}
};
