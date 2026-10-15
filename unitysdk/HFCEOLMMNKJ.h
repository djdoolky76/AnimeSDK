#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CFJJFFMMEAF.h"
#include "unitysdk/FHMCLFNOJNJ.h"
#include "unitysdk/GODJKFFNCNI.h"
#include "unitysdk/KBFDDPLFFLK.h"
#include "unitysdk/NAKLLNKNLLD.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DGKBJOHFPBK;
class FABMDCOFHCG;
class HIOAMIPNLIN;
class HPICNGFLLCA;
class JBHLJMENAPJ;
class MDJOLMBECHA;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class BaseModifierInstance; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SubModifierData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedAbilityConfig; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Nullable; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFCEOLMMNKJ_ABMPFMHMLAC_OFFSET UNITYSDK_OFFSET(0x15C6ADA0)
#define HFCEOLMMNKJ_AIBLFLFDPDO_OFFSET UNITYSDK_OFFSET(0x15C6DE80)
#define HFCEOLMMNKJ_AMDNNEPJFBK_OFFSET UNITYSDK_OFFSET(0x15C6A9C0)
#define HFCEOLMMNKJ_BAJCKFEDMIG_OFFSET UNITYSDK_OFFSET(0x15C6EC00)
#define HFCEOLMMNKJ_BAMEAAKALAP_OFFSET UNITYSDK_OFFSET(0x15C6D6F0)
#define HFCEOLMMNKJ_BHHLHCBJIML_OFFSET UNITYSDK_OFFSET(0x15C6B910)
#define HFCEOLMMNKJ_BKGKNCNHPNK_OFFSET UNITYSDK_OFFSET(0x15C6A640)
#define HFCEOLMMNKJ_BLECNCHHGMC_OFFSET UNITYSDK_OFFSET(0x15C6E160)
#define HFCEOLMMNKJ_CBMONFCCIDI_OFFSET UNITYSDK_OFFSET(0x15C6AAE0)
#define HFCEOLMMNKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C6FEA0)
#define HFCEOLMMNKJ_CFGEGPLMACO_OFFSET UNITYSDK_OFFSET(0x15C6E040)
#define HFCEOLMMNKJ_DIABLNBJKPE_OFFSET UNITYSDK_OFFSET(0x15C6E8A0)
#define HFCEOLMMNKJ_DLLADOODLNP_OFFSET UNITYSDK_OFFSET(0x15C6B480)
#define HFCEOLMMNKJ_FIBJGNCFFPL_OFFSET UNITYSDK_OFFSET(0x15C6F310)
#define HFCEOLMMNKJ_GCMLCLPPELO_OFFSET UNITYSDK_OFFSET(0x15C6D1F0)
#define HFCEOLMMNKJ_GLIDKAOFPGK_OFFSET UNITYSDK_OFFSET(0x15C6BE80)
#define HFCEOLMMNKJ_HEICEHKNBEI_OFFSET UNITYSDK_OFFSET(0x15C6C000)
#define HFCEOLMMNKJ_HNHGHAGHMGA_OFFSET UNITYSDK_OFFSET(0x15C6F050)
#define HFCEOLMMNKJ_HPLFBELPGBG_OFFSET UNITYSDK_OFFSET(0x15C6AC10)
#define HFCEOLMMNKJ_IFNJNLGCOAG_OFFSET UNITYSDK_OFFSET(0x15C6D9E0)
#define HFCEOLMMNKJ_IKALNOLAAFL_OFFSET UNITYSDK_OFFSET(0x15C6BBD0)
#define HFCEOLMMNKJ_IOKIDCBGECC_1_OFFSET UNITYSDK_OFFSET(0x15C6EBB0)
#define HFCEOLMMNKJ_IOKIDCBGECC_OFFSET UNITYSDK_OFFSET(0x15C6EA50)
#define HFCEOLMMNKJ_KALLPPKGMJG_OFFSET UNITYSDK_OFFSET(0x15C6CFF0)
#define HFCEOLMMNKJ_KCGIFJBFOFI_OFFSET UNITYSDK_OFFSET(0x15C6F8F0)
#define HFCEOLMMNKJ_KDCNDIDBOPB_OFFSET UNITYSDK_OFFSET(0x15C6E3C0)
#define HFCEOLMMNKJ_KELDPOLGIAM_OFFSET UNITYSDK_OFFSET(0x15C6E7E0)
#define HFCEOLMMNKJ_KHPBFHEDLGK_OFFSET UNITYSDK_OFFSET(0x15C6DC40)
#define HFCEOLMMNKJ_LJNLOIIBPLN_OFFSET UNITYSDK_OFFSET(0x15C6F4C0)
#define HFCEOLMMNKJ_MIAJCDAFBAK_OFFSET UNITYSDK_OFFSET(0x15C6FDD0)
#define HFCEOLMMNKJ_MKPCHOCLJOK_OFFSET UNITYSDK_OFFSET(0x15C6C890)
#define HFCEOLMMNKJ_NHLOIOGNIPG_OFFSET UNITYSDK_OFFSET(0x15C6D440)
#define HFCEOLMMNKJ_OKANJBKLDCG_OFFSET UNITYSDK_OFFSET(0x15C6B600)
#define HFCEOLMMNKJ_OLCBDNHCLMA_OFFSET UNITYSDK_OFFSET(0x15C6EC80)
#define HFCEOLMMNKJ_PACOAACHPGM_OFFSET UNITYSDK_OFFSET(0x15C69D10)
#define HFCEOLMMNKJ_PBICLMAMBKA_OFFSET UNITYSDK_OFFSET(0x15C6E9E0)
#define HFCEOLMMNKJ_PHGNKNJFOEK_OFFSET UNITYSDK_OFFSET(0x15C6E4A0)
#define HFCEOLMMNKJ_PKBDDPOPCBH_OFFSET UNITYSDK_OFFSET(0x15C6CD20)
#define HFCEOLMMNKJ_POEAOPBNMDD_1_OFFSET UNITYSDK_OFFSET(0x15C6E990)
#define HFCEOLMMNKJ_POEAOPBNMDD_OFFSET UNITYSDK_OFFSET(0x15C6EAE0)

