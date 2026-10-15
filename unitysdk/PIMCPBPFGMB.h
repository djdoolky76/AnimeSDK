#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class ACNNMGIJMFK;
class AHCEFHABPDI;
class CEEGMMCFCBG;
class CFPNIJINMJA;
class CFPNIJINMJA_CJKPEHAGJHP;
class CKCJOCJGHKC;
class DHCNDENHLGO;
class ILDNJGBJGPF;
class JBKNCCIENIP;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceResultBadgeNoticeViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceResultBadgeNoticeViewModel_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTargetsViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PIMCPBPFGMB_ACDNHGLFMLH_OFFSET UNITYSDK_OFFSET(0xC26F0D0)
#define PIMCPBPFGMB_APEEPGJMIAM_OFFSET UNITYSDK_OFFSET(0xC26F190)
#define PIMCPBPFGMB_CTOR_OFFSET UNITYSDK_OFFSET(0xC26F1F0)
#define PIMCPBPFGMB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC26F880)
#define PIMCPBPFGMB_DJAKNKLNGLE_OFFSET UNITYSDK_OFFSET(0xC26E9C0)
#define PIMCPBPFGMB_EDFGNJLICKE_OFFSET UNITYSDK_OFFSET(0xC26EA80)
#define PIMCPBPFGMB_EHCJPNNPAMH_OFFSET UNITYSDK_OFFSET(0xC26E800)
#define PIMCPBPFGMB_EJDBEKMBEOA_OFFSET UNITYSDK_OFFSET(0xC26ED90)
#define PIMCPBPFGMB_GET_CURRENTSESSIONRECORD_OFFSET UNITYSDK_OFFSET(0xC26EED0)
#define PIMCPBPFGMB_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC26EF40)
#define PIMCPBPFGMB_GET_SHOWREWARDDETAILCOMMAND_OFFSET UNITYSDK_OFFSET(0xC26F1E0)
#define PIMCPBPFGMB_GET_STAGES_OFFSET UNITYSDK_OFFSET(0xC26E9B0)
#define PIMCPBPFGMB_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0xC26ED80)
#define PIMCPBPFGMB_JKGDKKEKHBK_OFFSET UNITYSDK_OFFSET(0xC26E8C0)
#define PIMCPBPFGMB_LNPPBODBLCE_OFFSET UNITYSDK_OFFSET(0xC26EC90)
#define PIMCPBPFGMB_MLNMJJMCFGP_OFFSET UNITYSDK_OFFSET(0xC26EA10)
#define PIMCPBPFGMB_NCOACGFJMMA_OFFSET UNITYSDK_OFFSET(0xC26F010)
#define PIMCPBPFGMB_ODMBCENFGCB_OFFSET UNITYSDK_OFFSET(0xC26E7B0)
#define PIMCPBPFGMB_OEEPEMKFPMI_OFFSET UNITYSDK_OFFSET(0xC26EE20)
#define PIMCPBPFGMB_OGNJAICKAOB_OFFSET UNITYSDK_OFFSET(0xC26EF50)
#define PIMCPBPFGMB_OMEINDPFAJH_OFFSET UNITYSDK_OFFSET(0xC26EEE0)
#define PIMCPBPFGMB_PDPIFMCICLM_OFFSET UNITYSDK_OFFSET(0xC26E910)
#define PIMCPBPFGMB__GET_CONTINUECOMMAND_B__46_0_OFFSET UNITYSDK_OFFSET(0xC26FDF0)
#define PIMCPBPFGMB__GET_CONTINUECOMMAND_B__46_1_OFFSET UNITYSDK_OFFSET(0xC2700D0)
#define PIMCPBPFGMB__GET_EXITCOMMAND_B__40_0_OFFSET UNITYSDK_OFFSET(0xC26FDB0)
#define PIMCPBPFGMB__GET_RESTARTCOMMAND_B__43_0_OFFSET UNITYSDK_OFFSET(0xC26FDD0)

	class PIMCPBPFGMB : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::CFPNIJINMJA*>* _Stages_k__BackingField; // 0x10
		::ACNNMGIJMFK* KOADDJDNCKO; // 0x18
		::CEEGMMCFCBG* _ShowRewardDetailCommand_k__BackingField; // 0x20
		::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* _CurrentSessionRecord_k__BackingField; // 0x28
		::Sofa::Core::SimpleCommand* KNOPHJEEPGJ; // 0x30
		::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* _Targets_k__BackingField; // 0x38
		::ILDNJGBJGPF* PFJGDJPMAMM; // 0x40
		::RPG::Client::ChallengeData* HBPBNOCLCPA; // 0x48
		::Sofa::Core::SimpleCommand* LCGBLFOHNFA; // 0x50
		::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel* GPDIDCGEEEC; // 0x58
		::System::Collections::Generic::IReadOnlyList_1<::AHCEFHABPDI*>* _RewardItems_k__BackingField; // 0x60
		::Sofa::Core::SimpleCommand* APHMKBFPPPD; // 0x68
		::System::Void _ctor(::CFPNIJINMJA_CJKPEHAGJHP* a1, ::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel_Factory* a2, ::JBKNCCIENIP* a3, ::ACNNMGIJMFK* a4, ::RPG::Client::ChallengeGroupData* a5, ::ILDNJGBJGPF* a6)
		{
			return ((::System::Void(*)(::PVOID, ::CFPNIJINMJA_CJKPEHAGJHP*, ::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel_Factory*, ::JBKNCCIENIP*, ::ACNNMGIJMFK*, ::RPG::Client::ChallengeGroupData*, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::CKCJOCJGHKC* ODMBCENFGCB()
		{
			return ((::CKCJOCJGHKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_ODMBCENFGCB_OFFSET))(this);
		}

		::RPG::Client::TextID EHCJPNNPAMH()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_EHCJPNNPAMH_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeGroupType JKGDKKEKHBK()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_JKGDKKEKHBK_OFFSET))(this);
		}

		::DHCNDENHLGO* PDPIFMCICLM()
		{
			return ((::DHCNDENHLGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_PDPIFMCICLM_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CFPNIJINMJA*>* get_Stages()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CFPNIJINMJA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_GET_STAGES_OFFSET))(this);
		}

		::System::Int32 DJAKNKLNGLE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_DJAKNKLNGLE_OFFSET))(this);
		}

		::System::Nullable* MLNMJJMCFGP()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_MLNMJJMCFGP_OFFSET))(this);
		}

		::System::Boolean EDFGNJLICKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_EDFGNJLICKE_OFFSET))(this);
		}

		::System::Boolean LNPPBODBLCE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_LNPPBODBLCE_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* get_Targets()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_GET_TARGETS_OFFSET))(this);
		}

		::System::Boolean EJDBEKMBEOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_EJDBEKMBEOA_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* OEEPEMKFPMI()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_OEEPEMKFPMI_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* get_CurrentSessionRecord()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_GET_CURRENTSESSIONRECORD_OFFSET))(this);
		}

		::System::Boolean OMEINDPFAJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_OMEINDPFAJH_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::AHCEFHABPDI*>* get_RewardItems()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::AHCEFHABPDI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_GET_REWARDITEMS_OFFSET))(this);
		}

		::CEEGMMCFCBG* OGNJAICKAOB()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_OGNJAICKAOB_OFFSET))(this);
		}

		::CEEGMMCFCBG* NCOACGFJMMA()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_NCOACGFJMMA_OFFSET))(this);
		}

		::CEEGMMCFCBG* ACDNHGLFMLH()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_ACDNHGLFMLH_OFFSET))(this);
		}

		::CEEGMMCFCBG* APEEPGJMIAM()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_APEEPGJMIAM_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_ShowRewardDetailCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_GET_SHOWREWARDDETAILCOMMAND_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_DISPOSE_OFFSET))(this);
		}

		::System::Void _get_ExitCommand_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB__GET_EXITCOMMAND_B__40_0_OFFSET))(this);
		}

		::System::Void _get_RestartCommand_b__43_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB__GET_RESTARTCOMMAND_B__43_0_OFFSET))(this);
		}

		::System::Void _get_ContinueCommand_b__46_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB__GET_CONTINUECOMMAND_B__46_0_OFFSET))(this);
		}

		::System::Void _get_ContinueCommand_b__46_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PIMCPBPFGMB__GET_CONTINUECOMMAND_B__46_1_OFFSET))(this, a1);
		}

	};
