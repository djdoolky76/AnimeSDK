#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJAKHIPNPGM.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/IMOHEHDKGPK.h"
class FEMCFBBGBDM;
class HEAIEBHLCMJ;
class IDCOKMGFCGJ;
namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class RootMotionHandler; }
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class PropOverrideAnimLayerConfig; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class SingleAnimBehaviourEvent; }
namespace RPG::GameCore { class SingleAnimEventConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorOverrideController; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define PKLHDDGKKOC_ABCOBFAJDJB_OFFSET UNITYSDK_OFFSET(0x147E6180)
#define PKLHDDGKKOC_AJOJJJBIALF_OFFSET UNITYSDK_OFFSET(0x18864AF0)
#define PKLHDDGKKOC_BBNPIJAOFFF_OFFSET UNITYSDK_OFFSET(0x18866660)
#define PKLHDDGKKOC_BHAOINPEGLP_OFFSET UNITYSDK_OFFSET(0x18866720)
#define PKLHDDGKKOC_BKJNNNBPMHH_1_OFFSET UNITYSDK_OFFSET(0x18866790)
#define PKLHDDGKKOC_BKJNNNBPMHH_OFFSET UNITYSDK_OFFSET(0x18866E70)
#define PKLHDDGKKOC_BNIKCIKAAIO_OFFSET UNITYSDK_OFFSET(0x188683F0)
#define PKLHDDGKKOC_CAIOAHKJLFC_OFFSET UNITYSDK_OFFSET(0x18865110)
#define PKLHDDGKKOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x188689B0)
#define PKLHDDGKKOC_CEHIGFOIAPB_OFFSET UNITYSDK_OFFSET(0x18867A80)
#define PKLHDDGKKOC_CLKCALGBIOO_OFFSET UNITYSDK_OFFSET(0x18867980)
#define PKLHDDGKKOC_CTOR_OFFSET UNITYSDK_OFFSET(0x188688C0)
#define PKLHDDGKKOC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18864420)
#define PKLHDDGKKOC_EDAIIANMKLM_OFFSET UNITYSDK_OFFSET(0x18865A80)
#define PKLHDDGKKOC_ENLFALMMDGI_OFFSET UNITYSDK_OFFSET(0x188645E0)
#define PKLHDDGKKOC_FGHMJKGEIFH_OFFSET UNITYSDK_OFFSET(0x18865240)
#define PKLHDDGKKOC_GBPLJOGKGBF_OFFSET UNITYSDK_OFFSET(0x147E6A10)
#define PKLHDDGKKOC_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0x18867A20)
#define PKLHDDGKKOC_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x18867A40)
#define PKLHDDGKKOC_GET_HASANIMATORPROPSTATE_OFFSET UNITYSDK_OFFSET(0x18867A60)
#define PKLHDDGKKOC_GMGAGAOLPNK_OFFSET UNITYSDK_OFFSET(0x18863C70)
#define PKLHDDGKKOC_GNLBNMAMPJH_OFFSET UNITYSDK_OFFSET(0x188676E0)
#define PKLHDDGKKOC_HCKNNCJFKIA_OFFSET UNITYSDK_OFFSET(0x18865600)
#define PKLHDDGKKOC_HFAIKMDBFIK_OFFSET UNITYSDK_OFFSET(0x147E6210)
#define PKLHDDGKKOC_HGGDOEPKHIB_OFFSET UNITYSDK_OFFSET(0x18868190)
#define PKLHDDGKKOC_JEMKLGDIAMD_OFFSET UNITYSDK_OFFSET(0x147E60D0)
#define PKLHDDGKKOC_JJPIDLADLCN_OFFSET UNITYSDK_OFFSET(0x18867940)
#define PKLHDDGKKOC_JLFOHCLFHCG_OFFSET UNITYSDK_OFFSET(0x18864DF0)
#define PKLHDDGKKOC_JNJJHKDKCHJ_OFFSET UNITYSDK_OFFSET(0x18866F40)
#define PKLHDDGKKOC_KFEMECHBJDM_OFFSET UNITYSDK_OFFSET(0x18867E90)
#define PKLHDDGKKOC_KIKDGODLLEN_OFFSET UNITYSDK_OFFSET(0x18866AE0)
#define PKLHDDGKKOC_LALHNMMLOHJ_OFFSET UNITYSDK_OFFSET(0x18867B00)
#define PKLHDDGKKOC_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x147E6120)
#define PKLHDDGKKOC_LMGAGMBCCHK_OFFSET UNITYSDK_OFFSET(0x147E64C0)
#define PKLHDDGKKOC_MCAJGLEBDMI_OFFSET UNITYSDK_OFFSET(0x18868450)
#define PKLHDDGKKOC_MJHDCBFCNDO_OFFSET UNITYSDK_OFFSET(0x188666C0)
#define PKLHDDGKKOC_MLGKEAKABPL_OFFSET UNITYSDK_OFFSET(0x18866B50)
#define PKLHDDGKKOC_MLHPMDFCKLJ_OFFSET UNITYSDK_OFFSET(0x188679D0)
#define PKLHDDGKKOC_NCOPHLODGLK_OFFSET UNITYSDK_OFFSET(0x18867790)
#define PKLHDDGKKOC_NLFOIMBEBEB_1_OFFSET UNITYSDK_OFFSET(0x188641A0)
#define PKLHDDGKKOC_NLFOIMBEBEB_OFFSET UNITYSDK_OFFSET(0x18863E70)
#define PKLHDDGKKOC_NMKNIMKJPNP_OFFSET UNITYSDK_OFFSET(0x18864A90)
#define PKLHDDGKKOC_OFOOMOBEIHB_OFFSET UNITYSDK_OFFSET(0x18867740)
#define PKLHDDGKKOC_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x188647B0)
#define PKLHDDGKKOC_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x18864C60)
#define PKLHDDGKKOC_OPOELFHJNIF_OFFSET UNITYSDK_OFFSET(0x18864870)
#define PKLHDDGKKOC_PCKMCKBKKFF_1_OFFSET UNITYSDK_OFFSET(0x188673E0)
#define PKLHDDGKKOC_PCKMCKBKKFF_OFFSET UNITYSDK_OFFSET(0x18867310)
#define PKLHDDGKKOC_PCOIJNPBNAI_OFFSET UNITYSDK_OFFSET(0x18865FE0)
#define PKLHDDGKKOC_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x18868700)
#define PKLHDDGKKOC_SET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0x18867A30)
#define PKLHDDGKKOC_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x18867A50)
#define PKLHDDGKKOC_SET_HASANIMATORPROPSTATE_OFFSET UNITYSDK_OFFSET(0x18867A70)
#define PKLHDDGKKOC_TICK_OFFSET UNITYSDK_OFFSET(0x18865400)

inline static constexpr unsigned int PKLHDDGKKOC_TypeDefinitionIndex = 58595;

