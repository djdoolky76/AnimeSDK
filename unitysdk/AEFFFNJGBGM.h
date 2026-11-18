#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLIBBMMOAOH.h"
#include "unitysdk/MoleMole/MonoTowerHolderObject_GMEBFGMDANA.h"
#include "unitysdk/DNAJBNAHOCL.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

namespace MoleMole { class UITowerDefenseMainPageController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define AEFFFNJGBGM_DCNDKLFAICC_OFFSET UNITYSDK_OFFSET(0x12CE2E00)
#define AEFFFNJGBGM_HBBKPIEDMCF_OFFSET UNITYSDK_OFFSET(0x12CE2CC0)
#define AEFFFNJGBGM_IGDKLLACLOC_OFFSET UNITYSDK_OFFSET(0x12CE2FC0)
#define AEFFFNJGBGM_NFLMAPEAJHA_OFFSET UNITYSDK_OFFSET(0x12CE3240)
#define AEFFFNJGBGM_NGCFAPCEPAP_OFFSET UNITYSDK_OFFSET(0x12CE3700)
#define AEFFFNJGBGM_OCPIPIJCOEO_OFFSET UNITYSDK_OFFSET(0x12CE3640)
#define AEFFFNJGBGM_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x12CE35E0)
#define AEFFFNJGBGM_PLHINHGGBOC_OFFSET UNITYSDK_OFFSET(0x12CE3590)
#define AEFFFNJGBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x12CE2C70)

inline static constexpr unsigned int AEFFFNJGBGM_TypeDefinitionIndex = 61143;

class AEFFFNJGBGM : public ::BLIBBMMOAOH
{
public:
	::UnityEngine::GameObject* EINGHKHLPEC; // 0x30
	::System::Int32 PNADMIEKJGE; // 0x38
	::System::Int32 EFNNGMGLLIH; // 0x3C

	::System::Void _ctor(::MoleMole::UITowerDefenseMainPageController* FIEJJJIKOPC, ::UnityEngine::GameObject* LPABCGMKOMJ, ::System::Int32 HKHHHJHCGKL, ::System::Int32 BOBGEDKOMCM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AEFFFNJGBGM__CTOR_OFFSET))(this, FIEJJJIKOPC, LPABCGMKOMJ, HKHHHJHCGKL, BOBGEDKOMCM);
	}

	::DNAJBNAHOCL DCNDKLFAICC(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::DNAJBNAHOCL(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + AEFFFNJGBGM_DCNDKLFAICC_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Void NFLMAPEAJHA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AEFFFNJGBGM_NFLMAPEAJHA_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void PLHINHGGBOC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AEFFFNJGBGM_PLHINHGGBOC_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFFFNJGBGM_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Void OCPIPIJCOEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFFFNJGBGM_OCPIPIJCOEO_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* HBBKPIEDMCF(::MoleMole::UITowerDefenseMainPageController* FIEJJJIKOPC, ::System::Int32 HKHHHJHCGKL)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::MoleMole::UITowerDefenseMainPageController*, ::System::Int32))((::PBYTE)hIl2Cpp + AEFFFNJGBGM_HBBKPIEDMCF_OFFSET))(FIEJJJIKOPC, HKHHHJHCGKL);
	}

	::DNAJBNAHOCL IGDKLLACLOC()
	{
		return ((::DNAJBNAHOCL(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFFFNJGBGM_IGDKLLACLOC_OFFSET))(this);
	}

	static ::System::Boolean NGCFAPCEPAP(::MoleMole::Battle::Entity* KLOOKFMCDMG, ::MoleMole::MonoTowerHolderObject_GMEBFGMDANA NEAOFNHMFOA)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::MonoTowerHolderObject_GMEBFGMDANA))((::PBYTE)hIl2Cpp + AEFFFNJGBGM_NGCFAPCEPAP_OFFSET))(KLOOKFMCDMG, NEAOFNHMFOA);
	}
};
