#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNFDJJEIDHK.h"
#include "unitysdk/KKENCHECBKE.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget_HGHEODFGFBP.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget_KMPOGHLAFEN.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget_OJKCOJFGBPF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OAMAMDGEJKH;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityFitlerGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_EDKGIJOCJDI_OFFSET UNITYSDK_OFFSET(0x18B8F780)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_FOMBLMGPNCO_OFFSET UNITYSDK_OFFSET(0x18B90F30)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_GBCJIOHHLJM_OFFSET UNITYSDK_OFFSET(0x18B91150)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_HGIFNAGJHEG_OFFSET UNITYSDK_OFFSET(0x18B90FE0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_HKFPCOGMLKI_1_OFFSET UNITYSDK_OFFSET(0x18B90420)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_HKFPCOGMLKI_2_OFFSET UNITYSDK_OFFSET(0x18B90720)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_HKFPCOGMLKI_OFFSET UNITYSDK_OFFSET(0x18B8FF10)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_IAOHNNEBFFN_OFFSET UNITYSDK_OFFSET(0x18B912E0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_IBLHBMNMHDL_OFFSET UNITYSDK_OFFSET(0x18B90AE0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_IHPDGGGBAIA_OFFSET UNITYSDK_OFFSET(0x18B8F5E0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_IIJMLMJBIFI_OFFSET UNITYSDK_OFFSET(0x18B8ECB0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_KOEACOLNGDC_OFFSET UNITYSDK_OFFSET(0x18B8F7D0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_NEPKPNNALHB_OFFSET UNITYSDK_OFFSET(0x18B90A30)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_NJAPHACODCC_OFFSET UNITYSDK_OFFSET(0x18B90D70)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_OGFIPEIGLGE_OFFSET UNITYSDK_OFFSET(0x18B90370)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_OILNKKILOGN_OFFSET UNITYSDK_OFFSET(0x18B91390)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_PDBFEMKBGEJ_OFFSET UNITYSDK_OFFSET(0x18B901E0)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B8FF00)
#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8FEF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTarget_TypeDefinitionIndex = 41947;

	class ConfigAbilityTarget : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigAbilityTarget_OJKCOJFGBPF* StaticGet_entityFeatureTargetSortComparer()
		{
			return (::MoleMole::Config::ConfigAbilityTarget_OJKCOJFGBPF*)Il2CppClass::FromTypeDefinitionIndex(ConfigAbilityTarget_TypeDefinitionIndex)->GetStaticField(0x46BA0);
		}
		static ::MoleMole::Config::ConfigAbilityTarget_KMPOGHLAFEN* StaticGet_entityFeatureTargetWrapSortComparer()
		{
			return (::MoleMole::Config::ConfigAbilityTarget_KMPOGHLAFEN*)Il2CppClass::FromTypeDefinitionIndex(ConfigAbilityTarget_TypeDefinitionIndex)->GetStaticField(0x46BC0);
		}
		static ::MoleMole::Config::ConfigAbilityTarget_HGHEODFGFBP* StaticGet_entitySortComparer()
		{
			return (::MoleMole::Config::ConfigAbilityTarget_HGHEODFGFBP*)Il2CppClass::FromTypeDefinitionIndex(ConfigAbilityTarget_TypeDefinitionIndex)->GetStaticField(0x46BE0);
		}
		::MoleMole::Config::AbilityTargetting CustomTargetting; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* NodePoint; // 0x18
		::System::String* SavePoint; // 0x20
		::MoleMole::Config::ConfigEntityFitlerGroup* filterGroup; // 0x28
		::BNFDJJEIDHK SortingType; // 0x30
		::KKENCHECBKE Order; // 0x34
		::System::Boolean IgnoreFilterPeerID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET__CCTOR_OFFSET))();
		}

		::MoleMole::Battle::Entity* IIJMLMJBIFI(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* LIBPKNHDIGP)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_IIJMLMJBIFI_OFFSET))(this, OMPHGGCEIBD, HODAIDNDKHD, NGODDCIOJDP, LIBPKNHDIGP);
		}

		::System::Boolean IHPDGGGBAIA(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::MoleMole::Battle::Entity*& LOELECMDLOO, ::UnityEngine::Vector3& IACKHFCLPJI)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_IHPDGGGBAIA_OFFSET))(this, OMPHGGCEIBD, HODAIDNDKHD, NGODDCIOJDP, LIBPKNHDIGP, LOELECMDLOO, IACKHFCLPJI);
		}

		::System::Void HKFPCOGMLKI(::UnityEngine::Vector3 MDEICMIHPPC, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* IDKNEIEMPAP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_HKFPCOGMLKI_OFFSET))(this, MDEICMIHPPC, IDKNEIEMPAP);
		}

		::System::Boolean EDKGIJOCJDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_EDKGIJOCJDI_OFFSET))(this);
		}

		static ::System::Int32 PDBFEMKBGEJ(::UnityEngine::Vector3 BBHKIFIHMMH, ::MoleMole::Config::ConfigAbilityTarget* DFMKILICPFB, ::MGHNAPKHBOG EJCBEJMGFAJ, ::MGHNAPKHBOG EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MGHNAPKHBOG, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_PDBFEMKBGEJ_OFFSET))(BBHKIFIHMMH, DFMKILICPFB, EJCBEJMGFAJ, EBFCACIEKBC);
		}

		::System::Void HKFPCOGMLKI_1(::UnityEngine::Vector3 MDEICMIHPPC, ::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* IDKNEIEMPAP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::OAMAMDGEJKH*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_HKFPCOGMLKI_1_OFFSET))(this, MDEICMIHPPC, IDKNEIEMPAP);
		}

		::System::Void HKFPCOGMLKI_2(::UnityEngine::Vector3 MDEICMIHPPC, ::System::Collections::Generic::List_1<::MGHNAPKHBOG>* IDKNEIEMPAP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::MGHNAPKHBOG>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_HKFPCOGMLKI_2_OFFSET))(this, MDEICMIHPPC, IDKNEIEMPAP);
		}

		::System::Boolean KOEACOLNGDC(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::UnityEngine::Vector3& CKPGOKHECCH)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_KOEACOLNGDC_OFFSET))(this, OMPHGGCEIBD, CKPGOKHECCH);
		}

		::System::Int32 NEPKPNNALHB(::UnityEngine::Vector3 BBHKIFIHMMH, ::MoleMole::Config::ConfigAbilityTarget* DFMKILICPFB, ::OAMAMDGEJKH* EJCBEJMGFAJ, ::OAMAMDGEJKH* EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::OAMAMDGEJKH*, ::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_NEPKPNNALHB_OFFSET))(this, BBHKIFIHMMH, DFMKILICPFB, EJCBEJMGFAJ, EBFCACIEKBC);
		}

		static ::System::Int32 NJAPHACODCC(::UnityEngine::Vector3 BBHKIFIHMMH, ::MoleMole::Config::ConfigAbilityTarget* DFMKILICPFB, ::MoleMole::Battle::Entity* EJCBEJMGFAJ, ::MoleMole::Battle::Entity* EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_NJAPHACODCC_OFFSET))(BBHKIFIHMMH, DFMKILICPFB, EJCBEJMGFAJ, EBFCACIEKBC);
		}

		static ::System::Int32 FOMBLMGPNCO(::UnityEngine::Vector3 BBHKIFIHMMH, ::MoleMole::Config::ConfigAbilityTarget* DFMKILICPFB, ::OAMAMDGEJKH* EJCBEJMGFAJ, ::OAMAMDGEJKH* EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::OAMAMDGEJKH*, ::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_FOMBLMGPNCO_OFFSET))(BBHKIFIHMMH, DFMKILICPFB, EJCBEJMGFAJ, EBFCACIEKBC);
		}

		static ::System::Int32 OGFIPEIGLGE(::UnityEngine::Vector3 BBHKIFIHMMH, ::MoleMole::Config::ConfigAbilityTarget* DFMKILICPFB, ::MoleMole::Battle::Entity* EJCBEJMGFAJ, ::MoleMole::Battle::Entity* EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_OGFIPEIGLGE_OFFSET))(BBHKIFIHMMH, DFMKILICPFB, EJCBEJMGFAJ, EBFCACIEKBC);
		}

		static ::System::Int32 HGIFNAGJHEG(::UnityEngine::Vector3 BBHKIFIHMMH, ::MoleMole::Config::ConfigAbilityTarget* DFMKILICPFB, ::OAMAMDGEJKH* EJCBEJMGFAJ, ::OAMAMDGEJKH* EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::OAMAMDGEJKH*, ::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_HGIFNAGJHEG_OFFSET))(BBHKIFIHMMH, DFMKILICPFB, EJCBEJMGFAJ, EBFCACIEKBC);
		}

		static ::System::Int32 GBCJIOHHLJM(::UnityEngine::Vector3 BBHKIFIHMMH, ::MoleMole::Config::ConfigAbilityTarget* DFMKILICPFB, ::MGHNAPKHBOG EJCBEJMGFAJ, ::MGHNAPKHBOG EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MGHNAPKHBOG, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_GBCJIOHHLJM_OFFSET))(BBHKIFIHMMH, DFMKILICPFB, EJCBEJMGFAJ, EBFCACIEKBC);
		}

		static ::System::Int32 IAOHNNEBFFN(::UnityEngine::Vector3 BBHKIFIHMMH, ::MoleMole::Config::ConfigAbilityTarget* DFMKILICPFB, ::OAMAMDGEJKH* EJCBEJMGFAJ, ::OAMAMDGEJKH* EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::OAMAMDGEJKH*, ::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_IAOHNNEBFFN_OFFSET))(BBHKIFIHMMH, DFMKILICPFB, EJCBEJMGFAJ, EBFCACIEKBC);
		}

		static ::System::Int32 OILNKKILOGN(::UnityEngine::Vector3 BBHKIFIHMMH, ::MoleMole::Config::ConfigAbilityTarget* DFMKILICPFB, ::MGHNAPKHBOG EJCBEJMGFAJ, ::MGHNAPKHBOG EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MGHNAPKHBOG, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_OILNKKILOGN_OFFSET))(BBHKIFIHMMH, DFMKILICPFB, EJCBEJMGFAJ, EBFCACIEKBC);
		}

		static ::System::Int32 IBLHBMNMHDL(::UnityEngine::Vector3 BBHKIFIHMMH, ::MoleMole::Config::ConfigAbilityTarget* DFMKILICPFB, ::MoleMole::Battle::Entity* EJCBEJMGFAJ, ::MoleMole::Battle::Entity* EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_IBLHBMNMHDL_OFFSET))(BBHKIFIHMMH, DFMKILICPFB, EJCBEJMGFAJ, EBFCACIEKBC);
		}
	};
}
