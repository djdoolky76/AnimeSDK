#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectPoolReleaseMode.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/RPG/Client/PoolGameObjectInstantiateStrategy.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class AIBOPLOBAFN;
class CCAFCCGAFDG;
class LEKNHIPIKCF;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define LFPJGOEOLNH_ACGNBFNIEBO_OFFSET UNITYSDK_OFFSET(0xBF1FE90)
#define LFPJGOEOLNH_ADPPNCMHKGN_OFFSET UNITYSDK_OFFSET(0xBF1FDE0)
#define LFPJGOEOLNH_AHLOKNNDGNH_OFFSET UNITYSDK_OFFSET(0xBF1FBA0)
#define LFPJGOEOLNH_AIKKLFMDPHB_OFFSET UNITYSDK_OFFSET(0xBF1FC70)
#define LFPJGOEOLNH_CIPACPJPHKE_OFFSET UNITYSDK_OFFSET(0xBF1D5C0)
#define LFPJGOEOLNH_CJOJNBGBIDD_OFFSET UNITYSDK_OFFSET(0xBF1FF20)
#define LFPJGOEOLNH_CLHACAOHJIP_OFFSET UNITYSDK_OFFSET(0xBF201E0)
#define LFPJGOEOLNH_CLMPAJFNDGJ_OFFSET UNITYSDK_OFFSET(0xBF1E220)
#define LFPJGOEOLNH_CTOR_OFFSET UNITYSDK_OFFSET(0xBF204D0)
#define LFPJGOEOLNH_DDBGPDMJKLA_OFFSET UNITYSDK_OFFSET(0xBF1C800)
#define LFPJGOEOLNH_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xBF1FC10)
#define LFPJGOEOLNH_DGOPLKGPICJ_OFFSET UNITYSDK_OFFSET(0xBF1E710)
#define LFPJGOEOLNH_DIMEGMFFPOB_OFFSET UNITYSDK_OFFSET(0xBF1FFF0)
#define LFPJGOEOLNH_DNPJEFGIGEO_OFFSET UNITYSDK_OFFSET(0xBF1E550)
#define LFPJGOEOLNH_EDJGMILLLMH_OFFSET UNITYSDK_OFFSET(0xBF20340)
#define LFPJGOEOLNH_FEKELKNAMDF_OFFSET UNITYSDK_OFFSET(0xBF20100)
#define LFPJGOEOLNH_FMOPFGKPAFB_1_OFFSET UNITYSDK_OFFSET(0xBF1DC80)
#define LFPJGOEOLNH_FMOPFGKPAFB_OFFSET UNITYSDK_OFFSET(0xBF1DAB0)
#define LFPJGOEOLNH_GCFOKCIOBHD_OFFSET UNITYSDK_OFFSET(0xBF1D340)
#define LFPJGOEOLNH_GET_EFFECTINSTANCEBUDGETBIAS_OFFSET UNITYSDK_OFFSET(0xBF204B0)
#define LFPJGOEOLNH_GET_FASTLOADMODE_OFFSET UNITYSDK_OFFSET(0xBF202C0)
#define LFPJGOEOLNH_GET_IGNOREINSTANCEBUDGET_OFFSET UNITYSDK_OFFSET(0xBF20430)
#define LFPJGOEOLNH_GET_INSTANTIATETIMEOUTBIAS_OFFSET UNITYSDK_OFFSET(0xBF20490)
#define LFPJGOEOLNH_GET_MAXSPAWNWAITTIME_OFFSET UNITYSDK_OFFSET(0xBF20470)
#define LFPJGOEOLNH_GET_POOLAUTORELEASEINTERVAL_OFFSET UNITYSDK_OFFSET(0xBF20450)
#define LFPJGOEOLNH_GET_POOLAUTORELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0xBF202E0)
#define LFPJGOEOLNH_GET_POOLIMMEDIATELYRELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0xBF20300)
#define LFPJGOEOLNH_GET_POOLRELEASEMODE_OFFSET UNITYSDK_OFFSET(0xBF20320)
#define LFPJGOEOLNH_GIFOIBGPILK_OFFSET UNITYSDK_OFFSET(0xBF20230)
#define LFPJGOEOLNH_GOPLKGMMJLM_OFFSET UNITYSDK_OFFSET(0xBF1C760)
#define LFPJGOEOLNH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBF1D080)
#define LFPJGOEOLNH_HELJAAAOGCF_1_OFFSET UNITYSDK_OFFSET(0xBF1D480)
#define LFPJGOEOLNH_HELJAAAOGCF_OFFSET UNITYSDK_OFFSET(0xBF1D2D0)
#define LFPJGOEOLNH_HPLCKOEKLDC_OFFSET UNITYSDK_OFFSET(0xBF1C6D0)
#define LFPJGOEOLNH_ICCFGLIOMNK_OFFSET UNITYSDK_OFFSET(0xBF20420)
#define LFPJGOEOLNH_IHLIMJGEEHD_OFFSET UNITYSDK_OFFSET(0xBF201A0)
#define LFPJGOEOLNH_IJPDHNBJJEK_OFFSET UNITYSDK_OFFSET(0xBEE50D0)
#define LFPJGOEOLNH_ILAIMFHFHDM_OFFSET UNITYSDK_OFFSET(0xBF1C850)
#define LFPJGOEOLNH_INIJCJJLPKM_OFFSET UNITYSDK_OFFSET(0xBF1D8C0)
#define LFPJGOEOLNH_JBILLPOOOAK_OFFSET UNITYSDK_OFFSET(0xBF1C690)
#define LFPJGOEOLNH_JCJGMDAOIPN_1_OFFSET UNITYSDK_OFFSET(0xBF1E030)
#define LFPJGOEOLNH_JCJGMDAOIPN_OFFSET UNITYSDK_OFFSET(0xBF1DF50)
#define LFPJGOEOLNH_JDNPPPMNMMM_OFFSET UNITYSDK_OFFSET(0xBF1EB70)
#define LFPJGOEOLNH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBF1EE40)
#define LFPJGOEOLNH_KCOEHIBKAOA_OFFSET UNITYSDK_OFFSET(0xBF20280)
#define LFPJGOEOLNH_KLMECHLJIMJ_OFFSET UNITYSDK_OFFSET(0xBF1D1D0)
#define LFPJGOEOLNH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBF1C8A0)
#define LFPJGOEOLNH_LKDLNDKADLI_OFFSET UNITYSDK_OFFSET(0xBF1F0A0)
#define LFPJGOEOLNH_LLHOMFPIIKD_OFFSET UNITYSDK_OFFSET(0xBF1C7B0)
#define LFPJGOEOLNH_LPOMGDHDNNP_OFFSET UNITYSDK_OFFSET(0xBF1EC00)
#define LFPJGOEOLNH_MDEEKIJJMLB_OFFSET UNITYSDK_OFFSET(0xBF1EB30)
#define LFPJGOEOLNH_MHMNIBPPHAF_OFFSET UNITYSDK_OFFSET(0xBF1E3C0)
#define LFPJGOEOLNH_MMBCKJBLHDH_OFFSET UNITYSDK_OFFSET(0xBF1FA60)
#define LFPJGOEOLNH_MPFKCHHCIMO_OFFSET UNITYSDK_OFFSET(0xBF1E110)
#define LFPJGOEOLNH_NHEPIEHHNIB_OFFSET UNITYSDK_OFFSET(0xBF1E470)
#define LFPJGOEOLNH_NMLNFGDJFNO_OFFSET UNITYSDK_OFFSET(0xBF1F370)
#define LFPJGOEOLNH_OCGDJAMBLFE_OFFSET UNITYSDK_OFFSET(0xBF1E8F0)
#define LFPJGOEOLNH_OGDBDEJMOBC_OFFSET UNITYSDK_OFFSET(0xBF1D740)
#define LFPJGOEOLNH_OPDMLMOJCNA_OFFSET UNITYSDK_OFFSET(0xBF1C710)
#define LFPJGOEOLNH_PPCHGCOOOHF_OFFSET UNITYSDK_OFFSET(0xBF1FB40)
#define LFPJGOEOLNH_PPJFOGPPGPH_OFFSET UNITYSDK_OFFSET(0xBF1E2F0)
#define LFPJGOEOLNH_SET_EFFECTINSTANCEBUDGETBIAS_OFFSET UNITYSDK_OFFSET(0xBF204C0)
#define LFPJGOEOLNH_SET_FASTLOADMODE_OFFSET UNITYSDK_OFFSET(0xBF202D0)
#define LFPJGOEOLNH_SET_IGNOREINSTANCEBUDGET_OFFSET UNITYSDK_OFFSET(0xBF20440)
#define LFPJGOEOLNH_SET_INSTANTIATETIMEOUTBIAS_OFFSET UNITYSDK_OFFSET(0xBF204A0)
#define LFPJGOEOLNH_SET_MAXSPAWNWAITTIME_OFFSET UNITYSDK_OFFSET(0xBF20480)
#define LFPJGOEOLNH_SET_POOLAUTORELEASEINTERVAL_OFFSET UNITYSDK_OFFSET(0xBF20460)
#define LFPJGOEOLNH_SET_POOLAUTORELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0xBF202F0)
#define LFPJGOEOLNH_SET_POOLIMMEDIATELYRELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0xBF20310)
#define LFPJGOEOLNH_SET_POOLRELEASEMODE_OFFSET UNITYSDK_OFFSET(0xBF20330)

