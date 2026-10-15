#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNNJFHDKAME_DisableInteractReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/MapRotationVolumeState.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DLNCBOGAMFG;
class EDHPIGIAOLE;
class EKFMIDBJDIA;
class FHKIKPOPLPJ;
class KDFFHMDFALG;
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MonoDBBridgeManager; }
namespace RPG::Client { class MonoMapRotationVolumeV2; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define HNNJFHDKAME_AGAMNHBCCGH_OFFSET UNITYSDK_OFFSET(0x15DA3BF0)
#define HNNJFHDKAME_BCMKCGFOOMP_OFFSET UNITYSDK_OFFSET(0x15DA5F50)
#define HNNJFHDKAME_BFJFCLMFEDD_OFFSET UNITYSDK_OFFSET(0x15DA4250)
#define HNNJFHDKAME_BGJNOLNMOPK_OFFSET UNITYSDK_OFFSET(0x15DA4580)
#define HNNJFHDKAME_BJEBIMGPKBB_OFFSET UNITYSDK_OFFSET(0x15DA62A0)
#define HNNJFHDKAME_BMGBJKNHPEN_OFFSET UNITYSDK_OFFSET(0x15DA50A0)
#define HNNJFHDKAME_BNINNPGEOIP_OFFSET UNITYSDK_OFFSET(0x15DA3500)
#define HNNJFHDKAME_CCLDJLHLCJK_OFFSET UNITYSDK_OFFSET(0x15DA4B40)
#define HNNJFHDKAME_CCTOR_OFFSET UNITYSDK_OFFSET(0x15DA6510)
#define HNNJFHDKAME_CEALELJGMIL_OFFSET UNITYSDK_OFFSET(0x15DA6060)
#define HNNJFHDKAME_CFHDDLFJIEN_OFFSET UNITYSDK_OFFSET(0x15DA3090)
#define HNNJFHDKAME_CNBFJOHMMEO_OFFSET UNITYSDK_OFFSET(0x15DA21E0)
#define HNNJFHDKAME_CTOR_OFFSET UNITYSDK_OFFSET(0x15DA16F0)
#define HNNJFHDKAME_DDGGHFEPJBL_OFFSET UNITYSDK_OFFSET(0x15DA3640)
#define HNNJFHDKAME_DIBIPGEIONC_OFFSET UNITYSDK_OFFSET(0x15DA6190)
#define HNNJFHDKAME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DA1700)
#define HNNJFHDKAME_DKIADGNDDOF_OFFSET UNITYSDK_OFFSET(0x15DA2450)
#define HNNJFHDKAME_EJNJHOONIFM_OFFSET UNITYSDK_OFFSET(0x15DA2040)
#define HNNJFHDKAME_FGAEILOBNAL_OFFSET UNITYSDK_OFFSET(0x15DA50F0)
#define HNNJFHDKAME_FGGDPBDIFLB_OFFSET UNITYSDK_OFFSET(0x15DA2FD0)
#define HNNJFHDKAME_GACCHFPCDEB_OFFSET UNITYSDK_OFFSET(0x15DA51A0)
#define HNNJFHDKAME_GBGCIIBCJEA_OFFSET UNITYSDK_OFFSET(0x15DA1BD0)
#define HNNJFHDKAME_GDAAFEPOGIE_OFFSET UNITYSDK_OFFSET(0x15DA4400)
#define HNNJFHDKAME_GET_ISDISPOSABLE_OFFSET UNITYSDK_OFFSET(0x15DA64F0)
#define HNNJFHDKAME_GET_LASTACTIVETRIGGERINDEX_OFFSET UNITYSDK_OFFSET(0x15DA64D0)
#define HNNJFHDKAME_GHAAALIHOKN_OFFSET UNITYSDK_OFFSET(0x15DA55E0)
#define HNNJFHDKAME_GHPBDKLHACE_OFFSET UNITYSDK_OFFSET(0x15DA3170)
#define HNNJFHDKAME_GLJMDGMCFPD_OFFSET UNITYSDK_OFFSET(0x15DA24D0)
#define HNNJFHDKAME_HDHGINJAGGI_OFFSET UNITYSDK_OFFSET(0x15DA3110)
#define HNNJFHDKAME_HFIFOEKLGMF_OFFSET UNITYSDK_OFFSET(0x15DA2F70)
#define HNNJFHDKAME_HKMKKIOOOLN_OFFSET UNITYSDK_OFFSET(0x15DA3B20)
#define HNNJFHDKAME_IEIBKPGHBAN_OFFSET UNITYSDK_OFFSET(0x15DA3DB0)
#define HNNJFHDKAME_IPGGKHOOLJA_OFFSET UNITYSDK_OFFSET(0x15DA5350)
#define HNNJFHDKAME_JCDODMHBFBC_OFFSET UNITYSDK_OFFSET(0x15DA4E80)
#define HNNJFHDKAME_JFJKJDMINBL_OFFSET UNITYSDK_OFFSET(0x15DA2E20)
#define HNNJFHDKAME_JGDIFKOJDHB_OFFSET UNITYSDK_OFFSET(0x15DA1C30)
#define HNNJFHDKAME_JLNPKCHDCDO_OFFSET UNITYSDK_OFFSET(0x15DA2CE0)
#define HNNJFHDKAME_KEGLJNGAAIJ_OFFSET UNITYSDK_OFFSET(0x15DA3F30)
#define HNNJFHDKAME_KGNMNOLEGBP_OFFSET UNITYSDK_OFFSET(0x15DA3690)
#define HNNJFHDKAME_KHIGGIHHGLL_OFFSET UNITYSDK_OFFSET(0x15DA4C30)
#define HNNJFHDKAME_KKIHMKBPNNK_OFFSET UNITYSDK_OFFSET(0x15DA6240)
#define HNNJFHDKAME_KMLHOCEMFIC_OFFSET UNITYSDK_OFFSET(0x15DA4C90)
#define HNNJFHDKAME_KOALJCBLHLI_OFFSET UNITYSDK_OFFSET(0x15DA5630)
#define HNNJFHDKAME_LALJJOECDDI_OFFSET UNITYSDK_OFFSET(0x15DA5D90)
#define HNNJFHDKAME_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15DA2260)
#define HNNJFHDKAME_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15DA2770)
#define HNNJFHDKAME_LODODFJFMJK_OFFSET UNITYSDK_OFFSET(0x15DA42B0)
#define HNNJFHDKAME_NIFPFMNGFGE_OFFSET UNITYSDK_OFFSET(0x15DA1C90)
#define HNNJFHDKAME_NOPJCNFGHBF_OFFSET UNITYSDK_OFFSET(0x15DA4190)
#define HNNJFHDKAME_OKGOKHHDMFL_OFFSET UNITYSDK_OFFSET(0x15DA4600)
#define HNNJFHDKAME_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x15DA31D0)
#define HNNJFHDKAME_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x15DA1FF0)
#define HNNJFHDKAME_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x15DA34B0)
#define HNNJFHDKAME_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x15DA3600)
#define HNNJFHDKAME_PGFFEBPGFIN_OFFSET UNITYSDK_OFFSET(0x15DA49E0)
#define HNNJFHDKAME_POLCMOAPJCJ_OFFSET UNITYSDK_OFFSET(0x15DA3FD0)
#define HNNJFHDKAME_SET_ISDISPOSABLE_OFFSET UNITYSDK_OFFSET(0x15DA6500)
#define HNNJFHDKAME_SET_LASTACTIVETRIGGERINDEX_OFFSET UNITYSDK_OFFSET(0x15DA64E0)

inline static constexpr unsigned int HNNJFHDKAME_TypeDefinitionIndex = 57319;

