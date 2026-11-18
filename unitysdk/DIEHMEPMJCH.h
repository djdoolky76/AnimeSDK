#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFIPOPKLNOI.h"
#include "unitysdk/DNAJBNAHOCL.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class CJMLLONLLEG;
namespace MoleMole { class UITowerDefenseMainPageController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define DIEHMEPMJCH_BCLJGPNKGMH_OFFSET UNITYSDK_OFFSET(0x1A1E3170)
#define DIEHMEPMJCH_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x1A1E2580)
#define DIEHMEPMJCH_EACAHDLFFJL_OFFSET UNITYSDK_OFFSET(0x1A1E2FF0)
#define DIEHMEPMJCH_EGFELLCIDLO_OFFSET UNITYSDK_OFFSET(0x1A1E3290)
#define DIEHMEPMJCH_OCPIPIJCOEO_OFFSET UNITYSDK_OFFSET(0x1A1E2D20)
#define DIEHMEPMJCH_OHGABMGNOEN_OFFSET UNITYSDK_OFFSET(0x1A1E2A60)
#define DIEHMEPMJCH_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x1A1E2B10)
#define DIEHMEPMJCH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1A1E2380)
#define DIEHMEPMJCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E2020)

inline static constexpr unsigned int DIEHMEPMJCH_TypeDefinitionIndex = 80112;

class DIEHMEPMJCH : public ::FFIPOPKLNOI
{
public:
	::MoleMole::UITowerDefenseMainPageController* MACHGCHBMBO; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UIButtonEx*>* JBNDHHGAFII; // 0x18
	::MoleMole::Battle::Entity* HFPIBPEODNL; // 0x20
	::MoleMole::Battle::Entity* EAOMIKHKKJA; // 0x28
	::System::Int32 CPAJLDCNFCL; // 0x30
	::System::Int32 BJENOKMNOIH; // 0x34

	::System::Void _ctor(::MoleMole::UITowerDefenseMainPageController* FIEJJJIKOPC, ::MoleMole::Battle::Entity* KEOOEPCGCIJ, ::MoleMole::Battle::Entity* KLOOKFMCDMG, ::System::Int32 PFGBLHOCLLG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + DIEHMEPMJCH__CTOR_OFFSET))(this, FIEJJJIKOPC, KEOOEPCGCIJ, KLOOKFMCDMG, PFGBLHOCLLG);
	}

	::CJMLLONLLEG* OKJCHFGIKBH()
	{
		return ((::CJMLLONLLEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEHMEPMJCH_OKJCHFGIKBH_OFFSET))(this);
	}

	::DNAJBNAHOCL DIHCGHDHPJP(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::DNAJBNAHOCL(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + DIEHMEPMJCH_DIHCGHDHPJP_OFFSET))(this, MLNBANAGAEE);
	}

	::CJMLLONLLEG* OHGABMGNOEN(::MoleMole::UITowerDefenseMainPageController* FIEJJJIKOPC, ::UnityEngine::GameObject* LPABCGMKOMJ, ::System::Int32 HKHHHJHCGKL, ::System::Int32 BOBGEDKOMCM)
	{
		return ((::CJMLLONLLEG*(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIEHMEPMJCH_OHGABMGNOEN_OFFSET))(this, FIEJJJIKOPC, LPABCGMKOMJ, HKHHHJHCGKL, BOBGEDKOMCM);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEHMEPMJCH_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Void OCPIPIJCOEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEHMEPMJCH_OCPIPIJCOEO_OFFSET))(this);
	}

	::System::Void EACAHDLFFJL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEHMEPMJCH_EACAHDLFFJL_OFFSET))(this);
	}

	::System::Void BCLJGPNKGMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEHMEPMJCH_BCLJGPNKGMH_OFFSET))(this);
	}

	::System::Void EGFELLCIDLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEHMEPMJCH_EGFELLCIDLO_OFFSET))(this);
	}
};
