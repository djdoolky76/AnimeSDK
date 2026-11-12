#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class DPFBAMHBMFG;
class EAKMNIMFGGK;
class EJCLAFODBMD;
class FOACJPEHDKO;
class JBBAMLKCDKG;
class KCJNGDLDKFG;
class KPOPHKNMCAJ;
class OADFMMPLOGL;
class OBJANKHLNGO;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftCoinResBarViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentActorViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentDetailViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointPhaseViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FOHGGGFAGNK_ADD_ONDETAILCHANGED_OFFSET UNITYSDK_OFFSET(0x1681AA50)
#define FOHGGGFAGNK_AHCJFIAALPL_OFFSET UNITYSDK_OFFSET(0x1681ABF0)
#define FOHGGGFAGNK_ANFCNGJKJDN_OFFSET UNITYSDK_OFFSET(0x1681B9D0)
#define FOHGGGFAGNK_BCONFBPOMDN_OFFSET UNITYSDK_OFFSET(0x1681E380)
#define FOHGGGFAGNK_BNJJAJNLDEN_OFFSET UNITYSDK_OFFSET(0x1681BAA0)
#define FOHGGGFAGNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1681AD70)
#define FOHGGGFAGNK_FHJMANOJKGH_OFFSET UNITYSDK_OFFSET(0x168209B0)
#define FOHGGGFAGNK_FNMABBGBEJD_OFFSET UNITYSDK_OFFSET(0x1681C8A0)
#define FOHGGGFAGNK_GEIBBGJPHJD_OFFSET UNITYSDK_OFFSET(0x16820960)
#define FOHGGGFAGNK_GET_ACTIVATETALENTPOINTSERVICE_OFFSET UNITYSDK_OFFSET(0x1681AB50)
#define FOHGGGFAGNK_GET_ACTORS_OFFSET UNITYSDK_OFFSET(0x1681A810)
#define FOHGGGFAGNK_GET_COINRESBAR_OFFSET UNITYSDK_OFFSET(0x1681AB10)
#define FOHGGGFAGNK_GET_DEFAULTSELECTEDPOINT_OFFSET UNITYSDK_OFFSET(0x1681ABD0)
#define FOHGGGFAGNK_GET_DEFAULTSELECTIONSERVICE_OFFSET UNITYSDK_OFFSET(0x1681AB70)
#define FOHGGGFAGNK_GET_DETAILPRESENTER_OFFSET UNITYSDK_OFFSET(0x1681ABB0)
#define FOHGGGFAGNK_GET_FLOWCOORDINATOR_OFFSET UNITYSDK_OFFSET(0x1681A7D0)
#define FOHGGGFAGNK_GET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x1681AB30)
#define FOHGGGFAGNK_GET_PATHS_OFFSET UNITYSDK_OFFSET(0x1681A7F0)
#define FOHGGGFAGNK_GET_PHASES_OFFSET UNITYSDK_OFFSET(0x1681A830)
#define FOHGGGFAGNK_GET_RUNTIMESTATESERVICE_OFFSET UNITYSDK_OFFSET(0x1681AB90)
#define FOHGGGFAGNK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1681F240)
#define FOHGGGFAGNK_HAFAPMLBLLL_OFFSET UNITYSDK_OFFSET(0x16820AB0)
#define FOHGGGFAGNK_IBOEBOIBHMM_OFFSET UNITYSDK_OFFSET(0x1681D7A0)
#define FOHGGGFAGNK_KBDJLEDBOMJ_OFFSET UNITYSDK_OFFSET(0x16820870)
#define FOHGGGFAGNK_LPJGBMNIAIL_OFFSET UNITYSDK_OFFSET(0x1681A850)
#define FOHGGGFAGNK_MNOFGJJNGMO_OFFSET UNITYSDK_OFFSET(0x168208F0)
#define FOHGGGFAGNK_NDMMMJCLGEK_OFFSET UNITYSDK_OFFSET(0x1681E330)
#define FOHGGGFAGNK_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x1681AD80)
#define FOHGGGFAGNK_OBAENNFBHNE_OFFSET UNITYSDK_OFFSET(0x1681FE30)
#define FOHGGGFAGNK_OGNJAICKAOB_OFFSET UNITYSDK_OFFSET(0x1681ACB0)
#define FOHGGGFAGNK_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1681ADE0)
#define FOHGGGFAGNK_PECLIFKLKJG_OFFSET UNITYSDK_OFFSET(0x16820750)
#define FOHGGGFAGNK_PLNBIBDNIJK_OFFSET UNITYSDK_OFFSET(0x1681A890)
#define FOHGGGFAGNK_REMOVE_ONDETAILCHANGED_OFFSET UNITYSDK_OFFSET(0x1681AAB0)
#define FOHGGGFAGNK_SET_ACTIVATETALENTPOINTSERVICE_OFFSET UNITYSDK_OFFSET(0x1681AB60)
#define FOHGGGFAGNK_SET_ACTORS_OFFSET UNITYSDK_OFFSET(0x1681A820)
#define FOHGGGFAGNK_SET_COINRESBAR_OFFSET UNITYSDK_OFFSET(0x1681AB20)
#define FOHGGGFAGNK_SET_DEFAULTSELECTEDPOINT_OFFSET UNITYSDK_OFFSET(0x1681ABE0)
#define FOHGGGFAGNK_SET_DEFAULTSELECTIONSERVICE_OFFSET UNITYSDK_OFFSET(0x1681AB80)
#define FOHGGGFAGNK_SET_DETAILPRESENTER_OFFSET UNITYSDK_OFFSET(0x1681ABC0)
#define FOHGGGFAGNK_SET_FLOWCOORDINATOR_OFFSET UNITYSDK_OFFSET(0x1681A7E0)
#define FOHGGGFAGNK_SET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x1681AB40)
#define FOHGGGFAGNK_SET_PATHS_OFFSET UNITYSDK_OFFSET(0x1681A800)
#define FOHGGGFAGNK_SET_PHASES_OFFSET UNITYSDK_OFFSET(0x1681A840)
#define FOHGGGFAGNK_SET_RUNTIMESTATESERVICE_OFFSET UNITYSDK_OFFSET(0x1681ABA0)
#define FOHGGGFAGNK___REFRESHDETAIL_B__75_0_OFFSET UNITYSDK_OFFSET(0x16820B20)
#define FOHGGGFAGNK___REFRESHDETAIL_B__75_1_OFFSET UNITYSDK_OFFSET(0x16820B60)