inline static constexpr unsigned int HFCEOLMMNKJ_TypeDefinitionIndex = 54447;

	class HFCEOLMMNKJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_NPLADFMBGDD()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "HFCEOLMMNKJ")->GetStaticField(0x10C40);
		}

		static ::RPG::GameCore::TurnBasedAbilityConfig** StaticGet_BOMOHKGJCHP()
		{
			return (::RPG::GameCore::TurnBasedAbilityConfig**)UnitySDK::FromName("", "HFCEOLMMNKJ")->GetStaticField(0x10C48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_CCTOR_OFFSET))();
		}

		static ::NAKLLNKNLLD PACOAACHPGM(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::System::String* a4, ::RPG::GameCore::TurnBasedModifierConfig* a5, ::RPG::GameCore::FixPoint a6)
		{
			return ((::NAKLLNKNLLD(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_PACOAACHPGM_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void CBMONFCCIDI(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TurnBasedModifierInstance* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_CBMONFCCIDI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void HPLFBELPGBG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_HPLFBELPGBG_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ABMPFMHMLAC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TurnBasedModifierInstance* a3, ::FABMDCOFHCG* a4, ::FABMDCOFHCG* a5, ::Il2CppArray<::RPG::GameCore::SubModifierData*>* a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*, ::FABMDCOFHCG*, ::FABMDCOFHCG*, ::Il2CppArray<::RPG::GameCore::SubModifierData*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_ABMPFMHMLAC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OKANJBKLDCG(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SubModifierData* a2, ::System::Boolean a3, ::RPG::GameCore::TurnBasedModifierConfig* a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::SubModifierData*, ::System::Boolean, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_OKANJBKLDCG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GLIDKAOFPGK(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_GLIDKAOFPGK_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::TurnBasedModifierInstance* HEICEHKNBEI(::FHMCLFNOJNJ a1)
		{
			return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::FHMCLFNOJNJ))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_HEICEHKNBEI_OFFSET))(a1);
		}

		static ::System::Void PKBDDPOPCBH(::RPG::GameCore::BaseModifierInstance* a1, ::System::Collections::Generic::List_1<::CFJJFFMMEAF>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::BaseModifierInstance*, ::System::Collections::Generic::List_1<::CFJJFFMMEAF>*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_PKBDDPOPCBH_OFFSET))(a1, a2);
		}

		static ::System::Void KALLPPKGMJG(::RPG::GameCore::BaseModifierInstance* a1, ::System::Collections::Generic::List_1<::GODJKFFNCNI>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::BaseModifierInstance*, ::System::Collections::Generic::List_1<::GODJKFFNCNI>*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_KALLPPKGMJG_OFFSET))(a1, a2);
		}

		static ::System::Int32 GCMLCLPPELO(::RPG::PoolList_1<::MDJOLMBECHA*>* a1, ::DGKBJOHFPBK* a2, ::RPG::GameCore::TurnBasedModifierConfig* a3)
		{
			return ((::System::Int32(*)(::RPG::PoolList_1<::MDJOLMBECHA*>*, ::DGKBJOHFPBK*, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_GCMLCLPPELO_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 NHLOIOGNIPG(::RPG::PoolList_1<::MDJOLMBECHA*>* a1, ::DGKBJOHFPBK* a2, ::RPG::GameCore::TurnBasedModifierInstance* a3)
		{
			return ((::System::Int32(*)(::RPG::PoolList_1<::MDJOLMBECHA*>*, ::DGKBJOHFPBK*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_NHLOIOGNIPG_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 BAMEAAKALAP(::RPG::PoolList_1<::MDJOLMBECHA*>* a1, ::DGKBJOHFPBK* a2, ::RPG::GameCore::TurnBasedModifierInstance* a3)
		{
			return ((::System::Int32(*)(::RPG::PoolList_1<::MDJOLMBECHA*>*, ::DGKBJOHFPBK*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_BAMEAAKALAP_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint IFNJNLGCOAG(::RPG::PoolList_1<::MDJOLMBECHA*>* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::PoolList_1<::MDJOLMBECHA*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_IFNJNLGCOAG_OFFSET))(a1, a2);
		}

		static ::RPG::PoolList_1<::MDJOLMBECHA*>* KHPBFHEDLGK(::System::String* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedModifierConfig* a3)
		{
			return ((::RPG::PoolList_1<::MDJOLMBECHA*>*(*)(::System::String*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_KHPBFHEDLGK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean AIBLFLFDPDO(::System::String* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::MDJOLMBECHA* a3, ::RPG::GameCore::TurnBasedModifierConfig* a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::MDJOLMBECHA*, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_AIBLFLFDPDO_OFFSET))(a1, a2, a3, a4);
		}

		static ::DGKBJOHFPBK* MKPCHOCLJOK(::FHMCLFNOJNJ a1, ::System::Boolean a2)
		{
			return ((::DGKBJOHFPBK*(*)(::FHMCLFNOJNJ, ::System::Boolean))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_MKPCHOCLJOK_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::CFJJFFMMEAF>* BHHLHCBJIML(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Collections::Generic::List_1<::CFJJFFMMEAF>*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_BHHLHCBJIML_OFFSET))(a1, a2);
		}

		static ::DGKBJOHFPBK* IKALNOLAAFL(::RPG::GameCore::SubModifierData* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::System::Collections::Generic::List_1<::CFJJFFMMEAF>* a3, ::System::Boolean a4)
		{
			return ((::DGKBJOHFPBK*(*)(::RPG::GameCore::SubModifierData*, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Collections::Generic::List_1<::CFJJFFMMEAF>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_IKALNOLAAFL_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::FixPoint CFGEGPLMACO(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_CFGEGPLMACO_OFFSET))(a1);
		}

		static ::RPG::GameCore::TurnBasedModifierConfig* DLLADOODLNP(::System::String* a1, ::FABMDCOFHCG* a2)
		{
			return ((::RPG::GameCore::TurnBasedModifierConfig*(*)(::System::String*, ::FABMDCOFHCG*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_DLLADOODLNP_OFFSET))(a1, a2);
		}

		static ::System::Void BLECNCHHGMC(::System::Collections::Generic::List_1<::HIOAMIPNLIN*>* a1, ::System::Boolean a2, ::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::HIOAMIPNLIN*>*, ::System::Boolean, ::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_BLECNCHHGMC_OFFSET))(a1, a2, a3);
		}

		static ::FABMDCOFHCG* KDCNDIDBOPB(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::FABMDCOFHCG*(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_KDCNDIDBOPB_OFFSET))(a1);
		}

		static ::KBFDDPLFFLK PHGNKNJFOEK(::RPG::GameCore::EntityManager* a1, ::HPICNGFLLCA* a2)
		{
			return ((::KBFDDPLFFLK(*)(::RPG::GameCore::EntityManager*, ::HPICNGFLLCA*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_PHGNKNJFOEK_OFFSET))(a1, a2);
		}

		static ::System::Boolean BKGKNCNHPNK(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_BKGKNCNHPNK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean AMDNNEPJFBK(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::EnumStatusType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_AMDNNEPJFBK_OFFSET))(a1, a2);
		}

		static ::System::Boolean PBICLMAMBKA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_PBICLMAMBKA_OFFSET))(a1);
		}

		static ::System::Boolean IOKIDCBGECC(::JBHLJMENAPJ* a1)
		{
			return ((::System::Boolean(*)(::JBHLJMENAPJ*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_IOKIDCBGECC_OFFSET))(a1);
		}

		static ::System::Boolean POEAOPBNMDD(::JBHLJMENAPJ* a1)
		{
			return ((::System::Boolean(*)(::JBHLJMENAPJ*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_POEAOPBNMDD_OFFSET))(a1);
		}

		static ::RPG::GameCore::ModifierBehaviorFlag DIABLNBJKPE(::JBHLJMENAPJ* a1)
		{
			return ((::RPG::GameCore::ModifierBehaviorFlag(*)(::JBHLJMENAPJ*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_DIABLNBJKPE_OFFSET))(a1);
		}

		static ::System::Boolean IOKIDCBGECC_1(::RPG::GameCore::ModifierBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_IOKIDCBGECC_1_OFFSET))(a1);
		}

		static ::System::Boolean POEAOPBNMDD_1(::RPG::GameCore::ModifierBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_POEAOPBNMDD_1_OFFSET))(a1);
		}

		static ::System::Boolean BAJCKFEDMIG(::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_BAJCKFEDMIG_OFFSET))(a1);
		}

		static ::System::Boolean KELDPOLGIAM(::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_KELDPOLGIAM_OFFSET))(a1);
		}

		static ::System::Void OLCBDNHCLMA(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_OLCBDNHCLMA_OFFSET))(a1, a2);
		}

		static ::System::Boolean HNHGHAGHMGA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_HNHGHAGHMGA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FIBJGNCFFPL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_FIBJGNCFFPL_OFFSET))(a1, a2);
		}

		static ::System::Void LJNLOIIBPLN(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_LJNLOIIBPLN_OFFSET))(a1, a2);
		}

		static ::System::Void KCGIFJBFOFI(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntityList* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_KCGIFJBFOFI_OFFSET))(a1, a2);
		}

		static ::System::Nullable* MIAJCDAFBAK(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::String* a2)
		{
			return ((::System::Nullable*(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ_MIAJCDAFBAK_OFFSET))(a1, a2);
		}

	};
