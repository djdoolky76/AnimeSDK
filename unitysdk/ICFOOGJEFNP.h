#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
namespace MoleMole { class MonoUIOverlordFeastLevelConfig; }
namespace MoleMole { class UIControlCollection; }

#define ICFOOGJEFNP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12EA3660)
#define ICFOOGJEFNP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12EA3410)
#define ICFOOGJEFNP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12EA3120)
#define ICFOOGJEFNP__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA3650)

inline static constexpr unsigned int ICFOOGJEFNP_TypeDefinitionIndex = 70845;

class ICFOOGJEFNP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JIPFJCCIKFC; // 0x18
	::FGCOIBFFCHB* KBKDLCLBPKJ; // 0x20
	::FGCOIBFFCHB* BEFPECLGEPP; // 0x28
	::FILNFMCNCFE* PNCAHGBNJHO; // 0x30
	::FGCOIBFFCHB* AJHEPMMAPBL; // 0x38
	::FGCOIBFFCHB* NKADAPNGKAI; // 0x40
	::FGCOIBFFCHB* AAJIHFCEABI; // 0x48
	::FGCOIBFFCHB* MJFDAHOLIPK; // 0x50
	::FGCOIBFFCHB* IKOFJEHPPAN; // 0x58
	::MoleMole::MonoUIOverlordFeastLevelConfig* AHMFPFACACD; // 0x60
	::FILNFMCNCFE* EGHHKPLNDOJ; // 0x68
	::FGCOIBFFCHB* GKDMAOOGOIG; // 0x70
	::FGCOIBFFCHB* JANEHEICHBJ; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICFOOGJEFNP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICFOOGJEFNP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICFOOGJEFNP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICFOOGJEFNP_KGEBDLGBGNM_OFFSET))(this);
	}
};
