#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSkillType.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleAttributeName.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
class LMFOOOLDECA;
class OMNJCDDMLHI;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client::LittleGame::ChenLing { class ChenLingGameInstance; }
namespace RPG::GameCore { class BaseChenLingBattleInitPositionEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattlePredicate; }
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_LeapSlamTarget; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_NearestNSoldiers; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_NearestNthSoldier; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_RandomNSoldiers; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_SavedTargets; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_Union; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_WithAttributeRank; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_WithinRadius; }
namespace RPG::GameCore { class SaveChenLingBattleTargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CIIKBJFOKHL_AOJFMOEPNPF_OFFSET UNITYSDK_OFFSET(0xCF7DAA0)
#define CIIKBJFOKHL_BAIAJGBNCLP_OFFSET UNITYSDK_OFFSET(0xCF51DE0)
#define CIIKBJFOKHL_BCGIELPMJPO_OFFSET UNITYSDK_OFFSET(0xCF7E470)
#define CIIKBJFOKHL_BCJMOGEOMEP_OFFSET UNITYSDK_OFFSET(0xCF79820)
#define CIIKBJFOKHL_BNJIJGJCLGO_OFFSET UNITYSDK_OFFSET(0xCF80B50)
#define CIIKBJFOKHL_CTOR_OFFSET UNITYSDK_OFFSET(0xCF77AC0)
#define CIIKBJFOKHL_DCCDEBOPFKG_OFFSET UNITYSDK_OFFSET(0xCF7BEB0)
#define CIIKBJFOKHL_DMMOENNFGMJ_OFFSET UNITYSDK_OFFSET(0xCF7B0F0)
#define CIIKBJFOKHL_EBDDNLLJNLD_OFFSET UNITYSDK_OFFSET(0xCF7E3E0)
#define CIIKBJFOKHL_EENKOLMJDGC_OFFSET UNITYSDK_OFFSET(0xCF7C020)
#define CIIKBJFOKHL_FHAAHMEJMCI_OFFSET UNITYSDK_OFFSET(0xCF81CD0)
#define CIIKBJFOKHL_FIFCKEFFOAM_OFFSET UNITYSDK_OFFSET(0xCF7B970)
#define CIIKBJFOKHL_GCJMPPKPBAB_OFFSET UNITYSDK_OFFSET(0xCF7A560)
#define CIIKBJFOKHL_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xCF77DD0)
#define CIIKBJFOKHL_GLCGGAOJJFC_OFFSET UNITYSDK_OFFSET(0xCF82CB0)
#define CIIKBJFOKHL_HHKEMFPJEED_OFFSET UNITYSDK_OFFSET(0xCF80910)
#define CIIKBJFOKHL_HKCONCPENCG_OFFSET UNITYSDK_OFFSET(0xCF51D60)
#define CIIKBJFOKHL_IDKGFDBENLI_OFFSET UNITYSDK_OFFSET(0xCF78870)
#define CIIKBJFOKHL_IEFGGOAGONB_OFFSET UNITYSDK_OFFSET(0xCF7F8D0)
#define CIIKBJFOKHL_JGMEDMOGLGO_OFFSET UNITYSDK_OFFSET(0xCF7ED30)
#define CIIKBJFOKHL_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xCF78090)
#define CIIKBJFOKHL_LPJFJOKIHGI_OFFSET UNITYSDK_OFFSET(0xCF80430)
#define CIIKBJFOKHL_MGOCMMGIDGI_OFFSET UNITYSDK_OFFSET(0xCF7BDD0)
#define CIIKBJFOKHL_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xCF7E670)
#define CIIKBJFOKHL_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xCF77DF0)
#define CIIKBJFOKHL_NFALFIMMKFN_OFFSET UNITYSDK_OFFSET(0xCF7EEE0)
#define CIIKBJFOKHL_OFBJBMINKIP_OFFSET UNITYSDK_OFFSET(0xCF79E90)
#define CIIKBJFOKHL_PDIDMJCNGCF_OFFSET UNITYSDK_OFFSET(0xCF7BB90)
#define CIIKBJFOKHL_PFLPCNPMKBD_OFFSET UNITYSDK_OFFSET(0xCF7F830)
#define CIIKBJFOKHL_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xCF77DE0)
#define CIIKBJFOKHL___EVALUATENEARESTNSOLDIERS_B__15_0_OFFSET UNITYSDK_OFFSET(0xCF82D90)
#define CIIKBJFOKHL___EVALUATENEARESTNTHSOLDIER_B__17_0_OFFSET UNITYSDK_OFFSET(0xCF82FD0)

inline static constexpr unsigned int CIIKBJFOKHL_TypeDefinitionIndex = 77868;

