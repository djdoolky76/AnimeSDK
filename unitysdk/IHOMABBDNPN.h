#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class IDCOKMGFCGJ;
class IHOMABBDNPN_FIADDBBCCCF;
class MNLHJMMEHEI_NNKHNDEBHDA;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class AdvEffectConfig; }
namespace RPG::GameCore { class AdvTriggerEffectList; }
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class JsonConfig; }
namespace RPG::GameCore { class LevelAdvEffectOverrideInfo; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffect; }
namespace System { class Action; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHOMABBDNPN_AFBJKGFJLGA_OFFSET UNITYSDK_OFFSET(0x16428BE0)
#define IHOMABBDNPN_AFPPCEKPPMJ_OFFSET UNITYSDK_OFFSET(0x1642A520)
#define IHOMABBDNPN_AIIJHJAABAI_OFFSET UNITYSDK_OFFSET(0x1642C140)
#define IHOMABBDNPN_AMNLBJCHAED_OFFSET UNITYSDK_OFFSET(0x1642B410)
#define IHOMABBDNPN_AOGIIJIHFEO_OFFSET UNITYSDK_OFFSET(0x1642B1D0)
#define IHOMABBDNPN_BJDACBHEACI_OFFSET UNITYSDK_OFFSET(0x16429D70)
#define IHOMABBDNPN_BKGJBDFDFLN_OFFSET UNITYSDK_OFFSET(0x16429970)
#define IHOMABBDNPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1642C8B0)
#define IHOMABBDNPN_CJEHMOAANOG_OFFSET UNITYSDK_OFFSET(0x164281C0)
#define IHOMABBDNPN_CMBGBPKEAFM_1_OFFSET UNITYSDK_OFFSET(0x1642B5B0)
#define IHOMABBDNPN_CMBGBPKEAFM_OFFSET UNITYSDK_OFFSET(0x1642B550)
#define IHOMABBDNPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1642C7E0)
#define IHOMABBDNPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164278C0)
#define IHOMABBDNPN_DONFKADAPLB_OFFSET UNITYSDK_OFFSET(0x16429710)
#define IHOMABBDNPN_ECMEKHHPDGK_OFFSET UNITYSDK_OFFSET(0x1642A150)
#define IHOMABBDNPN_EEKCHALBANJ_OFFSET UNITYSDK_OFFSET(0x1642BD60)
#define IHOMABBDNPN_EOGLEKOMHOB_OFFSET UNITYSDK_OFFSET(0x16429A90)
#define IHOMABBDNPN_FAIBDFPHAAJ_OFFSET UNITYSDK_OFFSET(0x16427610)
#define IHOMABBDNPN_FLGIJKCECMN_OFFSET UNITYSDK_OFFSET(0x16429690)
#define IHOMABBDNPN_FOCGNIIHDIN_OFFSET UNITYSDK_OFFSET(0x1642C530)
#define IHOMABBDNPN_FPDKPGOPDJJ_OFFSET UNITYSDK_OFFSET(0x164273F0)
#define IHOMABBDNPN_FPLMEMDMAAF_OFFSET UNITYSDK_OFFSET(0x1642AF00)
#define IHOMABBDNPN_GET_BLOCKOTHERENTITYEFFECTS_OFFSET UNITYSDK_OFFSET(0x1642C660)
#define IHOMABBDNPN_GHIEPEDHNJC_OFFSET UNITYSDK_OFFSET(0x1642A0D0)
#define IHOMABBDNPN_GJMOFKABPFG_OFFSET UNITYSDK_OFFSET(0x16427B20)
#define IHOMABBDNPN_GNHAKKDPLJE_OFFSET UNITYSDK_OFFSET(0x1642A880)
#define IHOMABBDNPN_HLBJOJEJODB_OFFSET UNITYSDK_OFFSET(0x1642AAD0)
#define IHOMABBDNPN_IOIBEDMNAFH_1_OFFSET UNITYSDK_OFFSET(0x16428880)
#define IHOMABBDNPN_IOIBEDMNAFH_OFFSET UNITYSDK_OFFSET(0x16428690)
#define IHOMABBDNPN_JDBKCOBIOPP_OFFSET UNITYSDK_OFFSET(0x1642BAF0)
#define IHOMABBDNPN_JENDGIFKNHA_1_OFFSET UNITYSDK_OFFSET(0x16428730)
#define IHOMABBDNPN_JENDGIFKNHA_2_OFFSET UNITYSDK_OFFSET(0x16428B60)
#define IHOMABBDNPN_JENDGIFKNHA_OFFSET UNITYSDK_OFFSET(0x16428960)
#define IHOMABBDNPN_JNJFDFKLHNM_OFFSET UNITYSDK_OFFSET(0x16426910)
#define IHOMABBDNPN_JOBMCEFHLPO_OFFSET UNITYSDK_OFFSET(0x16426BD0)
#define IHOMABBDNPN_KHCGENIKGLE_OFFSET UNITYSDK_OFFSET(0x164270A0)
#define IHOMABBDNPN_LGCFFEAOJPG_1_OFFSET UNITYSDK_OFFSET(0x16428AE0)
#define IHOMABBDNPN_LGCFFEAOJPG_OFFSET UNITYSDK_OFFSET(0x16428A60)
#define IHOMABBDNPN_LLLPGBLDBDE_OFFSET UNITYSDK_OFFSET(0x16426810)
#define IHOMABBDNPN_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x164284F0)
#define IHOMABBDNPN_MBNPOPMJPPI_OFFSET UNITYSDK_OFFSET(0x16428000)
#define IHOMABBDNPN_MIIKIAAFOBH_OFFSET UNITYSDK_OFFSET(0x1642AA40)
#define IHOMABBDNPN_MKEJPJPNJFC_OFFSET UNITYSDK_OFFSET(0x1642A350)
#define IHOMABBDNPN_MNKGEAMGHJG_OFFSET UNITYSDK_OFFSET(0x16427C20)
#define IHOMABBDNPN_NJCLIFGFKIE_OFFSET UNITYSDK_OFFSET(0x1642A3B0)
#define IHOMABBDNPN_NMIPPEEDDHA_OFFSET UNITYSDK_OFFSET(0x16429E90)
#define IHOMABBDNPN_NNKDPHOAPLI_OFFSET UNITYSDK_OFFSET(0x1642A000)
#define IHOMABBDNPN_NPLCGBDLFGN_1_OFFSET UNITYSDK_OFFSET(0x16429200)
#define IHOMABBDNPN_NPLCGBDLFGN_2_OFFSET UNITYSDK_OFFSET(0x16428CD0)
#define IHOMABBDNPN_NPLCGBDLFGN_OFFSET UNITYSDK_OFFSET(0x16428DB0)
#define IHOMABBDNPN_OKGMIEPMCBB_OFFSET UNITYSDK_OFFSET(0x1642A090)
#define IHOMABBDNPN_OPPFOEHHAHJ_OFFSET UNITYSDK_OFFSET(0x164285D0)
#define IHOMABBDNPN_PBNJIIPLCFJ_OFFSET UNITYSDK_OFFSET(0x1642AD50)
#define IHOMABBDNPN_PMKLIOBBGKB_OFFSET UNITYSDK_OFFSET(0x1642AFD0)
#define IHOMABBDNPN_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1642C680)
#define IHOMABBDNPN_SET_BLOCKOTHERENTITYEFFECTS_OFFSET UNITYSDK_OFFSET(0x1642C670)
#define IHOMABBDNPN_TICK_OFFSET UNITYSDK_OFFSET(0x164275A0)
#define IHOMABBDNPN__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x16427460)

inline static constexpr unsigned int IHOMABBDNPN_TypeDefinitionIndex = 57326;

