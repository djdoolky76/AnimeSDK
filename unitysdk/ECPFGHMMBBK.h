#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABMNFJJDDOE;
class DAMNNJKJOMM;
class HBLIJJHEIAK;
class JOLHIMGJGBO;
class LJEMPEHADKJ;
class PLHPNBIMIOK;
namespace RPG::Client { class AvatarFarmGuideData; }
namespace RPG::Client { class ChallengeLineup; }
namespace RPG::Client { class ChallengePeakBossStatisticsLineupRecommendation; }
namespace RPG::Client { class ChallengePeakNormalStatisticsLineupRecommendation; }
namespace RPG::Client { class HandbookGrowthGuideEquipmentData; }
namespace RPG::Client { class LightConeGrowthRecommendItem; }
namespace RPG::Client { class MessageContentAvatarGrowthBlock; }
namespace RPG::Client { class MessageContentChallengePeakTeamBlock; }
namespace RPG::Client { class MessageContentChallengeTeamBlock; }
namespace RPG::Client { class MessageContentLightConeRecommendBlock; }
namespace RPG::Client { class MessageContentRelicRecommendBlock; }
namespace RPG::Client { class MessageContentTeamBuildBlock; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECPFGHMMBBK_BBDMIJENKJG_OFFSET UNITYSDK_OFFSET(0x12D19C90)
#define ECPFGHMMBBK_BDHCDGEKCIF_OFFSET UNITYSDK_OFFSET(0x12D19430)
#define ECPFGHMMBBK_BONIDLOGOJE_OFFSET UNITYSDK_OFFSET(0x12D183F0)
#define ECPFGHMMBBK_CDGBMNOBJOD_OFFSET UNITYSDK_OFFSET(0x12D1A080)
#define ECPFGHMMBBK_CTOR_OFFSET UNITYSDK_OFFSET(0x13306350)
#define ECPFGHMMBBK_GCEKJEPPALN_OFFSET UNITYSDK_OFFSET(0x12D19B60)
#define ECPFGHMMBBK_GGHFNMCONDH_OFFSET UNITYSDK_OFFSET(0x12D19840)
#define ECPFGHMMBBK_GIGHCMCPOJI_OFFSET UNITYSDK_OFFSET(0x12D191D0)
#define ECPFGHMMBBK_GNDHOFLIGCI_OFFSET UNITYSDK_OFFSET(0x12D18ED0)
#define ECPFGHMMBBK_GPHAKJMCJDJ_OFFSET UNITYSDK_OFFSET(0x12D186D0)
#define ECPFGHMMBBK_HBFOHEELIAE_OFFSET UNITYSDK_OFFSET(0x133062C0)
#define ECPFGHMMBBK_JKEEGECEIIO_OFFSET UNITYSDK_OFFSET(0x12D198B0)
#define ECPFGHMMBBK_KJIMKFGPCFE_OFFSET UNITYSDK_OFFSET(0x12D19730)
#define ECPFGHMMBBK_LEDJHAEALGI_OFFSET UNITYSDK_OFFSET(0x12D18960)
#define ECPFGHMMBBK_MFOGKNIIEAE_OFFSET UNITYSDK_OFFSET(0x12D19AA0)
#define ECPFGHMMBBK_MNKNHNBCOOF_OFFSET UNITYSDK_OFFSET(0x12D19D40)
#define ECPFGHMMBBK_MOBKKGGPHPO_OFFSET UNITYSDK_OFFSET(0x12D18CA0)
#define ECPFGHMMBBK_OHLGONKDJLH_OFFSET UNITYSDK_OFFSET(0x13306230)
#define ECPFGHMMBBK_POEJNLANOJP_OFFSET UNITYSDK_OFFSET(0x13306000)

	class ECPFGHMMBBK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GFLDIPMANKA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_CTOR_OFFSET))(this);
		}

		::System::Void BONIDLOGOJE(::HBLIJJHEIAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBLIJJHEIAK*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_BONIDLOGOJE_OFFSET))(this, a1);
		}

		::System::Void KJIMKFGPCFE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_KJIMKFGPCFE_OFFSET))(this, a1);
		}

		::System::Void GGHFNMCONDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_GGHFNMCONDH_OFFSET))(this);
		}

		::System::Void GPHAKJMCJDJ(::RPG::Client::MessageContentAvatarGrowthBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentAvatarGrowthBlock*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_GPHAKJMCJDJ_OFFSET))(this, a1);
		}

		::ABMNFJJDDOE* JKEEGECEIIO(::RPG::Client::AvatarFarmGuideData* a1)
		{
			return ((::ABMNFJJDDOE*(*)(::PVOID, ::RPG::Client::AvatarFarmGuideData*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_JKEEGECEIIO_OFFSET))(this, a1);
		}

		::System::Void LEDJHAEALGI(::RPG::Client::MessageContentTeamBuildBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentTeamBuildBlock*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_LEDJHAEALGI_OFFSET))(this, a1);
		}

		::System::UInt32 MFOGKNIIEAE(::RPG::Client::HandbookGrowthGuideEquipmentData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideEquipmentData*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_MFOGKNIIEAE_OFFSET))(this, a1);
		}

		::LJEMPEHADKJ* GCEKJEPPALN(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::LJEMPEHADKJ*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_GCEKJEPPALN_OFFSET))(this, a1);
		}

		::System::Void MOBKKGGPHPO(::RPG::Client::MessageContentRelicRecommendBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentRelicRecommendBlock*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_MOBKKGGPHPO_OFFSET))(this, a1);
		}

		::System::Void GNDHOFLIGCI(::RPG::Client::MessageContentLightConeRecommendBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentLightConeRecommendBlock*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_GNDHOFLIGCI_OFFSET))(this, a1);
		}

		::PLHPNBIMIOK* BBDMIJENKJG(::RPG::Client::LightConeGrowthRecommendItem* a1)
		{
			return ((::PLHPNBIMIOK*(*)(::PVOID, ::RPG::Client::LightConeGrowthRecommendItem*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_BBDMIJENKJG_OFFSET))(this, a1);
		}

		::System::Void GIGHCMCPOJI(::RPG::Client::MessageContentChallengeTeamBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentChallengeTeamBlock*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_GIGHCMCPOJI_OFFSET))(this, a1);
		}

		::DAMNNJKJOMM* MNKNHNBCOOF(::RPG::Client::ChallengeLineup* a1)
		{
			return ((::DAMNNJKJOMM*(*)(::PVOID, ::RPG::Client::ChallengeLineup*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_MNKNHNBCOOF_OFFSET))(this, a1);
		}

		::System::Void BDHCDGEKCIF(::RPG::Client::MessageContentChallengePeakTeamBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentChallengePeakTeamBlock*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_BDHCDGEKCIF_OFFSET))(this, a1);
		}

		::JOLHIMGJGBO* CDGBMNOBJOD(::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation* a1, ::System::Int32 a2)
		{
			return ((::JOLHIMGJGBO*(*)(::PVOID, ::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation*, ::System::Int32))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_CDGBMNOBJOD_OFFSET))(this, a1, a2);
		}

		::JOLHIMGJGBO* POEJNLANOJP(::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation* a1, ::System::Int32 a2)
		{
			return ((::JOLHIMGJGBO*(*)(::PVOID, ::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation*, ::System::Int32))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_POEJNLANOJP_OFFSET))(this, a1, a2);
		}

		::System::Boolean OHLGONKDJLH(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_OHLGONKDJLH_OFFSET))(this, a1);
		}

		::System::Void HBFOHEELIAE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECPFGHMMBBK_HBFOHEELIAE_OFFSET))(this, a1);
		}

	};
