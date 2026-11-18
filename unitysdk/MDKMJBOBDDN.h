#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEDOOAFOHEO.h"

class AOJKLCGGPAK;
class CJIEIHEDMME;
class GIBMJLOJLKD;
class MOJKADGHBIP;
namespace MoleMole { class UIActivityCompMainStoryRewardWidgetController; }
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MDKMJBOBDDN_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x18529AF0)
#define MDKMJBOBDDN_ELBLEOLNDHA_OFFSET UNITYSDK_OFFSET(0x18529DC0)
#define MDKMJBOBDDN_FHFADMFLFKD_OFFSET UNITYSDK_OFFSET(0x18529E90)
#define MDKMJBOBDDN_FHICJELJCOK_OFFSET UNITYSDK_OFFSET(0x18529A30)
#define MDKMJBOBDDN_FOKHJJAPKFO_OFFSET UNITYSDK_OFFSET(0x1852A240)
#define MDKMJBOBDDN_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x1852A1B0)
#define MDKMJBOBDDN_HDKONLPBANE_OFFSET UNITYSDK_OFFSET(0x1852A110)
#define MDKMJBOBDDN_JFDADKAFNGP_OFFSET UNITYSDK_OFFSET(0x18529B70)
#define MDKMJBOBDDN_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x18529820)
#define MDKMJBOBDDN_LICECDBFIPH_OFFSET UNITYSDK_OFFSET(0x18529EF0)
#define MDKMJBOBDDN__CTOR_OFFSET UNITYSDK_OFFSET(0x18529E80)

inline static constexpr unsigned int MDKMJBOBDDN_TypeDefinitionIndex = 88007;

class MDKMJBOBDDN : public ::EEDOOAFOHEO
{
public:
	::AOJKLCGGPAK* HLPENFPKOPC; // 0x38
	::UnityEngine::Transform* JMBFJCPNMPE; // 0x40
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x48
	::MoleMole::UIActivityGuideInfoWidgetController* PGJPEEDEODO; // 0x50
	::MoleMole::UIActivityCompMainStoryRewardWidgetController* KKFMAKPJBOF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKMJBOBDDN__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MDKMJBOBDDN_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MDKMJBOBDDN_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void ELBLEOLNDHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKMJBOBDDN_ELBLEOLNDHA_OFFSET))(this);
	}

	::System::Void FHICJELJCOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKMJBOBDDN_FHICJELJCOK_OFFSET))(this);
	}

	::System::Void FHFADMFLFKD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + MDKMJBOBDDN_FHFADMFLFKD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void JFDADKAFNGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKMJBOBDDN_JFDADKAFNGP_OFFSET))(this);
	}

	::System::Void HDKONLPBANE(::MoleMole::UIBaseController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA, ::MoleMole::UIControllerContextBase* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MDKMJBOBDDN_HDKONLPBANE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MDKMJBOBDDN_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void FOKHJJAPKFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKMJBOBDDN_FOKHJJAPKFO_OFFSET))(this);
	}

	::System::Void LICECDBFIPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKMJBOBDDN_LICECDBFIPH_OFFSET))(this);
	}
};
