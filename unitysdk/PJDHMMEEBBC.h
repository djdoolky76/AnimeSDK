#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/ActiveSkillDescShowMode.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingCarDetailDisplayMode.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
class AJPBKMBIGNC;
class BDHINPLKOPK;
class CIFKCGJNFHF;
class DNBDHGNLIPK;
class HBGNFKBHDJK;
class IIFHKNIBAFH;
class KBKFLNHFHPF;
class KIIGKJKMCHP;
class KMKEFPAJIPI;
class MKHPAECGJBE;
class MONJFDPKFBA;
class PJAPDCPOBGC;
class PPEJPEMHNAO;
namespace RPG::Client::B51Racing { class B51RacingBuffSkillItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarActiveSkillItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarActiveSkillUpgradePageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarDetailDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarDevelopActionSelectViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarDevelopPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarDevelopPartTabViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarDriverSelectPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarInfoPanelViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarStatItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingChallengeMatchPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDIYPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDevelopActionResultViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace RPG::Client::B51Racing { class B51RacingExitDoubleConfirmationDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingInitCarPreviewPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingInitCarSelectPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingLightConeRewardPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingLimitedRewardPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingNewCarDriverPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingNewDevelopTargetDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingNewPartHintDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingPartRetentionItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingResidentRewardPageViewModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJDHMMEEBBC_AAHOJDODJPM_OFFSET UNITYSDK_OFFSET(0xC27F2C0)
#define PJDHMMEEBBC_ACFJAHPDBEK_OFFSET UNITYSDK_OFFSET(0xC280AA0)
#define PJDHMMEEBBC_AFKBGCMAMPP_OFFSET UNITYSDK_OFFSET(0xC2829B0)
#define PJDHMMEEBBC_AKDJINLLKGE_OFFSET UNITYSDK_OFFSET(0xC282B20)
#define PJDHMMEEBBC_AOMCJOKOCPJ_OFFSET UNITYSDK_OFFSET(0xC27C090)
#define PJDHMMEEBBC_BAALCJJNLJO_OFFSET UNITYSDK_OFFSET(0xC280510)
#define PJDHMMEEBBC_BBMEGMKEDHL_OFFSET UNITYSDK_OFFSET(0xC27C2D0)
#define PJDHMMEEBBC_BBOPFBKGKAB_OFFSET UNITYSDK_OFFSET(0xC27CCE0)
#define PJDHMMEEBBC_BFKHAONGGOL_OFFSET UNITYSDK_OFFSET(0xC27E850)
#define PJDHMMEEBBC_BJEMNGIDCBB_OFFSET UNITYSDK_OFFSET(0xC27F8B0)
#define PJDHMMEEBBC_BKDANAIIHAI_OFFSET UNITYSDK_OFFSET(0xC27EBB0)
#define PJDHMMEEBBC_BKEFDEEEAAO_OFFSET UNITYSDK_OFFSET(0xC27DF20)
#define PJDHMMEEBBC_BNAPHKFPBGH_OFFSET UNITYSDK_OFFSET(0xC27FFD0)
#define PJDHMMEEBBC_CPPKHMMLBNP_OFFSET UNITYSDK_OFFSET(0xC2801A0)
#define PJDHMMEEBBC_CTOR_OFFSET UNITYSDK_OFFSET(0xC283480)
#define PJDHMMEEBBC_DADBGEJJCNG_OFFSET UNITYSDK_OFFSET(0xC280F60)
#define PJDHMMEEBBC_DDCOINFBAIN_OFFSET UNITYSDK_OFFSET(0xC27D540)
#define PJDHMMEEBBC_DOPGLCIDGFE_OFFSET UNITYSDK_OFFSET(0xC281560)
#define PJDHMMEEBBC_EHMFLGAGNMG_OFFSET UNITYSDK_OFFSET(0xC27D1E0)
#define PJDHMMEEBBC_EKDBAACBBIJ_OFFSET UNITYSDK_OFFSET(0xC280920)
#define PJDHMMEEBBC_EKFDDGDGDML_OFFSET UNITYSDK_OFFSET(0xC27ECF0)
#define PJDHMMEEBBC_FLANLPGLDGM_OFFSET UNITYSDK_OFFSET(0xC27EE00)
#define PJDHMMEEBBC_GFMLDALIOAG_OFFSET UNITYSDK_OFFSET(0xC283170)
#define PJDHMMEEBBC_HPHHNFCKPGB_OFFSET UNITYSDK_OFFSET(0xC282DB0)
#define PJDHMMEEBBC_IFHPHNBCKLG_OFFSET UNITYSDK_OFFSET(0xC282EE0)
#define PJDHMMEEBBC_INPCIIOJNEO_OFFSET UNITYSDK_OFFSET(0xC27EF90)
#define PJDHMMEEBBC_JAICPOODKMC_OFFSET UNITYSDK_OFFSET(0xC280420)
#define PJDHMMEEBBC_JFGEFMMFPAM_OFFSET UNITYSDK_OFFSET(0xC282600)
#define PJDHMMEEBBC_JMKKFHGHAEF_OFFSET UNITYSDK_OFFSET(0xC27C030)
#define PJDHMMEEBBC_KGFFFGAOOJH_OFFSET UNITYSDK_OFFSET(0xC27C4D0)
#define PJDHMMEEBBC_KKDIDINKANP_OFFSET UNITYSDK_OFFSET(0xC281DD0)
#define PJDHMMEEBBC_KPDPHHPNPFB_OFFSET UNITYSDK_OFFSET(0xC2811F0)
#define PJDHMMEEBBC_LAEBNNIBJGL_OFFSET UNITYSDK_OFFSET(0xC2833A0)
#define PJDHMMEEBBC_LPHGLGKGBFN_OFFSET UNITYSDK_OFFSET(0xC27D790)
#define PJDHMMEEBBC_MFPLNFBHKAF_OFFSET UNITYSDK_OFFSET(0xC2832A0)
#define PJDHMMEEBBC_MPAFGHICOMB_OFFSET UNITYSDK_OFFSET(0xC27BB80)
#define PJDHMMEEBBC_NACCGFLLJMB_OFFSET UNITYSDK_OFFSET(0xC27E230)
#define PJDHMMEEBBC_NHHMCDGGJAA_OFFSET UNITYSDK_OFFSET(0xC27C6D0)
#define PJDHMMEEBBC_NJBNDNFMBAL_OFFSET UNITYSDK_OFFSET(0xC2807C0)
#define PJDHMMEEBBC_OBPAIEPJMEF_OFFSET UNITYSDK_OFFSET(0xC2823A0)
#define PJDHMMEEBBC_OLGAMIIIMIC_OFFSET UNITYSDK_OFFSET(0xC280660)
#define PJDHMMEEBBC_PABIFMPFGDD_OFFSET UNITYSDK_OFFSET(0xC2816B0)
#define PJDHMMEEBBC_PFBJCLCFLCI_OFFSET UNITYSDK_OFFSET(0xC27F7D0)
#define PJDHMMEEBBC__BUILDACTIONSELECTPAGEVMBYAGENDA_B__8_0_OFFSET UNITYSDK_OFFSET(0xC283490)
#define PJDHMMEEBBC__CREATENEWDEVELOPTARGETDIALOGVM_B__11_0_OFFSET UNITYSDK_OFFSET(0xC2834B0)

inline static constexpr unsigned int PJDHMMEEBBC_TypeDefinitionIndex = 81986;

