#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class Action; }
namespace System { class String; }

#define FKFLIIOGKIO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x191F6840)
#define FKFLIIOGKIO_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x191F7CB0)
#define FKFLIIOGKIO_HMPAOPCOMKI_OFFSET UNITYSDK_OFFSET(0x191F6B60)
#define FKFLIIOGKIO_KOHABOKICHK_OFFSET UNITYSDK_OFFSET(0x191F6830)
#define FKFLIIOGKIO_LCJEELHBNHG_1_OFFSET UNITYSDK_OFFSET(0x191F6C00)
#define FKFLIIOGKIO_LCJEELHBNHG_2_OFFSET UNITYSDK_OFFSET(0x191F6C90)
#define FKFLIIOGKIO_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x191F69C0)
#define FKFLIIOGKIO_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x191F7D40)
#define FKFLIIOGKIO__CTOR_OFFSET UNITYSDK_OFFSET(0x191F6C80)

inline static constexpr unsigned int FKFLIIOGKIO_TypeDefinitionIndex = 90365;

class FKFLIIOGKIO : public ::LLKOFEPPBNJ
{
public:
	::System::String* LAPHHAGMPIJ; // 0x28
	::System::Action* EGCCIODCJIA; // 0x30
	::System::Boolean BEBEKLHIAPH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFLIIOGKIO__CTOR_OFFSET))(this);
	}

	::System::Boolean KOHABOKICHK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFLIIOGKIO_KOHABOKICHK_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + FKFLIIOGKIO_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFLIIOGKIO_LCJEELHBNHG_OFFSET))(this);
	}

	static ::System::Void LCJEELHBNHG_1(::System::String* LAPHHAGMPIJ, ::System::Boolean BEBEKLHIAPH, ::System::Action* MGAKJHJAGJI)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FKFLIIOGKIO_LCJEELHBNHG_1_OFFSET))(LAPHHAGMPIJ, BEBEKLHIAPH, MGAKJHJAGJI);
	}

	static ::System::Void LCJEELHBNHG_2(::System::String* LAPHHAGMPIJ, ::System::Boolean BEBEKLHIAPH, ::System::Action* MGAKJHJAGJI, ::System::String* ENLMILKBHFN, ::System::String* FEJLAJNGNOG, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Action*, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + FKFLIIOGKIO_LCJEELHBNHG_2_OFFSET))(LAPHHAGMPIJ, BEBEKLHIAPH, MGAKJHJAGJI, ENLMILKBHFN, FEJLAJNGNOG, MDPPNMIPDMP);
	}

	::System::Action* HMPAOPCOMKI()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFLIIOGKIO_HMPAOPCOMKI_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFLIIOGKIO_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + FKFLIIOGKIO_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
