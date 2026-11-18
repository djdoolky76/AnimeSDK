#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/LLKOFEPPBNJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define MMIHKLPAOHK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14070380)
#define MMIHKLPAOHK_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x14070950)
#define MMIHKLPAOHK_FOGJEENDBJA_OFFSET UNITYSDK_OFFSET(0x140708A0)
#define MMIHKLPAOHK_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x14070800)
#define MMIHKLPAOHK_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x14070560)
#define MMIHKLPAOHK_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x140706D0)
#define MMIHKLPAOHK_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x140709E0)
#define MMIHKLPAOHK__CTOR_OFFSET UNITYSDK_OFFSET(0x140707A0)

inline static constexpr unsigned int MMIHKLPAOHK_TypeDefinitionIndex = 77200;

class MMIHKLPAOHK : public ::LLKOFEPPBNJ
{
public:
	::System::Single HJCBGBJHJKB; // 0x28
	::Foundation::Coroutine::CoroutineHandle BELKCKIINHL; // 0x2C
	::System::Single CAOPDAMCNCN; // 0x30
	::System::Single AEBMGADKEPI; // 0x34
	::System::Boolean MCHMAKGNGMO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIHKLPAOHK__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + MMIHKLPAOHK_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIHKLPAOHK_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIHKLPAOHK_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIHKLPAOHK_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void FOGJEENDBJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIHKLPAOHK_FOGJEENDBJA_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIHKLPAOHK_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + MMIHKLPAOHK_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
