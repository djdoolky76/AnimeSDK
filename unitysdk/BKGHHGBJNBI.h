#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLIBBMMOAOH.h"
#include "unitysdk/DNAJBNAHOCL.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

namespace MoleMole { class UITowerDefenseMainPageController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKGHHGBJNBI_DCNDKLFAICC_OFFSET UNITYSDK_OFFSET(0x10E09780)
#define BKGHHGBJNBI_HBBKPIEDMCF_OFFSET UNITYSDK_OFFSET(0x10E095E0)
#define BKGHHGBJNBI_NFLMAPEAJHA_OFFSET UNITYSDK_OFFSET(0x10E09A40)
#define BKGHHGBJNBI_OCPIPIJCOEO_OFFSET UNITYSDK_OFFSET(0x10E09CE0)
#define BKGHHGBJNBI_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x10E09C20)
#define BKGHHGBJNBI_PLHINHGGBOC_OFFSET UNITYSDK_OFFSET(0x10E09B80)
#define BKGHHGBJNBI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10E09750)
#define BKGHHGBJNBI__CTOR_OFFSET UNITYSDK_OFFSET(0x10E095B0)

inline static constexpr unsigned int BKGHHGBJNBI_TypeDefinitionIndex = 84731;

class BKGHHGBJNBI : public ::BLIBBMMOAOH
{
public:
	::System::Void _ctor(::MoleMole::UITowerDefenseMainPageController* FIEJJJIKOPC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*))((::PBYTE)hIl2Cpp + BKGHHGBJNBI__CTOR_OFFSET))(this, FIEJJJIKOPC);
	}

	::System::Void _ctor_1(::MoleMole::UITowerDefenseMainPageController* FIEJJJIKOPC, ::System::Int32 PFGBLHOCLLG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::System::Int32))((::PBYTE)hIl2Cpp + BKGHHGBJNBI__CTOR_1_OFFSET))(this, FIEJJJIKOPC, PFGBLHOCLLG);
	}

	::DNAJBNAHOCL DCNDKLFAICC(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::DNAJBNAHOCL(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + BKGHHGBJNBI_DCNDKLFAICC_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Void NFLMAPEAJHA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BKGHHGBJNBI_NFLMAPEAJHA_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void PLHINHGGBOC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BKGHHGBJNBI_PLHINHGGBOC_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGHHGBJNBI_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Void OCPIPIJCOEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGHHGBJNBI_OCPIPIJCOEO_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* HBBKPIEDMCF(::MoleMole::UITowerDefenseMainPageController* FIEJJJIKOPC)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::MoleMole::UITowerDefenseMainPageController*))((::PBYTE)hIl2Cpp + BKGHHGBJNBI_HBBKPIEDMCF_OFFSET))(FIEJJJIKOPC);
	}
};