	class PKLHDDGKKOC : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::UnityEngine::RuntimeAnimatorController* NBECDBIDDOP; // 0x18
		::RPG::Client::EntityGameObjectConnection* AEJAGMPGJAH; // 0x20
		::System::String* _CurrentState_k__BackingField; // 0x28
		::RPG::Client::RootMotionHandler* FKNONDAILIM; // 0x30
		::FEMCFBBGBDM* KLHIJKCIBAC; // 0x38
		::UnityEngine::AnimatorOverrideController* KENAPFGJKOM; // 0x40
		::HEAIEBHLCMJ* HJEEJGEBOML; // 0x48
		::IDCOKMGFCGJ* BLCANICCCLP; // 0x50
		::System::Collections::Generic::List_1<::KJAKHIPNPGM>* OCOIAFDGFGL; // 0x58
		::RPG::GameCore::PropRow* ADHMIJDMNOJ; // 0x60
		::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x68
		::Il2CppArray<::RPG::GameCore::PropOverrideAnimLayerConfig*>* NGBHLHLDPIK; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::KJAKHIPNPGM>* JPNDJDLGHLN; // 0x78
		::UnityEngine::Animator* _AnimatorRef_k__BackingField; // 0x80
		::RPG::Client::MockAnimator* JPMHLGJAICN; // 0x88
		::System::Nullable_1<::UnityEngine::AnimatorStateInfo> EBONANJKPME; // 0x90
		::System::Byte _padding0[0x20];
		::System::Boolean _HasAnimatorPropState_k__BackingField; // 0xB8
		::System::Boolean HLDOOLPECKK; // 0xB9
		::System::Boolean FBPPBMOAHFN; // 0xBA
		::System::Boolean LNMEIIOJKDM; // 0xBB
		::System::Nullable_1<::UnityEngine::AnimatorStateInfo> EMMBDEMJDJA; // 0xBC
		::System::Byte _padding1[0x20];
		::System::Boolean PNIDDLIEJFB; // 0xE4
		::System::Boolean FFKOGPPNMCD; // 0xE5
		::System::Boolean OOIKEBNGPED; // 0xE6
		::System::Boolean OBIBGNCDJDL; // 0xE7
		static ::System::Boolean* StaticGet_NGOAHOFHOBK()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PKLHDDGKKOC")->GetStaticField(0x16430);
		}

		static ::System::Int32* StaticGet_DICDNNGPAAC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PKLHDDGKKOC")->GetStaticField(0x16434);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKLHDDGKKOC_CCTOR_OFFSET))();
		}

		::System::Void JEMKLGDIAMD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_JEMKLGDIAMD_OFFSET))(this, a1);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::PropRow* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_LMCEDCHJKFF_OFFSET))(this, a1, a2);
		}

		::System::Void ABCOBFAJDJB(::RPG::Client::MockAnimator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_ABCOBFAJDJB_OFFSET))(this, a1);
		}

		::System::Void HFAIKMDBFIK(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_HFAIKMDBFIK_OFFSET))(this, a1);
		}

		::System::Void GBPLJOGKGBF(::Il2CppArray<::RPG::GameCore::PropOverrideAnimLayerConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PropOverrideAnimLayerConfig*>*))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_GBPLJOGKGBF_OFFSET))(this, a1);
		}

		::System::Void LMGAGMBCCHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_LMGAGMBCCHK_OFFSET))(this);
		}

		::System::Void GMGAGAOLPNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_GMGAGAOLPNK_OFFSET))(this);
		}

		::System::Void NLFOIMBEBEB(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_NLFOIMBEBEB_OFFSET))(this, a1);
		}

		::System::Void NLFOIMBEBEB_1(::RPG::Client::MockAnimator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_NLFOIMBEBEB_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OPOELFHJNIF(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_OPOELFHJNIF_OFFSET))(this, a1);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void CAIOAHKJLFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_CAIOAHKJLFC_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_TICK_OFFSET))(this, a1);
		}

		::System::Void FGHMJKGEIFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_FGHMJKGEIFH_OFFSET))(this);
		}

		::System::Void HCKNNCJFKIA(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_HCKNNCJFKIA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 BBNPIJAOFFF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_BBNPIJAOFFF_OFFSET))(this);
		}

		::System::Single MJHDCBFCNDO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_MJHDCBFCNDO_OFFSET))(this);
		}

		::System::Void BHAOINPEGLP(::RPG::GameCore::PropState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_BHAOINPEGLP_OFFSET))(this, a1);
		}

		::System::Void KIKDGODLLEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_KIKDGODLLEN_OFFSET))(this);
		}

		::System::Void MLGKEAKABPL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_MLGKEAKABPL_OFFSET))(this, a1);
		}

		::System::Void BKJNNNBPMHH(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_BKJNNNBPMHH_OFFSET))(this, a1, a2);
		}

		::System::Void BKJNNNBPMHH_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_BKJNNNBPMHH_1_OFFSET))(this, a1, a2);
		}

		::System::Void JNJJHKDKCHJ(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_JNJJHKDKCHJ_OFFSET))(this, a1, a2);
		}

		::System::Void PCKMCKBKKFF(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_PCKMCKBKKFF_OFFSET))(this, a1, a2);
		}

		::System::Void PCKMCKBKKFF_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_PCKMCKBKKFF_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void GNLBNMAMPJH(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_GNLBNMAMPJH_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void OFOOMOBEIHB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_OFOOMOBEIHB_OFFSET))(this, a1);
		}

		static ::System::Void NCOPHLODGLK(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_NCOPHLODGLK_OFFSET))(a1, a2);
		}

		::System::Int32 JJPIDLADLCN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_JJPIDLADLCN_OFFSET))(this);
		}

		::System::Single CLKCALGBIOO(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_CLKCALGBIOO_OFFSET))(this, a1);
		}

		::UnityEngine::Animator* MLHPMDFCKLJ()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_MLHPMDFCKLJ_OFFSET))(this);
		}

		::UnityEngine::Animator* get_AnimatorRef()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_GET_ANIMATORREF_OFFSET))(this);
		}

		::System::Void set_AnimatorRef(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_SET_ANIMATORREF_OFFSET))(this, a1);
		}

		::System::String* get_CurrentState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_SET_CURRENTSTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasAnimatorPropState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_GET_HASANIMATORPROPSTATE_OFFSET))(this);
		}

		::System::Void set_HasAnimatorPropState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_SET_HASANIMATORPROPSTATE_OFFSET))(this, a1);
		}

		::System::Boolean CEHIGFOIAPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_CEHIGFOIAPB_OFFSET))(this);
		}

		::IMOHEHDKGPK LALHNMMLOHJ()
		{
			return ((::IMOHEHDKGPK(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_LALHNMMLOHJ_OFFSET))(this);
		}

		::IMOHEHDKGPK KFEMECHBJDM()
		{
			return ((::IMOHEHDKGPK(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_KFEMECHBJDM_OFFSET))(this);
		}

		::System::Void HGGDOEPKHIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_HGGDOEPKHIB_OFFSET))(this);
		}

		::System::Void ENLFALMMDGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_ENLFALMMDGI_OFFSET))(this);
		}

		::System::Void JLFOHCLFHCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_JLFOHCLFHCG_OFFSET))(this);
		}

		::System::Void AJOJJJBIALF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_AJOJJJBIALF_OFFSET))(this, a1);
		}

		::System::Void PCOIJNPBNAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_PCOIJNPBNAI_OFFSET))(this);
		}

		::System::Void EDAIIANMKLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_EDAIIANMKLM_OFFSET))(this);
		}

		::System::Void BNIKCIKAAIO(::RPG::Client::EntityGameObjectConnection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityGameObjectConnection*))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_BNIKCIKAAIO_OFFSET))(this, a1);
		}

		::System::Void MCAJGLEBDMI(::RPG::Client::EntityGameObjectConnection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityGameObjectConnection*))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_MCAJGLEBDMI_OFFSET))(this, a1);
		}

		::System::Boolean NMKNIMKJPNP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_NMKNIMKJPNP_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLHDDGKKOC_RESETTODEFAULT_OFFSET))(this);
		}

	};