	class CIIKBJFOKHL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* DBHMOPJPELH; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* DONPHDKJBBJ; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* GBPHKOAFCNE; // 0x20
		::System::Int32 MDAOEGJGHIA; // 0x28
		::RPG::Client::LittleGame::ChenLing::ChenLingSkillType _SkillType_k__BackingField; // 0x2C
		::System::UInt32 BOKJJKFCFME; // 0x30
		::System::Int32 JBBCDGPECLG; // 0x34
		::System::Int32 NMOKIHDMMNG; // 0x38
		::System::Void _ctor(::RPG::Client::LittleGame::ChenLing::ChenLingSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSkillType))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingSkillType get_SkillType()
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_GET_SKILLTYPE_OFFSET))(this);
		}

		::System::Void set_SkillType(::RPG::Client::LittleGame::ChenLing::ChenLingSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSkillType))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_SET_SKILLTYPE_OFFSET))(this, a1);
		}

		::CIIKBJFOKHL* NBHCPBBGAKA()
		{
			return ((::CIIKBJFOKHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_NBHCPBBGAKA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* KFGJEKJHIMB(::RPG::GameCore::BaseChenLingBattleTargetEvaluator* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::ALMFLCJCHKP*>* AOJFMOEPNPF(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a1, ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::ALMFLCJCHKP*>*(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_AOJFMOEPNPF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType EBDDNLLJNLD(::RPG::GameCore::ChenLingTeamSelectorType a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a2)
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType(*)(::PVOID, ::RPG::GameCore::ChenLingTeamSelectorType, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_EBDDNLLJNLD_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Int32>* OFBJBMINKIP(::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_OFBJBMINKIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GCJMPPKPBAB(::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_GCJMPPKPBAB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* IDKGFDBENLI(::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_IDKGFDBENLI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* DMMOENNFGMJ(::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_DMMOENNFGMJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* FIFCKEFFOAM(::RPG::GameCore::ChenLingBattleTargetEvaluator_Union* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Union*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_FIFCKEFFOAM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* PDIDMJCNGCF(::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LeapSlamTarget*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_PDIDMJCNGCF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* MGOCMMGIDGI(::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_MGOCMMGIDGI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* DCCDEBOPFKG(::RPG::GameCore::SaveChenLingBattleTargetEvaluator* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::SaveChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_DCCDEBOPFKG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int PFLPCNPMKBD(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_PFLPCNPMKBD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::ALMFLCJCHKP*>* BCGIELPMJPO(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a1)
		{
			return ((::System::Collections::Generic::List_1<::ALMFLCJCHKP*>*(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_BCGIELPMJPO_OFFSET))(this, a1);
		}

		::System::Single IEFGGOAGONB(::RPG::GameCore::ChenLingBattleAttributeName a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChenLingBattleAttributeName, ::System::Int32))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_IEFGGOAGONB_OFFSET))(this, a1, a2);
		}

		::System::Single LPJFJOKIHGI(::RPG::GameCore::ChenLingBattleAttributeName a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChenLingBattleAttributeName, ::System::Int32))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_LPJFJOKIHGI_OFFSET))(this, a1, a2);
		}

		::System::Single HHKEMFPJEED()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_HHKEMFPJEED_OFFSET))(this);
		}

		::ALMFLCJCHKP* JGMEDMOGLGO()
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_JGMEDMOGLGO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* BCJMOGEOMEP(::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_BCJMOGEOMEP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* EENKOLMJDGC(::RPG::GameCore::ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_EENKOLMJDGC_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::System::Int32>* BNJIJGJCLGO(::System::Int32 a1, ::System::Single a2, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a3, ::System::Boolean a4)
		{
			return ((::RPG::PoolList_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_BNJIJGJCLGO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::System::Int32>* NFALFIMMKFN(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Single a2, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a3, ::System::Boolean a4)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_NFALFIMMKFN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean FHAAHMEJMCI(::RPG::GameCore::BaseChenLingBattlePredicate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattlePredicate*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_FHAAHMEJMCI_OFFSET))(this, a1);
		}

		::System::Single MNGGAOFNGIP(::RPG::GameCore::BaseChenLingBattleValueGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleValueGetter*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_MNGGAOFNGIP_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingGameInstance* GLCGGAOJJFC()
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_GLCGGAOJJFC_OFFSET))(this);
		}

		::LMFOOOLDECA* BAIAJGBNCLP()
		{
			return ((::LMFOOOLDECA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_BAIAJGBNCLP_OFFSET))(this);
		}

		::OMNJCDDMLHI* HKCONCPENCG()
		{
			return ((::OMNJCDDMLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIKBJFOKHL_HKCONCPENCG_OFFSET))(this);
		}

		::System::Single __EvaluateNearestNSoldiers_b__15_0(::ALMFLCJCHKP* a1)
		{
			return ((::System::Single(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL___EVALUATENEARESTNSOLDIERS_B__15_0_OFFSET))(this, a1);
		}

		::System::Single __EvaluateNearestNthSoldier_b__17_0(::ALMFLCJCHKP* a1)
		{
			return ((::System::Single(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL___EVALUATENEARESTNTHSOLDIER_B__17_0_OFFSET))(this, a1);
		}

	};