	class IHOMABBDNPN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* MPCMNIDNHJE; // 0x18
		::RPG::Client::MonoEffectManager* KENLJFPJNJO; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::JsonConfig*>* IJMKMLPFIJE; // 0x28
		::RPG::GameCore::PropComponent* IGLCEJGPMJN; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* PFDCFCCBLBG; // 0x40
		::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* ODFPMCFIJLM; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* FLLCAKMNNLH; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TriggerEffectParamsRef>* ADLBDCIKOHI; // 0x58
		::IHOMABBDNPN_FIADDBBCCCF* NKHCHDALCJE; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::TriggerEffectParamsRef>* IFFGEFKJCDH; // 0x68
		::IDCOKMGFCGJ* BLCANICCCLP; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdvEffectConfig*>* KNJAEFDMNJJ; // 0x78
		::System::Boolean GBJAELBFONJ; // 0x80
		::System::Boolean JBFGNEDEMMD; // 0x81
		::System::Boolean _BlockOtherEntityEffects_k__BackingField; // 0x82
		static ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>** StaticGet_OLGPGGOIHLE()
		{
			return (::Il2CppArray<::RPG::GameCore::MonoEffectFlag>**)UnitySDK::FromName("", "IHOMABBDNPN")->GetStaticField(0x5E530);
		}

