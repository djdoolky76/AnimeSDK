#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEDOOAFOHEO.h"

class GIBMJLOJLKD;
class MOJKADGHBIP;
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICoreRewardComponentWidgetController; }

#define JHAMKPPPECL_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x18A14D20)
#define JHAMKPPPECL_BNDKBJMBLNH_OFFSET UNITYSDK_OFFSET(0x18A14C90)
#define JHAMKPPPECL_EABPCCMAMLH_OFFSET UNITYSDK_OFFSET(0x18A15180)
#define JHAMKPPPECL_FHGMNHFHHCD_OFFSET UNITYSDK_OFFSET(0x18A14DB0)
#define JHAMKPPPECL_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x18A15050)
#define JHAMKPPPECL_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x18A150E0)
#define JHAMKPPPECL_HHELGOMHFFF_OFFSET UNITYSDK_OFFSET(0x18A14E40)
#define JHAMKPPPECL_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x18A14B80)
#define JHAMKPPPECL_MEBHLMFEEIP_OFFSET UNITYSDK_OFFSET(0x18A151D0)
#define JHAMKPPPECL__CTOR_OFFSET UNITYSDK_OFFSET(0x18A14E30)

inline static constexpr unsigned int JHAMKPPPECL_TypeDefinitionIndex = 90250;

class JHAMKPPPECL : public ::EEDOOAFOHEO
{
public:
	::MoleMole::UIActivityGuideInfoWidgetController* BKGLODAHBNK; // 0x38
	::MoleMole::UICoreRewardComponentWidgetController* LCFOMKGBCOO; // 0x40
	::MOJKADGHBIP* KMMKMGDHCOI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAMKPPPECL__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + JHAMKPPPECL_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + JHAMKPPPECL_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void FHGMNHFHHCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAMKPPPECL_FHGMNHFHHCD_OFFSET))(this);
	}

	::System::Void BNDKBJMBLNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAMKPPPECL_BNDKBJMBLNH_OFFSET))(this);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + JHAMKPPPECL_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + JHAMKPPPECL_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void HHELGOMHFFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAMKPPPECL_HHELGOMHFFF_OFFSET))(this);
	}

	::System::Void EABPCCMAMLH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAMKPPPECL_EABPCCMAMLH_OFFSET))(this);
	}

	::System::Void MEBHLMFEEIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAMKPPPECL_MEBHLMFEEIP_OFFSET))(this);
	}
};