	class HNNJFHDKAME : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::KDFFHMDFALG* FGNBCPELJEO; // 0x18
		::RPG::Client::MonoDBBridgeManager* HOIBIIBKJPF; // 0x20
		::UnityEngine::Coroutine* NGKCIBGDPGC; // 0x28
		::RPG::Client::MonoMapRotationVolumeV2* BJECAMIEKJP; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* BFDCDIJMCPI; // 0x38
		::RPG::GameCore::CharacterVisibleComponent* BILIDIDJJDN; // 0x40
		::EDHPIGIAOLE* NEFDDGCPFFG; // 0x48
		::UnityEngine::Coroutine* CFCBBBNJECH; // 0x50
		::RPG::GameCore::ColliderTriggerComponent* BAOGDDEGAFI; // 0x58
		::DLNCBOGAMFG* BAMECAHHEKC; // 0x60
		::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x68
		::System::String* ABCFIIJDMPF; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FHKIKPOPLPJ*>* JLHHDCAGOHN; // 0x78
		::RPG::Client::MapPropDef* MIGHKCIGDDI; // 0x80
		::System::UInt32 _LastActiveTriggerIndex_k__BackingField; // 0x88
		::System::UInt32 BPPAFJECLFG; // 0x8C
		::System::Boolean NNCFLIMCKFN; // 0x90
		::System::Boolean _IsDisposable_k__BackingField; // 0x91
		::System::Boolean HDIMLJNFAFJ; // 0x92
		::System::Boolean ABKMPGNDAHO; // 0x93
		::System::Single PMGIGBAMIDI; // 0x94
		::RPG::Client::ReasonBool_1<::System::Object*> LBENNOKEJIH; // 0x98
		::UnityEngine::Matrix4x4 MOHAJBOGLHO; // 0xA0
		static ::System::Int32* StaticGet_NGPJLAGENOO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HNNJFHDKAME")->GetStaticField(0xAF90);
		}

		static ::System::Int32* StaticGet_PFLFGALLMAO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HNNJFHDKAME")->GetStaticField(0xAF94);
		}

		static ::System::Int32* StaticGet_JLHDJJKLBIF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HNNJFHDKAME")->GetStaticField(0xAF98);
		}

		// static const ::System::Object AJLFCGEBDIC; // 0x0
		// static const ::System::Object FODMOOCHMFO; // 0x0
		// static const ::System::Object EHCIFIMFCJC; // 0x0
		// static const ::System::String* CKNGGBKEOEE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNNJFHDKAME_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_DISPOSE_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HNNJFHDKAME_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void HDHGINJAGGI(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + HNNJFHDKAME_HDHGINJAGGI_OFFSET))(this, a1, a2);
		}

		::System::Void GHPBDKLHACE(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + HNNJFHDKAME_GHPBDKLHACE_OFFSET))(this, a1, a2);
		}

		::System::Void CFHDDLFJIEN(::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>*))((::PBYTE)hIl2Cpp + HNNJFHDKAME_CFHDDLFJIEN_OFFSET))(this, a1);
		}

		::System::Void CNBFJOHMMEO(::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>*))((::PBYTE)hIl2Cpp + HNNJFHDKAME_CNBFJOHMMEO_OFFSET))(this, a1);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void DDGGHFEPJBL(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + HNNJFHDKAME_DDGGHFEPJBL_OFFSET))(this, a1);
		}

		::System::Void KGNMNOLEGBP(::Il2CppArray<::FHKIKPOPLPJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::FHKIKPOPLPJ*>*))((::PBYTE)hIl2Cpp + HNNJFHDKAME_KGNMNOLEGBP_OFFSET))(this, a1);
		}

		::System::Void AGAMNHBCCGH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNNJFHDKAME_AGAMNHBCCGH_OFFSET))(this, a1);
		}

		::System::Boolean KEGLJNGAAIJ(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HNNJFHDKAME_KEGLJNGAAIJ_OFFSET))(this, a1);
		}

		::System::Void NOPJCNFGHBF(::System::Boolean a1, ::HNNJFHDKAME_DisableInteractReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::HNNJFHDKAME_DisableInteractReason))((::PBYTE)hIl2Cpp + HNNJFHDKAME_NOPJCNFGHBF_OFFSET))(this, a1, a2);
		}

		::System::Void BFJFCLMFEDD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNNJFHDKAME_BFJFCLMFEDD_OFFSET))(this, a1);
		}

		::System::Void FGGDPBDIFLB(::RPG::GameCore::MapRotationVolumeState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationVolumeState))((::PBYTE)hIl2Cpp + HNNJFHDKAME_FGGDPBDIFLB_OFFSET))(this, a1);
		}

		::System::Void JFJKJDMINBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_JFJKJDMINBL_OFFSET))(this);
		}

		::System::Void EJNJHOONIFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_EJNJHOONIFM_OFFSET))(this);
		}

		::System::Void GDAAFEPOGIE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNNJFHDKAME_GDAAFEPOGIE_OFFSET))(this, a1);
		}

		::System::Boolean POLCMOAPJCJ(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HNNJFHDKAME_POLCMOAPJCJ_OFFSET))(this, a1, a2);
		}

		::System::Void BGJNOLNMOPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_BGJNOLNMOPK_OFFSET))(this);
		}

		::System::Void PGFFEBPGFIN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNNJFHDKAME_PGFFEBPGFIN_OFFSET))(this, a1);
		}

		::System::Void HFIFOEKLGMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_HFIFOEKLGMF_OFFSET))(this);
		}

		::System::Void LODODFJFMJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_LODODFJFMJK_OFFSET))(this);
		}

		::System::Void HKMKKIOOOLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_HKMKKIOOOLN_OFFSET))(this);
		}

		::System::Void CCLDJLHLCJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_CCLDJLHLCJK_OFFSET))(this);
		}

		::System::Void IEIBKPGHBAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_IEIBKPGHBAN_OFFSET))(this);
		}

		::System::Void KMLHOCEMFIC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNNJFHDKAME_KMLHOCEMFIC_OFFSET))(this, a1);
		}

		::System::Void JCDODMHBFBC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNNJFHDKAME_JCDODMHBFBC_OFFSET))(this, a1);
		}

		::System::Void BMGBJKNHPEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_BMGBJKNHPEN_OFFSET))(this);
		}

		::System::Void NIFPFMNGFGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_NIFPFMNGFGE_OFFSET))(this);
		}

		::System::Void JLNPKCHDCDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_JLNPKCHDCDO_OFFSET))(this);
		}

		::System::Collections::IEnumerator* FGAEILOBNAL(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + HNNJFHDKAME_FGAEILOBNAL_OFFSET))(this, a1, a2);
		}

		::System::Void GACCHFPCDEB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNNJFHDKAME_GACCHFPCDEB_OFFSET))(this, a1);
		}

		::System::Void GBGCIIBCJEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_GBGCIIBCJEA_OFFSET))(this);
		}

		::System::Void IPGGKHOOLJA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNNJFHDKAME_IPGGKHOOLJA_OFFSET))(this, a1);
		}

		::System::Void BNINNPGEOIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNNJFHDKAME_BNINNPGEOIP_OFFSET))(this, a1);
		}

		::System::Void GHAAALIHOKN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + HNNJFHDKAME_GHAAALIHOKN_OFFSET))(this, a1);
		}

		::System::Void GLJMDGMCFPD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNNJFHDKAME_GLJMDGMCFPD_OFFSET))(this, a1);
		}

		::System::Void KOALJCBLHLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_KOALJCBLHLI_OFFSET))(this);
		}

		::System::Void OKGOKHHDMFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_OKGOKHHDMFL_OFFSET))(this);
		}

		::System::Void LALJJOECDDI(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HNNJFHDKAME_LALJJOECDDI_OFFSET))(this, a1, a2);
		}

		::System::Void JGDIFKOJDHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_JGDIFKOJDHB_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DIBIPGEIONC(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + HNNJFHDKAME_DIBIPGEIONC_OFFSET))(this, a1, a2);
		}

		::System::Void CEALELJGMIL(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HNNJFHDKAME_CEALELJGMIL_OFFSET))(this, a1, a2);
		}

		::System::Void BCMKCGFOOMP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNNJFHDKAME_BCMKCGFOOMP_OFFSET))(this, a1);
		}

		::RPG::GameCore::MapRotationVolumeState DKIADGNDDOF()
		{
			return ((::RPG::GameCore::MapRotationVolumeState(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_DKIADGNDDOF_OFFSET))(this);
		}

		::UnityEngine::GameObject* KKIHMKBPNNK()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_KKIHMKBPNNK_OFFSET))(this);
		}

		::UnityEngine::GameObject* BJEBIMGPKBB()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_BJEBIMGPKBB_OFFSET))(this);
		}

		::System::UInt32 get_LastActiveTriggerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_GET_LASTACTIVETRIGGERINDEX_OFFSET))(this);
		}

		::System::Void set_LastActiveTriggerIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNNJFHDKAME_SET_LASTACTIVETRIGGERINDEX_OFFSET))(this, a1);
		}

		::System::Boolean KHIGGIHHGLL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_KHIGGIHHGLL_OFFSET))(this);
		}

		::System::Boolean get_IsDisposable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNJFHDKAME_GET_ISDISPOSABLE_OFFSET))(this);
		}

		::System::Void set_IsDisposable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNNJFHDKAME_SET_ISDISPOSABLE_OFFSET))(this, a1);
		}

	};