		static ::System::String** StaticGet_MGMGLGLNBBK()
		{
			return (::System::String**)UnitySDK::FromName("", "IHOMABBDNPN")->GetStaticField(0x5E538);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHOMABBDNPN_CCTOR_OFFSET))();
		}

		::System::Void LLLPGBLDBDE(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IHOMABBDNPN_LLLPGBLDBDE_OFFSET))(this, a1, a2);
		}

		::System::Void JNJFDFKLHNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_JNJFDFKLHNM_OFFSET))(this);
		}

		::System::Void JOBMCEFHLPO(::RPG::PoolList_1<::System::Object*>* a1, ::RPG::PoolList_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::System::Object*>*, ::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_JOBMCEFHLPO_OFFSET))(this, a1, a2);
		}

		::System::UInt32 KHCGENIKGLE(::MNLHJMMEHEI_NNKHNDEBHDA* a1, ::System::Boolean a2, ::System::Action* a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::MNLHJMMEHEI_NNKHNDEBHDA*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_KHCGENIKGLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FPDKPGOPDJJ(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + IHOMABBDNPN_FPDKPGOPDJJ_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IHOMABBDNPN_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::System::Boolean a1, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IOIBEDMNAFH(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_IOIBEDMNAFH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IOIBEDMNAFH_1(::Il2CppArray<::System::String*>* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_IOIBEDMNAFH_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JENDGIFKNHA(::Il2CppArray<::RPG::GameCore::EffectConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EffectConfig*>*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_JENDGIFKNHA_OFFSET))(this, a1);
		}

		::System::Void JENDGIFKNHA_1(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_JENDGIFKNHA_1_OFFSET))(this, a1);
		}

		::System::Void JENDGIFKNHA_2(::RPG::GameCore::AdvTriggerEffectList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_JENDGIFKNHA_2_OFFSET))(this, a1);
		}

		::System::Void LGCFFEAOJPG(::RPG::GameCore::EffectConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EffectConfig*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_LGCFFEAOJPG_OFFSET))(this, a1);
		}

		::System::Void LGCFFEAOJPG_1(::RPG::GameCore::TriggerEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_LGCFFEAOJPG_1_OFFSET))(this, a1);
		}

		::System::Void FLGIJKCECMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_FLGIJKCECMN_OFFSET))(this);
		}

		::System::Void MNKGEAMGHJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_MNKGEAMGHJG_OFFSET))(this);
		}

		::System::Void BKGJBDFDFLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_BKGJBDFDFLN_OFFSET))(this);
		}

		::System::Void BJDACBHEACI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_BJDACBHEACI_OFFSET))(this);
		}

		::System::Void NMIPPEEDDHA(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_NMIPPEEDDHA_OFFSET))(this, a1);
		}

		::System::Void NNKDPHOAPLI(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_NNKDPHOAPLI_OFFSET))(this, a1);
		}

		::System::Void GJMOFKABPFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_GJMOFKABPFG_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* OKGMIEPMCBB()
		{
			return ((::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_OKGMIEPMCBB_OFFSET))(this);
		}

		::System::Void GHIEPEDHNJC(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_GHIEPEDHNJC_OFFSET))(this, a1);
		}

		::System::Void ECMEKHHPDGK(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_ECMEKHHPDGK_OFFSET))(this, a1);
		}

		::System::Boolean MKEJPJPNJFC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHOMABBDNPN_MKEJPJPNJFC_OFFSET))(this, a1);
		}

		::System::Void AFPPCEKPPMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_AFPPCEKPPMJ_OFFSET))(this);
		}

		::System::Void GNHAKKDPLJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_GNHAKKDPLJE_OFFSET))(this);
		}

		::System::Void MBNPOPMJPPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_MBNPOPMJPPI_OFFSET))(this);
		}

		::System::Void MIIKIAAFOBH(::RPG::Client::TriggerEffectParams* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + IHOMABBDNPN_MIIKIAAFOBH_OFFSET))(this, a1, a2);
		}

		::System::Boolean FPLMEMDMAAF(::System::String* a1, ::RPG::GameCore::AdvEffectConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdvEffectConfig*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_FPLMEMDMAAF_OFFSET))(this, a1, a2);
		}

		::System::Boolean PMKLIOBBGKB(::System::String* a1, ::RPG::Client::TriggerEffectParams* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_PMKLIOBBGKB_OFFSET))(this, a1, a2);
		}

		::System::Boolean AOGIIJIHFEO(::System::String* a1, ::RPG::Client::TriggerEffectParams* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_AOGIIJIHFEO_OFFSET))(this, a1, a2);
		}

		::System::Boolean AMNLBJCHAED(::System::String* a1, ::RPG::Client::TriggerEffectParams* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_AMNLBJCHAED_OFFSET))(this, a1, a2);
		}

		::System::Void CMBGBPKEAFM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_CMBGBPKEAFM_OFFSET))(this, a1);
		}

		::System::Void CMBGBPKEAFM_1(::System::String* a1, ::System::Nullable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Nullable*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_CMBGBPKEAFM_1_OFFSET))(this, a1, a2);
		}

		::System::Void JDBKCOBIOPP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_JDBKCOBIOPP_OFFSET))(this, a1);
		}

		::System::Void EEKCHALBANJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHOMABBDNPN_EEKCHALBANJ_OFFSET))(this, a1);
		}

		::System::Void OPPFOEHHAHJ(::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_OPPFOEHHAHJ_OFFSET))(this, a1, a2);
		}

		::System::Void CJEHMOAANOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_CJEHMOAANOG_OFFSET))(this);
		}

		::System::Void AIIJHJAABAI(::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_AIIJHJAABAI_OFFSET))(this, a1, a2);
		}

		::System::Void FOCGNIIHDIN(::RPG::GameCore::AdvEffectConfig* a1, ::RPG::GameCore::LevelAdvEffectOverrideInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvEffectConfig*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_FOCGNIIHDIN_OFFSET))(this, a1, a2);
		}

		::System::Void PBNJIIPLCFJ(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_PBNJIIPLCFJ_OFFSET))(this, a1);
		}

		::System::Void AFBJKGFJLGA(::RPG::GameCore::JsonConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_AFBJKGFJLGA_OFFSET))(this, a1);
		}

		::System::Boolean NJCLIFGFKIE(::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>*, ::System::UInt32))((::PBYTE)hIl2Cpp + IHOMABBDNPN_NJCLIFGFKIE_OFFSET))(this, a1, a2);
		}

		::System::Void FAIBDFPHAAJ(::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_FAIBDFPHAAJ_OFFSET))(this, a1);
		}

		::System::Void HLBJOJEJODB(::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>*, ::System::UInt32))((::PBYTE)hIl2Cpp + IHOMABBDNPN_HLBJOJEJODB_OFFSET))(this, a1, a2);
		}

		::System::Void DONFKADAPLB(::RPG::GameCore::JsonConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_DONFKADAPLB_OFFSET))(this, a1);
		}

		::System::Void EOGLEKOMHOB(::RPG::GameCore::JsonConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_EOGLEKOMHOB_OFFSET))(this, a1);
		}

		::System::Void NPLCGBDLFGN(::RPG::GameCore::EffectConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EffectConfig*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_NPLCGBDLFGN_OFFSET))(this, a1);
		}

		::System::Void NPLCGBDLFGN_1(::RPG::GameCore::TriggerEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_NPLCGBDLFGN_1_OFFSET))(this, a1);
		}

		::System::Void NPLCGBDLFGN_2(::RPG::GameCore::AdvTriggerEffectList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_NPLCGBDLFGN_2_OFFSET))(this, a1);
		}

		::System::Boolean get_BlockOtherEntityEffects()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_GET_BLOCKOTHERENTITYEFFECTS_OFFSET))(this);
		}

		::System::Void set_BlockOtherEntityEffects(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHOMABBDNPN_SET_BLOCKOTHERENTITYEFFECTS_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_RESETTODEFAULT_OFFSET))(this);
		}

	};