	class PJDHMMEEBBC : public ::System::Object
	{
	public:
		::PPEJPEMHNAO* NJNNCOCIGCC; // 0x10
		::CIFKCGJNFHF* POIDJMHLKJN; // 0x18
		::BDHINPLKOPK* GKLKOIJJEKJ; // 0x20
		::PJAPDCPOBGC* FCCMAEFHDIA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* MPAFGHICOMB(::KBKFLNHFHPF* a1, ::MONJFDPKFBA* a2)
		{
			return ((::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*(*)(::PVOID, ::KBKFLNHFHPF*, ::MONJFDPKFBA*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_MPAFGHICOMB_OFFSET))(this, a1, a2);
		}

		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* JMKKFHGHAEF(::MKHPAECGJBE* a1)
		{
			return ((::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*(*)(::PVOID, ::MKHPAECGJBE*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_JMKKFHGHAEF_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* AOMCJOKOCPJ(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
		{
			return ((::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_AOMCJOKOCPJ_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* KGFFFGAOOJH(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
		{
			return ((::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_KGFFFGAOOJH_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingCarDevelopActionSelectViewModel* NHHMCDGGJAA(::KBKFLNHFHPF* a1, ::KMKEFPAJIPI* a2)
		{
			return ((::RPG::Client::B51Racing::B51RacingCarDevelopActionSelectViewModel*(*)(::PVOID, ::KBKFLNHFHPF*, ::KMKEFPAJIPI*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_NHHMCDGGJAA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::B51Racing::B51RacingDevelopActionResultViewModel* LPHGLGKGBFN(::KBKFLNHFHPF* a1, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* a2)
		{
			return ((::RPG::Client::B51Racing::B51RacingDevelopActionResultViewModel*(*)(::PVOID, ::KBKFLNHFHPF*, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_LPHGLGKGBFN_OFFSET))(this, a1, a2);
		}

		::RPG::Client::B51Racing::B51RacingCarDevelopPageViewModel* BKEFDEEEAAO(::KBKFLNHFHPF* a1, ::KMKEFPAJIPI* a2)
		{
			return ((::RPG::Client::B51Racing::B51RacingCarDevelopPageViewModel*(*)(::PVOID, ::KBKFLNHFHPF*, ::KMKEFPAJIPI*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_BKEFDEEEAAO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::B51Racing::B51RacingNewDevelopTargetDialogViewModel* BFKHAONGGOL(::System::UInt32 a1)
		{
			return ((::RPG::Client::B51Racing::B51RacingNewDevelopTargetDialogViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_BFKHAONGGOL_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel* BKDANAIIHAI(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_BKDANAIIHAI_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::B51Racing::B51RacingCarDevelopPartTabViewModel* NACCGFLLJMB(::KIIGKJKMCHP* a1, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a3)
		{
			return ((::RPG::Client::B51Racing::B51RacingCarDevelopPartTabViewModel*(*)(::PVOID, ::KIIGKJKMCHP*, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_NACCGFLLJMB_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::B51Racing::B51RacingInitCarPreviewPageViewModel* FLANLPGLDGM(::System::UInt32 a1)
		{
			return ((::RPG::Client::B51Racing::B51RacingInitCarPreviewPageViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_FLANLPGLDGM_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingInitCarSelectPageViewModel* AAHOJDODJPM()
		{
			return ((::RPG::Client::B51Racing::B51RacingInitCarSelectPageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_AAHOJDODJPM_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingChallengeMatchPageViewModel* BJEMNGIDCBB()
		{
			return ((::RPG::Client::B51Racing::B51RacingChallengeMatchPageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_BJEMNGIDCBB_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingCarInfoPanelViewModel* INPCIIOJNEO(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a4)
		{
			return ((::RPG::Client::B51Racing::B51RacingCarInfoPanelViewModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_INPCIIOJNEO_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel* BNAPHKFPBGH(::KBKFLNHFHPF* a1, ::RPG::Client::B51Racing::B51RacingCarDetailDisplayMode a2)
		{
			return ((::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel*(*)(::PVOID, ::KBKFLNHFHPF*, ::RPG::Client::B51Racing::B51RacingCarDetailDisplayMode))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_BNAPHKFPBGH_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Single> CPPKHMMLBNP(::KBKFLNHFHPF* a1, ::MONJFDPKFBA* a2)
		{
			return ((::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Single>(*)(::PVOID, ::KBKFLNHFHPF*, ::MONJFDPKFBA*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_CPPKHMMLBNP_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* JAICPOODKMC(::KBKFLNHFHPF* a1, ::MONJFDPKFBA* a2, ::RPG::Client::B51Racing::B51RacingCarDetailDisplayMode a3)
		{
			return ((::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*(*)(::PVOID, ::KBKFLNHFHPF*, ::MONJFDPKFBA*, ::RPG::Client::B51Racing::B51RacingCarDetailDisplayMode))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_JAICPOODKMC_OFFSET))(this, a1, a2, a3);
		}

		::System::ValueTuple_3<::System::String*, ::RPG::Client::TextID, ::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*> BAALCJJNLJO(::KBKFLNHFHPF* a1, ::RPG::Client::B51Racing::B51RacingCarDetailDisplayMode a2, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* a3)
		{
			return ((::System::ValueTuple_3<::System::String*, ::RPG::Client::TextID, ::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*>(*)(::PVOID, ::KBKFLNHFHPF*, ::RPG::Client::B51Racing::B51RacingCarDetailDisplayMode, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_BAALCJJNLJO_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* OLGAMIIIMIC(::KBKFLNHFHPF* a1)
		{
			return ((::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*(*)(::PVOID, ::KBKFLNHFHPF*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_OLGAMIIIMIC_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::String*, ::RPG::Client::TextID> NJBNDNFMBAL(::IIFHKNIBAFH* a1, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* a2)
		{
			return ((::System::ValueTuple_2<::System::String*, ::RPG::Client::TextID>(*)(::PVOID, ::IIFHKNIBAFH*, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_NJBNDNFMBAL_OFFSET))(this, a1, a2);
		}

		::System::Void EKDBAACBBIJ(::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_EKDBAACBBIJ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::B51Racing::B51RacingCarActiveSkillUpgradePageViewModel* ACFJAHPDBEK(::KBKFLNHFHPF* a1, ::System::Boolean a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::B51Racing::B51RacingCarActiveSkillUpgradePageViewModel*(*)(::PVOID, ::KBKFLNHFHPF*, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_ACFJAHPDBEK_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* PFBJCLCFLCI(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::Single a5, ::RPG::Client::B51Racing::ActiveSkillDescShowMode a6)
		{
			return ((::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Single, ::RPG::Client::B51Racing::ActiveSkillDescShowMode))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_PFBJCLCFLCI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::B51Racing::B51RacingDIYPageViewModel* DADBGEJJCNG(::MONJFDPKFBA* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::B51Racing::B51RacingDIYPageViewModel*(*)(::PVOID, ::MONJFDPKFBA*, ::System::UInt32))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_DADBGEJJCNG_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::KIIGKJKMCHP*>* KPDPHHPNPFB(::MONJFDPKFBA* a1)
		{
			return ((::Il2CppArray<::KIIGKJKMCHP*>*(*)(::PVOID, ::MONJFDPKFBA*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_KPDPHHPNPFB_OFFSET))(this, a1);
		}

		static ::System::Boolean DOPGLCIDGFE(::MONJFDPKFBA* a1)
		{
			return ((::System::Boolean(*)(::MONJFDPKFBA*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_DOPGLCIDGFE_OFFSET))(a1);
		}

		::RPG::Client::B51Racing::B51RacingDIYPageViewModel* PABIFMPFGDD(::MONJFDPKFBA* a1)
		{
			return ((::RPG::Client::B51Racing::B51RacingDIYPageViewModel*(*)(::PVOID, ::MONJFDPKFBA*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_PABIFMPFGDD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Il2CppArray<::KIIGKJKMCHP*>*>* KKDIDINKANP(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Il2CppArray<::KIIGKJKMCHP*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_KKDIDINKANP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::UInt32>* OBPAIEPJMEF(::MONJFDPKFBA* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::UInt32>*(*)(::PVOID, ::MONJFDPKFBA*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_OBPAIEPJMEF_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingCarDriverSelectPageViewModel* JFGEFMMFPAM(::KBKFLNHFHPF* a1, ::Il2CppArray<::HBGNFKBHDJK*>* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::B51Racing::B51RacingCarDriverSelectPageViewModel*(*)(::PVOID, ::KBKFLNHFHPF*, ::Il2CppArray<::HBGNFKBHDJK*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_JFGEFMMFPAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::B51Racing::B51RacingNewCarDriverPageViewModel* AFKBGCMAMPP(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::RPG::Client::B51Racing::B51RacingNewCarDriverPageViewModel*(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_AFKBGCMAMPP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::B51Racing::B51RacingExitDoubleConfirmationDialogViewModel* AKDJINLLKGE(::KBKFLNHFHPF* a1)
		{
			return ((::RPG::Client::B51Racing::B51RacingExitDoubleConfirmationDialogViewModel*(*)(::PVOID, ::KBKFLNHFHPF*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_AKDJINLLKGE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID HPHHNFCKPGB(::AJPBKMBIGNC* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::AJPBKMBIGNC*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_HPHHNFCKPGB_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::B51Racing::B51RacingBuffSkillItemViewModel*>* BBOPFBKGKAB(::MONJFDPKFBA* a1)
		{
			return ((::Il2CppArray<::RPG::Client::B51Racing::B51RacingBuffSkillItemViewModel*>*(*)(::PVOID, ::MONJFDPKFBA*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_BBOPFBKGKAB_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingPartRetentionItemViewModel* EKFDDGDGDML(::KIIGKJKMCHP* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::B51Racing::B51RacingPartRetentionItemViewModel*(*)(::PVOID, ::KIIGKJKMCHP*, ::System::Boolean))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_EKFDDGDGDML_OFFSET))(this, a1, a2);
		}

		::System::UInt32 EHMFLGAGNMG(::System::Collections::Generic::List_1<::MKHPAECGJBE*>* a1, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::MKHPAECGJBE*>*, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_EHMFLGAGNMG_OFFSET))(this, a1, a2);
		}

		::System::Void DDCOINFBAIN(::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* a1, ::KIIGKJKMCHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*, ::KIIGKJKMCHP*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_DDCOINFBAIN_OFFSET))(this, a1, a2);
		}

		static ::System::UInt32 BBMEGMKEDHL(::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_BBMEGMKEDHL_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::Int32>* IFHPHNBCKLG(::MONJFDPKFBA* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::Int32>*(*)(::PVOID, ::MONJFDPKFBA*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_IFHPHNBCKLG_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingResidentRewardPageViewModel* GFMLDALIOAG(::IIFHKNIBAFH* a1)
		{
			return ((::RPG::Client::B51Racing::B51RacingResidentRewardPageViewModel*(*)(::PVOID, ::IIFHKNIBAFH*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_GFMLDALIOAG_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingLimitedRewardPageViewModel* MFPLNFBHKAF()
		{
			return ((::RPG::Client::B51Racing::B51RacingLimitedRewardPageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_MFPLNFBHKAF_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingLightConeRewardPageViewModel* LAEBNNIBJGL()
		{
			return ((::RPG::Client::B51Racing::B51RacingLightConeRewardPageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDHMMEEBBC_LAEBNNIBJGL_OFFSET))(this);
		}

		::MKHPAECGJBE* _BuildActionSelectPageVMByAgenda_b__8_0(::System::UInt32 a1)
		{
			return ((::MKHPAECGJBE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJDHMMEEBBC__BUILDACTIONSELECTPAGEVMBYAGENDA_B__8_0_OFFSET))(this, a1);
		}

		::DNBDHGNLIPK* _CreateNewDevelopTargetDialogVM_b__11_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32> a1)
		{
			return ((::DNBDHGNLIPK*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>))((::PBYTE)hIl2Cpp + PJDHMMEEBBC__CREATENEWDEVELOPTARGETDIALOGVM_B__11_0_OFFSET))(this, a1);
		}

	};