inline static constexpr unsigned int FOHGGGFAGNK_TypeDefinitionIndex = 82536;

	class FOHGGGFAGNK : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>* FDMGILPMHDK; // 0x10
		::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel* _CoinResBar_k__BackingField; // 0x18
		::JBBAMLKCDKG* _DetailPresenter_k__BackingField; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::FOACJPEHDKO*>* _Paths_k__BackingField; // 0x28
		::System::Action* OnDetailChanged; // 0x30
		::Sofa::Core::SimpleCommand* NJPPIINKNLO; // 0x38
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* NPAAOEPEOGH; // 0x40
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* _DefaultSelectedPoint_k__BackingField; // 0x48
		::EJCLAFODBMD* FALCIBDCBJK; // 0x50
		::EAKMNIMFGGK* _ActivateTalentPointService_k__BackingField; // 0x58
		::OADFMMPLOGL* _RuntimeStateService_k__BackingField; // 0x60
		::OBJANKHLNGO* _Messenger_k__BackingField; // 0x68
		::KPOPHKNMCAJ* _DefaultSelectionService_k__BackingField; // 0x70
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* PDONECEHEBH; // 0x78
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* MGNHPBBIDIN; // 0x80
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*>* _Phases_k__BackingField; // 0x88
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>* _Actors_k__BackingField; // 0x90
		::Sofa::Core::SimpleCommand* LCGBLFOHNFA; // 0x98
		::KCJNGDLDKFG* _FlowCoordinator_k__BackingField; // 0xA0
		::System::Action* MHDDNJLMBFI; // 0xA8
		::System::Boolean LINNHMPNCJG; // 0xB0
		::System::Void _ctor(::EJCLAFODBMD* a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EJCLAFODBMD*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_CTOR_OFFSET))(this, a1, a2);
		}

		::KCJNGDLDKFG* get_FlowCoordinator()
		{
			return ((::KCJNGDLDKFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_GET_FLOWCOORDINATOR_OFFSET))(this);
		}

		::System::Void set_FlowCoordinator(::KCJNGDLDKFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCJNGDLDKFG*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_SET_FLOWCOORDINATOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::FOACJPEHDKO*>* get_Paths()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::FOACJPEHDKO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_GET_PATHS_OFFSET))(this);
		}

		::System::Void set_Paths(::System::Collections::Generic::IReadOnlyList_1<::FOACJPEHDKO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::FOACJPEHDKO*>*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_SET_PATHS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>* get_Actors()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_GET_ACTORS_OFFSET))(this);
		}

		::System::Void set_Actors(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_SET_ACTORS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*>* get_Phases()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_GET_PHASES_OFFSET))(this);
		}

		::System::Void set_Phases(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*>*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_SET_PHASES_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* LPJGBMNIAIL()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_LPJGBMNIAIL_OFFSET))(this);
		}

		::System::Void PLNBIBDNIJK(::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_PLNBIBDNIJK_OFFSET))(this, a1);
		}

		::System::Void add_OnDetailChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_ADD_ONDETAILCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnDetailChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_REMOVE_ONDETAILCHANGED_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel* get_CoinResBar()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_GET_COINRESBAR_OFFSET))(this);
		}

		::System::Void set_CoinResBar(::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_SET_COINRESBAR_OFFSET))(this, a1);
		}

		::OBJANKHLNGO* get_Messenger()
		{
			return ((::OBJANKHLNGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_GET_MESSENGER_OFFSET))(this);
		}

		::System::Void set_Messenger(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_SET_MESSENGER_OFFSET))(this, a1);
		}

		::EAKMNIMFGGK* get_ActivateTalentPointService()
		{
			return ((::EAKMNIMFGGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_GET_ACTIVATETALENTPOINTSERVICE_OFFSET))(this);
		}

		::System::Void set_ActivateTalentPointService(::EAKMNIMFGGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAKMNIMFGGK*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_SET_ACTIVATETALENTPOINTSERVICE_OFFSET))(this, a1);
		}

		::KPOPHKNMCAJ* get_DefaultSelectionService()
		{
			return ((::KPOPHKNMCAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_GET_DEFAULTSELECTIONSERVICE_OFFSET))(this);
		}

		::System::Void set_DefaultSelectionService(::KPOPHKNMCAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPOPHKNMCAJ*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_SET_DEFAULTSELECTIONSERVICE_OFFSET))(this, a1);
		}

		::OADFMMPLOGL* get_RuntimeStateService()
		{
			return ((::OADFMMPLOGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_GET_RUNTIMESTATESERVICE_OFFSET))(this);
		}

		::System::Void set_RuntimeStateService(::OADFMMPLOGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OADFMMPLOGL*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_SET_RUNTIMESTATESERVICE_OFFSET))(this, a1);
		}

		::JBBAMLKCDKG* get_DetailPresenter()
		{
			return ((::JBBAMLKCDKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_GET_DETAILPRESENTER_OFFSET))(this);
		}

		::System::Void set_DetailPresenter(::JBBAMLKCDKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBBAMLKCDKG*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_SET_DETAILPRESENTER_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* get_DefaultSelectedPoint()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_GET_DEFAULTSELECTEDPOINT_OFFSET))(this);
		}

		::System::Void set_DefaultSelectedPoint(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_SET_DEFAULTSELECTEDPOINT_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* AHCJFIAALPL()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_AHCJFIAALPL_OFFSET))(this);
		}

		::CEEGMMCFCBG* OGNJAICKAOB()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_OGNJAICKAOB_OFFSET))(this);
		}

		::System::Void NMPLHCJKEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_NMPLHCJKEOI_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void NDMMMJCLGEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_NDMMMJCLGEK_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void ANFCNGJKJDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_ANFCNGJKJDN_OFFSET))(this);
		}

		::System::Void MNOFGJJNGMO(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_MNOFGJJNGMO_OFFSET))(this, a1);
		}

		::System::Void GEIBBGJPHJD(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_GEIBBGJPHJD_OFFSET))(this, a1);
		}

		::System::Void IBOEBOIBHMM(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_IBOEBOIBHMM_OFFSET))(this, a1);
		}

		::System::Void FHJMANOJKGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_FHJMANOJKGH_OFFSET))(this);
		}

		::System::Void HAFAPMLBLLL(::System::Object* a1, ::DPFBAMHBMFG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::DPFBAMHBMFG*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_HAFAPMLBLLL_OFFSET))(this, a1, a2);
		}

		::System::Void OBAENNFBHNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_OBAENNFBHNE_OFFSET))(this);
		}

		::System::Void PECLIFKLKJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_PECLIFKLKJG_OFFSET))(this);
		}

		::System::Void KBDJLEDBOMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_KBDJLEDBOMJ_OFFSET))(this);
		}

		::System::Void BNJJAJNLDEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_BNJJAJNLDEN_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* FNMABBGBEJD()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_FNMABBGBEJD_OFFSET))(this);
		}

		::System::Void BCONFBPOMDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK_BCONFBPOMDN_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* __RefreshDetail_b__75_0()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHGGGFAGNK___REFRESHDETAIL_B__75_0_OFFSET))(this);
		}

		::System::Void __RefreshDetail_b__75_1(::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*))((::PBYTE)hIl2Cpp + FOHGGGFAGNK___REFRESHDETAIL_B__75_1_OFFSET))(this, a1);
		}

	};
