#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Nullable_1.h"
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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHOMABBDNPN_AFBJKGFJLGA_OFFSET UNITYSDK_OFFSET(0x173E07C0)
#define IHOMABBDNPN_AFPPCEKPPMJ_OFFSET UNITYSDK_OFFSET(0x173E2100)
#define IHOMABBDNPN_AIIJHJAABAI_OFFSET UNITYSDK_OFFSET(0x173E3D10)
#define IHOMABBDNPN_AMNLBJCHAED_OFFSET UNITYSDK_OFFSET(0x173E2FF0)
#define IHOMABBDNPN_AOGIIJIHFEO_OFFSET UNITYSDK_OFFSET(0x173E2DB0)
#define IHOMABBDNPN_BJDACBHEACI_OFFSET UNITYSDK_OFFSET(0x173E1950)
#define IHOMABBDNPN_BKGJBDFDFLN_OFFSET UNITYSDK_OFFSET(0x173E1550)
#define IHOMABBDNPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x173E4480)
#define IHOMABBDNPN_CJEHMOAANOG_OFFSET UNITYSDK_OFFSET(0x173DFDA0)
#define IHOMABBDNPN_CMBGBPKEAFM_1_OFFSET UNITYSDK_OFFSET(0x173E3190)
#define IHOMABBDNPN_CMBGBPKEAFM_OFFSET UNITYSDK_OFFSET(0x173E3130)
#define IHOMABBDNPN_CTOR_OFFSET UNITYSDK_OFFSET(0x173E43B0)
#define IHOMABBDNPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x173DF4A0)
#define IHOMABBDNPN_DONFKADAPLB_OFFSET UNITYSDK_OFFSET(0x173E12F0)
#define IHOMABBDNPN_ECMEKHHPDGK_OFFSET UNITYSDK_OFFSET(0x173E1D30)
#define IHOMABBDNPN_EEKCHALBANJ_OFFSET UNITYSDK_OFFSET(0x173E3930)
#define IHOMABBDNPN_EOGLEKOMHOB_OFFSET UNITYSDK_OFFSET(0x173E1670)
#define IHOMABBDNPN_FAIBDFPHAAJ_OFFSET UNITYSDK_OFFSET(0x173DF1F0)
#define IHOMABBDNPN_FLGIJKCECMN_OFFSET UNITYSDK_OFFSET(0x173E1270)
#define IHOMABBDNPN_FOCGNIIHDIN_OFFSET UNITYSDK_OFFSET(0x173E4100)
#define IHOMABBDNPN_FPDKPGOPDJJ_OFFSET UNITYSDK_OFFSET(0x173DEFD0)
#define IHOMABBDNPN_FPLMEMDMAAF_OFFSET UNITYSDK_OFFSET(0x173E2AE0)
#define IHOMABBDNPN_GET_BLOCKOTHERENTITYEFFECTS_OFFSET UNITYSDK_OFFSET(0x173E4230)
#define IHOMABBDNPN_GHIEPEDHNJC_OFFSET UNITYSDK_OFFSET(0x173E1CB0)
#define IHOMABBDNPN_GJMOFKABPFG_OFFSET UNITYSDK_OFFSET(0x173DF700)
#define IHOMABBDNPN_GNHAKKDPLJE_OFFSET UNITYSDK_OFFSET(0x173E2460)
#define IHOMABBDNPN_HLBJOJEJODB_OFFSET UNITYSDK_OFFSET(0x173E26B0)
#define IHOMABBDNPN_IOIBEDMNAFH_1_OFFSET UNITYSDK_OFFSET(0x173E0460)
#define IHOMABBDNPN_IOIBEDMNAFH_OFFSET UNITYSDK_OFFSET(0x173E0270)
#define IHOMABBDNPN_JDBKCOBIOPP_OFFSET UNITYSDK_OFFSET(0x173E36C0)
#define IHOMABBDNPN_JENDGIFKNHA_1_OFFSET UNITYSDK_OFFSET(0x173E0310)
#define IHOMABBDNPN_JENDGIFKNHA_2_OFFSET UNITYSDK_OFFSET(0x173E0740)
#define IHOMABBDNPN_JENDGIFKNHA_OFFSET UNITYSDK_OFFSET(0x173E0540)
#define IHOMABBDNPN_JNJFDFKLHNM_OFFSET UNITYSDK_OFFSET(0x173DE4F0)
#define IHOMABBDNPN_JOBMCEFHLPO_OFFSET UNITYSDK_OFFSET(0x173DE7B0)
#define IHOMABBDNPN_KHCGENIKGLE_OFFSET UNITYSDK_OFFSET(0x173DEC80)
#define IHOMABBDNPN_LGCFFEAOJPG_1_OFFSET UNITYSDK_OFFSET(0x173E06C0)
#define IHOMABBDNPN_LGCFFEAOJPG_OFFSET UNITYSDK_OFFSET(0x173E0640)
#define IHOMABBDNPN_LLLPGBLDBDE_OFFSET UNITYSDK_OFFSET(0x173DE3F0)
#define IHOMABBDNPN_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x173E00D0)
#define IHOMABBDNPN_MBNPOPMJPPI_OFFSET UNITYSDK_OFFSET(0x173DFBE0)
#define IHOMABBDNPN_MIIKIAAFOBH_OFFSET UNITYSDK_OFFSET(0x173E2620)
#define IHOMABBDNPN_MKEJPJPNJFC_OFFSET UNITYSDK_OFFSET(0x173E1F30)
#define IHOMABBDNPN_MNKGEAMGHJG_OFFSET UNITYSDK_OFFSET(0x173DF800)
#define IHOMABBDNPN_NJCLIFGFKIE_OFFSET UNITYSDK_OFFSET(0x173E1F90)
#define IHOMABBDNPN_NMIPPEEDDHA_OFFSET UNITYSDK_OFFSET(0x173E1A70)
#define IHOMABBDNPN_NNKDPHOAPLI_OFFSET UNITYSDK_OFFSET(0x173E1BE0)
#define IHOMABBDNPN_NPLCGBDLFGN_1_OFFSET UNITYSDK_OFFSET(0x173E0DE0)
#define IHOMABBDNPN_NPLCGBDLFGN_2_OFFSET UNITYSDK_OFFSET(0x173E08B0)
#define IHOMABBDNPN_NPLCGBDLFGN_OFFSET UNITYSDK_OFFSET(0x173E0990)
#define IHOMABBDNPN_OKGMIEPMCBB_OFFSET UNITYSDK_OFFSET(0x173E1C70)
#define IHOMABBDNPN_OPPFOEHHAHJ_OFFSET UNITYSDK_OFFSET(0x173E01B0)
#define IHOMABBDNPN_PBNJIIPLCFJ_OFFSET UNITYSDK_OFFSET(0x173E2930)
#define IHOMABBDNPN_PMKLIOBBGKB_OFFSET UNITYSDK_OFFSET(0x173E2BB0)
#define IHOMABBDNPN_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x173E4250)
#define IHOMABBDNPN_SET_BLOCKOTHERENTITYEFFECTS_OFFSET UNITYSDK_OFFSET(0x173E4240)
#define IHOMABBDNPN_TICK_OFFSET UNITYSDK_OFFSET(0x173DF180)
#define IHOMABBDNPN__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x173DF040)

