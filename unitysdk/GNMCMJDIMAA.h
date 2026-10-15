#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/UnityEngine/Vector2.h"
class GEDMHFPPBHN;
class MDDPDPLMNFN;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define GNMCMJDIMAA_ADAMAOFPFOM_OFFSET UNITYSDK_OFFSET(0x15B18AB0)
#define GNMCMJDIMAA_AIKNCNLPFHG_OFFSET UNITYSDK_OFFSET(0x15B185B0)
#define GNMCMJDIMAA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15B19470)
#define GNMCMJDIMAA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15B19610)
#define GNMCMJDIMAA_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x15B19170)
#define GNMCMJDIMAA_BDIAFJFPKIM_OFFSET UNITYSDK_OFFSET(0x15B16A80)
#define GNMCMJDIMAA_BNGHCKPDHMG_OFFSET UNITYSDK_OFFSET(0x15B16C60)
#define GNMCMJDIMAA_CMJFDHLNBAB_OFFSET UNITYSDK_OFFSET(0x15B16BC0)
#define GNMCMJDIMAA_CTOR_OFFSET UNITYSDK_OFFSET(0x15B19780)
#define GNMCMJDIMAA_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15B167A0)
#define GNMCMJDIMAA_DJICDCALHMD_OFFSET UNITYSDK_OFFSET(0x15B193B0)
#define GNMCMJDIMAA_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0x15B17F60)
#define GNMCMJDIMAA_DPDOCIHLBOB_OFFSET UNITYSDK_OFFSET(0x15B16850)
#define GNMCMJDIMAA_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x15B17900)
#define GNMCMJDIMAA_EHBGBIBFFAJ_OFFSET UNITYSDK_OFFSET(0x15B16CC0)
#define GNMCMJDIMAA_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15B169B0)
#define GNMCMJDIMAA_FBLKDDJGADC_OFFSET UNITYSDK_OFFSET(0x15B18C70)
#define GNMCMJDIMAA_HDHKMLGHFNC_OFFSET UNITYSDK_OFFSET(0x15B16EA0)
#define GNMCMJDIMAA_HKFACPPJGKL_OFFSET UNITYSDK_OFFSET(0x15B18E70)
#define GNMCMJDIMAA_ICCDNFNBMCO_OFFSET UNITYSDK_OFFSET(0x15B18FA0)
#define GNMCMJDIMAA_IHDABMGBOAN_OFFSET UNITYSDK_OFFSET(0x15B18800)
#define GNMCMJDIMAA_IMKOPIBBNED_OFFSET UNITYSDK_OFFSET(0x15B16FB0)
#define GNMCMJDIMAA_JAFPJLEJGKO_OFFSET UNITYSDK_OFFSET(0x15B18460)
#define GNMCMJDIMAA_JINLKOPBNHH_OFFSET UNITYSDK_OFFSET(0x15B17D80)
#define GNMCMJDIMAA_JMHCIABBOGO_OFFSET UNITYSDK_OFFSET(0x15B19060)
#define GNMCMJDIMAA_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x15B181C0)
#define GNMCMJDIMAA_KGJOBOGONMI_OFFSET UNITYSDK_OFFSET(0x15B183F0)
#define GNMCMJDIMAA_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x15B192F0)
#define GNMCMJDIMAA_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0x15B19230)
#define GNMCMJDIMAA_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x15B17510)
#define GNMCMJDIMAA_LLFFIENDMCK_OFFSET UNITYSDK_OFFSET(0x15B18BB0)
#define GNMCMJDIMAA_LPCDAJEGFJN_OFFSET UNITYSDK_OFFSET(0x15B18850)
#define GNMCMJDIMAA_MFACIJEGMGD_OFFSET UNITYSDK_OFFSET(0x15B18740)
#define GNMCMJDIMAA_MLGEFBFMHJF_OFFSET UNITYSDK_OFFSET(0x15B17A90)
#define GNMCMJDIMAA_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15B16D20)
#define GNMCMJDIMAA_OFNOGKHOCJO_OFFSET UNITYSDK_OFFSET(0x15B17730)
#define GNMCMJDIMAA_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15B168C0)
#define GNMCMJDIMAA_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15B16A00)
#define GNMCMJDIMAA_POAAKJBMFKF_OFFSET UNITYSDK_OFFSET(0x15B17E20)
#define GNMCMJDIMAA__ONBIND_OFFSET UNITYSDK_OFFSET(0x15B16DB0)
#define GNMCMJDIMAA__ONTICK_OFFSET UNITYSDK_OFFSET(0x15B17660)

	class GNMCMJDIMAA : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* DGNBGCHECOB; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>* LIAJEEOFBFG; // 0x70
		::UnityEngine::Transform* KHKCFJKABEP; // 0x78
		::System::Collections::Generic::List_1<::MDDPDPLMNFN*>* GCIKKMGIPIO; // 0x80
		::RPG::GameCore::TurnBasedAbilityComponent* PCDEEAAIFPK; // 0x88
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* JMFEAGMLOEA; // 0x90
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierInstance*>* BEGBBPCIOCK; // 0x98
		::RPG::Client::PrefabLoadMeta* BLHGCPAPAGF; // 0xA0
		::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>* CNEMHHIIKMB; // 0xA8
		::System::Int32 FLICDBGKDOC; // 0xB0
		::System::Int32 JGCCPBEDMDG; // 0xB4
		::System::Int32 HCLBBLEEOCN; // 0xB8
		::System::Boolean DPBGLCDBOED; // 0xBC
		::System::Boolean HCMICIBOCHC; // 0xBD
		// static const ::System::Object IAMOPAFEOKK; // 0x0
		// static const ::System::Object NAKNHFPPBFH; // 0x0
		// static const ::System::Object AGPPJJPOMBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_ONRETURN_OFFSET))(this);
		}

		::System::Void CMJFDHLNBAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_CMJFDHLNBAB_OFFSET))(this);
		}

		::System::Void BNGHCKPDHMG(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_BNGHCKPDHMG_OFFSET))(this, a1, a2);
		}

		::System::Void EHBGBIBFFAJ(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_EHBGBIBFFAJ_OFFSET))(this, a1, a2);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNMCMJDIMAA__ONTICK_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void JINLKOPBNHH(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_JINLKOPBNHH_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void AIKNCNLPFHG(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_AIKNCNLPFHG_OFFSET))(this, a1);
		}

		::System::Void DPDOCIHLBOB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_DPDOCIHLBOB_OFFSET))(this, a1);
		}

		::System::Void HDHKMLGHFNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_HDHKMLGHFNC_OFFSET))(this);
		}

		::System::Void POAAKJBMFKF(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_POAAKJBMFKF_OFFSET))(this, a1);
		}

		::System::Void KGJOBOGONMI(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_KGJOBOGONMI_OFFSET))(this, a1);
		}

		::System::Boolean MLGEFBFMHJF(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_MLGEFBFMHJF_OFFSET))(this, a1);
		}

		::MDDPDPLMNFN* JAFPJLEJGKO(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::MDDPDPLMNFN*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_JAFPJLEJGKO_OFFSET))(this, a1);
		}

		::System::Void IMKOPIBBNED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_IMKOPIBBNED_OFFSET))(this);
		}

		::System::Void OFNOGKHOCJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_OFNOGKHOCJO_OFFSET))(this);
		}

		::System::Void LLFFIENDMCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_LLFFIENDMCK_OFFSET))(this);
		}

		::MDDPDPLMNFN* LPCDAJEGFJN(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::MDDPDPLMNFN*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_LPCDAJEGFJN_OFFSET))(this, a1);
		}

		::System::Void MFACIJEGMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_MFACIJEGMGD_OFFSET))(this);
		}

		::System::Int32 HKFACPPJGKL(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_HKFACPPJGKL_OFFSET))(this, a1, a2);
		}

		::System::Void BDIAFJFPKIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_BDIAFJFPKIM_OFFSET))(this);
		}

		::System::Void ADAMAOFPFOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_ADAMAOFPFOM_OFFSET))(this);
		}

		::UnityEngine::Vector2 ICCDNFNBMCO(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_ICCDNFNBMCO_OFFSET))(this, a1);
		}

		::System::Void JMHCIABBOGO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_JMHCIABBOGO_OFFSET))(this, a1);
		}

		::GEDMHFPPBHN* FBLKDDJGADC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_FBLKDDJGADC_OFFSET))(this, a1);
		}

		::System::Int32 IHDABMGBOAN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_IHDABMGBOAN_OFFSET))(this);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KOGOJEIKDFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_KOGOJEIKDFI_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void DJICDCALHMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_DJICDCALHMD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMCMJDIMAA_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
