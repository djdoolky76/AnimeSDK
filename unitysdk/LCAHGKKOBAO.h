#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigHitEffect; }

#define LCAHGKKOBAO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1523CB80)
#define LCAHGKKOBAO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1523CAF0)
#define LCAHGKKOBAO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1523C9C0)
#define LCAHGKKOBAO_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1523CA50)
#define LCAHGKKOBAO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1523C8A0)
#define LCAHGKKOBAO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1523C930)
#define LCAHGKKOBAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1523C9A0)

inline static constexpr unsigned int LCAHGKKOBAO_TypeDefinitionIndex = 92247;

class LCAHGKKOBAO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xC2; // 0x0
	::MoleMole::Config::ConfigHitEffect* GODDLJAJAFC; // 0x20
	::MoleMole::Config::ConfigHitEffect* CMJNAGPHPIJ; // 0x28
	::MoleMole::Config::ConfigHitEffect* OFIGDAIBDGG; // 0x30
	::UnityEngine::Vector3 EONMPCHFNPK; // 0x38
	::MoleMole::Config::AnimatorBeHitTag HGIGAEHPABA; // 0x44
	::MoleMole::Config::HitForwardType GFBCIHHKBJP; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCAHGKKOBAO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAHGKKOBAO__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAHGKKOBAO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAHGKKOBAO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAHGKKOBAO_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAHGKKOBAO_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::ConfigHitEffect* PFPPMEAHMNG, ::MoleMole::Config::ConfigHitEffect* PHIJHFHHKCG, ::MoleMole::Config::ConfigHitEffect* LADDGHNJLJF, ::UnityEngine::Vector3 CJDEFHFPAGK, ::MoleMole::Config::AnimatorBeHitTag BCMOCGEFCNF, ::MoleMole::Config::HitForwardType IHIMIHIEFII)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHitEffect*, ::MoleMole::Config::ConfigHitEffect*, ::MoleMole::Config::ConfigHitEffect*, ::UnityEngine::Vector3, ::MoleMole::Config::AnimatorBeHitTag, ::MoleMole::Config::HitForwardType))((::PBYTE)hIl2Cpp + LCAHGKKOBAO_CNHBDOMKKDE_OFFSET))(this, PFPPMEAHMNG, PHIJHFHHKCG, LADDGHNJLJF, CJDEFHFPAGK, BCMOCGEFCNF, IHIMIHIEFII);
	}
};