inline static constexpr unsigned int IHOMABBDNPN_TypeDefinitionIndex = 58554;

	class IHOMABBDNPN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::IHOMABBDNPN_FIADDBBCCCF* NKHCHDALCJE; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* MPCMNIDNHJE; // 0x20
		::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* PFDCFCCBLBG; // 0x28
		::IDCOKMGFCGJ* BLCANICCCLP; // 0x30
		::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* ODFPMCFIJLM; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TriggerEffectParamsRef>* ADLBDCIKOHI; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdvEffectConfig*>* KNJAEFDMNJJ; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* FLLCAKMNNLH; // 0x50
		::RPG::GameCore::PropComponent* IGLCEJGPMJN; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::TriggerEffectParamsRef>* IFFGEFKJCDH; // 0x60
		::RPG::Client::MonoEffectManager* KENLJFPJNJO; // 0x68
		::System::Collections::Generic::List_1<::RPG::GameCore::JsonConfig*>* IJMKMLPFIJE; // 0x70
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x78
		::System::Boolean _BlockOtherEntityEffects_k__BackingField; // 0x80
		::System::Boolean GBJAELBFONJ; // 0x81
		::System::Boolean JBFGNEDEMMD; // 0x82
		static ::System::String** StaticGet_MGMGLGLNBBK()
		{
			return (::System::String**)UnitySDK::FromName("", "IHOMABBDNPN")->GetStaticField(0x67160);
		}

		static ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>** StaticGet_OLGPGGOIHLE()
		{
			return (::Il2CppArray<::RPG::GameCore::MonoEffectFlag>**)UnitySDK::FromName("", "IHOMABBDNPN")->GetStaticField(0x67168);
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

		::System::UInt32 KHCGENIKGLE(::MNLHJMMEHEI_NNKHNDEBHDA* a1, ::System::Boolean a2, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::MNLHJMMEHEI_NNKHNDEBHDA*, ::System::Boolean, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_KHCGENIKGLE_OFFSET))(this, a1, a2, a3);
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

		::System::Void CMBGBPKEAFM_1(::System::String* a1, ::System::Nullable_1<::System::Boolean> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + IHOMABBDNPN_CMBGBPKEAFM_1_OFFSET))(this, a1, a2);
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
