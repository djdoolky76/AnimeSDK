#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class MBHOGLGMFEM;
namespace MoleMole { class UIStorePageNPCConfig; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define BIHDCFBAEHO_AJAJBNMDLBJ_OFFSET UNITYSDK_OFFSET(0x1867EAF0)
#define BIHDCFBAEHO_CHCCEOJAHGC_OFFSET UNITYSDK_OFFSET(0x1867CE20)
#define BIHDCFBAEHO_DBMAFAHIAMB_OFFSET UNITYSDK_OFFSET(0x1867E020)
#define BIHDCFBAEHO_EKHOEPDEHNI_OFFSET UNITYSDK_OFFSET(0x1867CF30)
#define BIHDCFBAEHO_GFIPLJMIOID_OFFSET UNITYSDK_OFFSET(0x1867E260)
#define BIHDCFBAEHO_GIJMEAPMLKO_OFFSET UNITYSDK_OFFSET(0x1867E200)
#define BIHDCFBAEHO_HOAONIODDKP_OFFSET UNITYSDK_OFFSET(0x1867D1B0)
#define BIHDCFBAEHO_IHONABOMGON_OFFSET UNITYSDK_OFFSET(0x1867E9A0)
#define BIHDCFBAEHO_IOPBGCIJBMK_OFFSET UNITYSDK_OFFSET(0x1867D100)
#define BIHDCFBAEHO_JFBIDGPFNBF_OFFSET UNITYSDK_OFFSET(0x1867EB60)
#define BIHDCFBAEHO_KLPGDIAJMHK_OFFSET UNITYSDK_OFFSET(0x1867D9E0)
#define BIHDCFBAEHO_LLKFHDKKOPB_OFFSET UNITYSDK_OFFSET(0x1867EBB0)
#define BIHDCFBAEHO_NFDAFJLEDIM_OFFSET UNITYSDK_OFFSET(0x1867D210)
#define BIHDCFBAEHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1867CD80)

inline static constexpr unsigned int BIHDCFBAEHO_TypeDefinitionIndex = 60660;

class BIHDCFBAEHO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>* MGGJMEHNEAN; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* OIOJNPEIHPP; // 0x18
	::MBHOGLGMFEM* HOGMCJDBBCM; // 0x20
	::System::String* DPLBBJHKLDN; // 0x28
	::System::Action_2<::System::Int32, ::MoleMole::EntityHandle>* LDBPGFFIANL; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* DJKBMIOGHDL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIStorePageNPCConfig*>* JFPKMDLHMCM; // 0x40
	::UnityEngine::GameObject* KIKFPJEIDHC; // 0x48
	::System::Collections::Generic::List_1<::Foundation::Tuple_2<::System::String*, ::UnityEngine::GameObject*>>* PAGKGKIKMGA; // 0x50

	::System::Void _ctor(::MBHOGLGMFEM* BMKJMCEMHKF, ::System::Action_2<::System::Int32, ::MoleMole::EntityHandle>* ANHLOPMHOJH)
	{
		return ((::System::Void(*)(::PVOID, ::MBHOGLGMFEM*, ::System::Action_2<::System::Int32, ::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + BIHDCFBAEHO__CTOR_OFFSET))(this, BMKJMCEMHKF, ANHLOPMHOJH);
	}

	::System::Void CHCCEOJAHGC(::System::String* CJBJONJDOLI, ::MoleMole::UIStorePageNPCConfig* KPFNAMACIDA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIStorePageNPCConfig*))((::PBYTE)hIl2Cpp + BIHDCFBAEHO_CHCCEOJAHGC_OFFSET))(this, CJBJONJDOLI, KPFNAMACIDA);
	}

	::MoleMole::Battle::Entity* EKHOEPDEHNI(::UnityEngine::GameObject* JCFADCIKCOM, ::MoleMole::Config::EntityType MKCOMJHINNJ, ::System::Int32 HKHHHJHCGKL, ::System::Single CLMNLPKFBFA)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Config::EntityType, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + BIHDCFBAEHO_EKHOEPDEHNI_OFFSET))(this, JCFADCIKCOM, MKCOMJHINNJ, HKHHHJHCGKL, CLMNLPKFBFA);
	}

	::UnityEngine::GameObject* IOPBGCIJBMK(::System::Int32 EOGLMAEPALE)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BIHDCFBAEHO_IOPBGCIJBMK_OFFSET))(this, EOGLMAEPALE);
	}

	::System::Void HOAONIODDKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHDCFBAEHO_HOAONIODDKP_OFFSET))(this);
	}

	::System::Void KLPGDIAJMHK(::MoleMole::UIStorePageNPCConfig* JGHGFKBOGJN, ::UnityEngine::GameObject* LHPFMGBDFPN, ::System::Int32 FMACCKNFNDA, ::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIStorePageNPCConfig*, ::UnityEngine::GameObject*, ::System::Int32, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + BIHDCFBAEHO_KLPGDIAJMHK_OFFSET))(this, JGHGFKBOGJN, LHPFMGBDFPN, FMACCKNFNDA, HPADNAEINPK);
	}

	::UnityEngine::Animator* DBMAFAHIAMB()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHDCFBAEHO_DBMAFAHIAMB_OFFSET))(this);
	}

	::System::Void GIJMEAPMLKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHDCFBAEHO_GIJMEAPMLKO_OFFSET))(this);
	}

	::System::Void GFIPLJMIOID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHDCFBAEHO_GFIPLJMIOID_OFFSET))(this);
	}

	::System::Void IHONABOMGON(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIHDCFBAEHO_IHONABOMGON_OFFSET))(this, FIPHFGHNNBE);
	}

	::System::Void NFDAFJLEDIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHDCFBAEHO_NFDAFJLEDIM_OFFSET))(this);
	}

	::System::Void AJAJBNMDLBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHDCFBAEHO_AJAJBNMDLBJ_OFFSET))(this);
	}

	::System::Void JFBIDGPFNBF(::MBHOGLGMFEM* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MBHOGLGMFEM*))((::PBYTE)hIl2Cpp + BIHDCFBAEHO_JFBIDGPFNBF_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void LLKFHDKKOPB(::UnityEngine::GameObject* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BIHDCFBAEHO_LLKFHDKKOPB_OFFSET))(this, IAPKABMDJNF);
	}
};