inline static constexpr unsigned int LFPJGOEOLNH_TypeDefinitionIndex = 60648;

	class LFPJGOEOLNH : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* FDBKGKFNAFJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::AIBOPLOBAFN*>* IHDIKKPHBPB; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::AIBOPLOBAFN*>* CNDHKCIEPIE; // 0x20
		::Il2CppArray<::CCAFCCGAFDG*>* AOCPHNHJMCP; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::AIBOPLOBAFN*>* FFBACKGECGK; // 0x30
		::System::Collections::Generic::List_1<::System::Func_2<::System::String*, ::System::String*>*>* KDHHDLKCAAC; // 0x38
		::System::Collections::Generic::HashSet_1<::System::String*>* NGJDNLCCDJF; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* LNGCFPONKCJ; // 0x48
		::System::Boolean _IgnoreInstanceBudget_k__BackingField; // 0x50
		::System::Byte _padding0[0x7];
		::System::Double BLBOKNAIMCP; // 0x58
		::System::Single _PoolImmediatelyReleaseMemoryThresh_k__BackingField; // 0x60
		::RPG::Client::PoolGameObjectInstantiateStrategy JJOFIKOODCJ; // 0x64
		::System::Double LJMFOHAFBKO; // 0x68
		::System::Double CDIJHHFGIGA; // 0x70
		::System::Single _PoolAutoReleaseMemoryThresh_k__BackingField; // 0x78
		::System::Single _MaxSpawnWaitTime_k__BackingField; // 0x7C
		::System::Single _PoolAutoReleaseInterval_k__BackingField; // 0x80
		::System::Int32 OBFBCFHAAEL; // 0x84
		::System::Double ENJPCGNLACM; // 0x88
		::System::Boolean PHJBOCPNHNA; // 0x90
		::System::Boolean _FastLoadMode_k__BackingField; // 0x91
		::System::Boolean GCKCIHCBLPP; // 0x92
		::System::Boolean HEPHMMCDDFM; // 0x93
		::System::Int32 _EffectInstanceBudgetBias_k__BackingField; // 0x94
		::System::Single _InstantiateTimeoutBias_k__BackingField; // 0x98
		::RPG::Client::GameObjectPoolReleaseMode _PoolReleaseMode_k__BackingField; // 0x9C
		static ::System::Nullable_1<::System::Boolean>* StaticGet_OOEMLLNIBLJ()
		{
			return (::System::Nullable_1<::System::Boolean>*)UnitySDK::FromName("", "LFPJGOEOLNH")->GetStaticField(0x13980);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_CTOR_OFFSET))(this);
		}

		::System::Void JBILLPOOOAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_JBILLPOOOAK_OFFSET))(this);
		}

		::System::String* HPLCKOEKLDC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_HPLCKOEKLDC_OFFSET))(this);
		}

		::System::Void OPDMLMOJCNA(::AIBOPLOBAFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_OPDMLMOJCNA_OFFSET))(this, a1);
		}

		::System::Void GOPLKGMMJLM(::AIBOPLOBAFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_GOPLKGMMJLM_OFFSET))(this, a1);
		}

		::System::Void LLHOMFPIIKD(::AIBOPLOBAFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_LLHOMFPIIKD_OFFSET))(this, a1);
		}

		::System::Void DDBGPDMJKLA(::AIBOPLOBAFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_DDBGPDMJKLA_OFFSET))(this, a1);
		}

		::System::Void ILAIMFHFHDM(::AIBOPLOBAFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_ILAIMFHFHDM_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_HADOHLNHHGB_OFFSET))(this);
		}

		::CCAFCCGAFDG* HELJAAAOGCF(::RPG::Client::GameObjectPoolUsage a1)
		{
			return ((::CCAFCCGAFDG*(*)(::PVOID, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_HELJAAAOGCF_OFFSET))(this, a1);
		}

		::CCAFCCGAFDG* GCFOKCIOBHD(::System::String* a1)
		{
			return ((::CCAFCCGAFDG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_GCFOKCIOBHD_OFFSET))(this, a1);
		}

		::CCAFCCGAFDG* HELJAAAOGCF_1(::RPG::Client::GameObjectPoolUsage a1, ::System::String* a2)
		{
			return ((::CCAFCCGAFDG*(*)(::PVOID, ::RPG::Client::GameObjectPoolUsage, ::System::String*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_HELJAAAOGCF_1_OFFSET))(this, a1, a2);
		}

		::System::Void CIPACPJPHKE(::System::Collections::Generic::List_1<::AIBOPLOBAFN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AIBOPLOBAFN*>*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_CIPACPJPHKE_OFFSET))(this, a1);
		}

		::AIBOPLOBAFN* OGDBDEJMOBC(::System::String* a1, ::System::Boolean a2, ::RPG::Client::GameObjectPoolUsage a3)
		{
			return ((::AIBOPLOBAFN*(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_OGDBDEJMOBC_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* INIJCJJLPKM(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::Client::GameObjectPoolUsage a4)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_INIJCJJLPKM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FMOPFGKPAFB(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::RPG::Client::GameObjectPoolUsage a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_FMOPFGKPAFB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FMOPFGKPAFB_1(::System::String* a1, ::LEKNHIPIKCF* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::RPG::Client::GameObjectPoolUsage a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::LEKNHIPIKCF*, ::UnityEngine::Transform*, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_FMOPFGKPAFB_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JCJGMDAOIPN(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_JCJGMDAOIPN_OFFSET))(this, a1, a2);
		}

		::System::Void JCJGMDAOIPN_1(::System::String* a1, ::LEKNHIPIKCF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::LEKNHIPIKCF*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_JCJGMDAOIPN_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean MPFKCHHCIMO(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_MPFKCHHCIMO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CLMPAJFNDGJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_CLMPAJFNDGJ_OFFSET))(this, a1);
		}

		::System::Boolean PPJFOGPPGPH(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_PPJFOGPPGPH_OFFSET))(this, a1);
		}

		::AIBOPLOBAFN* MHMNIBPPHAF(::UnityEngine::GameObject* a1)
		{
			return ((::AIBOPLOBAFN*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_MHMNIBPPHAF_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* NHEPIEHHNIB(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_NHEPIEHHNIB_OFFSET))(this, a1);
		}

		::System::Void DNPJEFGIGEO(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_DNPJEFGIGEO_OFFSET))(this, a1, a2);
		}

		::System::Void DGOPLKGPICJ(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_DGOPLKGPICJ_OFFSET))(this, a1, a2);
		}

		::System::Void KLMECHLJIMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_KLMECHLJIMJ_OFFSET))(this);
		}

		::System::Void OCGDJAMBLFE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_OCGDJAMBLFE_OFFSET))(this, a1);
		}

		::System::Void JDNPPPMNMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_JDNPPPMNMMM_OFFSET))(this);
		}

		::System::Void LPOMGDHDNNP(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_LPOMGDHDNNP_OFFSET))(this, a1, a2);
		}

		::System::Void IJPDHNBJJEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_IJPDHNBJJEK_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void PPCHGCOOOHF(::RPG::Client::GameObjectPoolReleaseMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameObjectPoolReleaseMode))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_PPCHGCOOOHF_OFFSET))(this, a1);
		}

		::System::Void MDEEKIJJMLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_MDEEKIJJMLB_OFFSET))(this);
		}

		::System::Void AHLOKNNDGNH(::System::Int64 a1, ::System::Int64 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_AHLOKNNDGNH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LKDLNDKADLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_LKDLNDKADLI_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void AIKKLFMDPHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_AIKKLFMDPHB_OFFSET))(this);
		}

		::System::Void ADPPNCMHKGN(::System::Func_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_ADPPNCMHKGN_OFFSET))(this, a1);
		}

		::System::Void ACGNBFNIEBO(::System::Func_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_ACGNBFNIEBO_OFFSET))(this, a1);
		}

		::System::String* CJOJNBGBIDD(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_CJOJNBGBIDD_OFFSET))(this, a1);
		}

		::System::Void DIMEGMFFPOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_DIMEGMFFPOB_OFFSET))(this);
		}

		::System::Boolean FEKELKNAMDF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_FEKELKNAMDF_OFFSET))(this, a1);
		}

		::System::Void NMLNFGDJFNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_NMLNFGDJFNO_OFFSET))(this);
		}

		::System::Void MMBCKJBLHDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_MMBCKJBLHDH_OFFSET))(this);
		}

		::System::Void IHLIMJGEEHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_IHLIMJGEEHD_OFFSET))(this);
		}

		::System::String* CLHACAOHJIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_CLHACAOHJIP_OFFSET))(this);
		}

		::System::String* GIFOIBGPILK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_GIFOIBGPILK_OFFSET))(this);
		}

		static ::System::Void KCOEHIBKAOA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFPJGOEOLNH_KCOEHIBKAOA_OFFSET))();
		}

		::System::Boolean get_FastLoadMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_GET_FASTLOADMODE_OFFSET))(this);
		}

		::System::Void set_FastLoadMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_SET_FASTLOADMODE_OFFSET))(this, a1);
		}

		::System::Single get_PoolAutoReleaseMemoryThresh()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_GET_POOLAUTORELEASEMEMORYTHRESH_OFFSET))(this);
		}

		::System::Void set_PoolAutoReleaseMemoryThresh(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_SET_POOLAUTORELEASEMEMORYTHRESH_OFFSET))(this, a1);
		}

		::System::Single get_PoolImmediatelyReleaseMemoryThresh()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_GET_POOLIMMEDIATELYRELEASEMEMORYTHRESH_OFFSET))(this);
		}

		::System::Void set_PoolImmediatelyReleaseMemoryThresh(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_SET_POOLIMMEDIATELYRELEASEMEMORYTHRESH_OFFSET))(this, a1);
		}

		::RPG::Client::GameObjectPoolReleaseMode get_PoolReleaseMode()
		{
			return ((::RPG::Client::GameObjectPoolReleaseMode(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_GET_POOLRELEASEMODE_OFFSET))(this);
		}

		::System::Void set_PoolReleaseMode(::RPG::Client::GameObjectPoolReleaseMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameObjectPoolReleaseMode))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_SET_POOLRELEASEMODE_OFFSET))(this, a1);
		}

		::System::Int32 EDJGMILLLMH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_EDJGMILLLMH_OFFSET))(this);
		}

		::RPG::Client::PoolGameObjectInstantiateStrategy ICCFGLIOMNK()
		{
			return ((::RPG::Client::PoolGameObjectInstantiateStrategy(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_ICCFGLIOMNK_OFFSET))(this);
		}

		::System::Boolean get_IgnoreInstanceBudget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_GET_IGNOREINSTANCEBUDGET_OFFSET))(this);
		}

		::System::Void set_IgnoreInstanceBudget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_SET_IGNOREINSTANCEBUDGET_OFFSET))(this, a1);
		}

		::System::Single get_PoolAutoReleaseInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_GET_POOLAUTORELEASEINTERVAL_OFFSET))(this);
		}

		::System::Void set_PoolAutoReleaseInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_SET_POOLAUTORELEASEINTERVAL_OFFSET))(this, a1);
		}

		::System::Single get_MaxSpawnWaitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_GET_MAXSPAWNWAITTIME_OFFSET))(this);
		}

		::System::Void set_MaxSpawnWaitTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_SET_MAXSPAWNWAITTIME_OFFSET))(this, a1);
		}

		::System::Single get_InstantiateTimeoutBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_GET_INSTANTIATETIMEOUTBIAS_OFFSET))(this);
		}

		::System::Void set_InstantiateTimeoutBias(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_SET_INSTANTIATETIMEOUTBIAS_OFFSET))(this, a1);
		}

		::System::Int32 get_EffectInstanceBudgetBias()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_GET_EFFECTINSTANCEBUDGETBIAS_OFFSET))(this);
		}

		::System::Void set_EffectInstanceBudgetBias(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LFPJGOEOLNH_SET_EFFECTINSTANCEBUDGETBIAS_OFFSET))(this, a1);
		}

	};
