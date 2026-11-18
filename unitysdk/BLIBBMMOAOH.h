#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFIPOPKLNOI.h"
#include "unitysdk/MoleMole/MonoTowerHolderObject_GMEBFGMDANA.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/DNAJBNAHOCL.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class CJMLLONLLEG;
namespace MoleMole { class UITowerDefenseMainPageController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define BLIBBMMOAOH_BOMEOONMEPG_OFFSET UNITYSDK_OFFSET(0x1425B880)
#define BLIBBMMOAOH_CDKMADOHFFC_OFFSET UNITYSDK_OFFSET(0x1425AD90)
#define BLIBBMMOAOH_CGJOCGMKEPE_OFFSET UNITYSDK_OFFSET(0x1425BB80)
#define BLIBBMMOAOH_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x1425AFD0)
#define BLIBBMMOAOH_EBNLNKNJLOB_OFFSET UNITYSDK_OFFSET(0x1425B940)
#define BLIBBMMOAOH_KGAKJLKFOCG_OFFSET UNITYSDK_OFFSET(0x1425B720)
#define BLIBBMMOAOH_KGGGFPPAEFO_OFFSET UNITYSDK_OFFSET(0x1425BDF0)
#define BLIBBMMOAOH_KKGLFHJKCGL_OFFSET UNITYSDK_OFFSET(0x1425B120)
#define BLIBBMMOAOH_MNAMEBNAFLA_OFFSET UNITYSDK_OFFSET(0x1425B500)
#define BLIBBMMOAOH_OGMFABGAENI_OFFSET UNITYSDK_OFFSET(0x1425B7B0)
#define BLIBBMMOAOH_OHGABMGNOEN_OFFSET UNITYSDK_OFFSET(0x1425AC40)
#define BLIBBMMOAOH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1425AF90)
#define BLIBBMMOAOH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1425AEA0)
#define BLIBBMMOAOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1425ACA0)

inline static constexpr unsigned int BLIBBMMOAOH_TypeDefinitionIndex = 74176;

class BLIBBMMOAOH : public ::FFIPOPKLNOI
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* OJIFAGBBFMF; // 0x10
	::MoleMole::UITowerDefenseMainPageController* NEHMMGPEPPF; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* OKDGLNABBAN; // 0x20
	::System::Int32 ADJDDMNJLJA; // 0x28
	::System::Int32 BELNJJKMMJP; // 0x2C

	::System::Void _ctor(::MoleMole::UITowerDefenseMainPageController* FIEJJJIKOPC, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* ACKLLJFMLHL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + BLIBBMMOAOH__CTOR_OFFSET))(this, FIEJJJIKOPC, ACKLLJFMLHL);
	}

	::System::Void _ctor_1(::MoleMole::UITowerDefenseMainPageController* FIEJJJIKOPC, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* ACKLLJFMLHL, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::Int32))((::PBYTE)hIl2Cpp + BLIBBMMOAOH__CTOR_1_OFFSET))(this, FIEJJJIKOPC, ACKLLJFMLHL, ABHBKFJKINO);
	}

	::CJMLLONLLEG* OHGABMGNOEN(::MoleMole::UITowerDefenseMainPageController* FIEJJJIKOPC, ::UnityEngine::GameObject* LPABCGMKOMJ, ::System::Int32 HKHHHJHCGKL, ::System::Int32 BOBGEDKOMCM)
	{
		return ((::CJMLLONLLEG*(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BLIBBMMOAOH_OHGABMGNOEN_OFFSET))(this, FIEJJJIKOPC, LPABCGMKOMJ, HKHHHJHCGKL, BOBGEDKOMCM);
	}

	::CJMLLONLLEG* OKJCHFGIKBH()
	{
		return ((::CJMLLONLLEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIBBMMOAOH_OKJCHFGIKBH_OFFSET))(this);
	}

	::DNAJBNAHOCL DIHCGHDHPJP(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::DNAJBNAHOCL(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + BLIBBMMOAOH_DIHCGHDHPJP_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Void MNAMEBNAFLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIBBMMOAOH_MNAMEBNAFLA_OFFSET))(this);
	}

	::System::Void OGMFABGAENI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIBBMMOAOH_OGMFABGAENI_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 BOMEOONMEPG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLIBBMMOAOH_BOMEOONMEPG_OFFSET))(KECKGDFIALJ);
	}

	static ::UnityEngine::GameObject* KGAKJLKFOCG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::UnityEngine::GameObject*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLIBBMMOAOH_KGAKJLKFOCG_OFFSET))(KECKGDFIALJ);
	}

	::UnityEngine::Vector3 EBNLNKNJLOB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIBBMMOAOH_EBNLNKNJLOB_OFFSET))(this);
	}

	::System::Void CGJOCGMKEPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIBBMMOAOH_CGJOCGMKEPE_OFFSET))(this);
	}

	::DNAJBNAHOCL KKGLFHJKCGL(::UnityEngine::Vector3 JBCNPOHMGPE)
	{
		return ((::DNAJBNAHOCL(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BLIBBMMOAOH_KKGLFHJKCGL_OFFSET))(this, JBCNPOHMGPE);
	}

	::System::Int32 CDKMADOHFFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIBBMMOAOH_CDKMADOHFFC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* KGGGFPPAEFO(::MoleMole::MonoTowerHolderObject_GMEBFGMDANA NEAOFNHMFOA)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::MonoTowerHolderObject_GMEBFGMDANA))((::PBYTE)hIl2Cpp + BLIBBMMOAOH_KGGGFPPAEFO_OFFSET))(this, NEAOFNHMFOA);
	}
};
