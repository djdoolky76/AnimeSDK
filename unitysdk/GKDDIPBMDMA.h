#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardShowPopWindowNode_ChessboardShowPopType.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class EventArgs; }

#define GKDDIPBMDMA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15B206C0)
#define GKDDIPBMDMA_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x15B213D0)
#define GKDDIPBMDMA_GJEHDPDHIKC_OFFSET UNITYSDK_OFFSET(0x15B21070)
#define GKDDIPBMDMA_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x15B207D0)
#define GKDDIPBMDMA_ODAOGLLIFJA_OFFSET UNITYSDK_OFFSET(0x15B212A0)
#define GKDDIPBMDMA_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x15B21060)
#define GKDDIPBMDMA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B21010)

inline static constexpr unsigned int GKDDIPBMDMA_TypeDefinitionIndex = 91022;

class GKDDIPBMDMA : public ::MDGLNFGCBOJ
{
public:
	::MoleMole::UIWindowController* CHENDHGICIJ; // 0x40
	::MoleMole::Config::ConfigChessboardShowPopWindowNode_ChessboardShowPopType BAMDEJLEMEM; // 0x48
	::System::Int32 LEIPHLADKID; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDDIPBMDMA__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + GKDDIPBMDMA_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDDIPBMDMA_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + GKDDIPBMDMA_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void GJEHDPDHIKC(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GKDDIPBMDMA_GJEHDPDHIKC_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void ODAOGLLIFJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDDIPBMDMA_ODAOGLLIFJA_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDDIPBMDMA_EEOOAGEDKLM_OFFSET))(this);
	}
};
