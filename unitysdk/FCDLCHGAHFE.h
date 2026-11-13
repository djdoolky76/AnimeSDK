#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFNJKAPPNOF.h"
#include "unitysdk/RPG/Client/LineupRecommendationReportActionType.h"
#include "unitysdk/RPG/Client/LineupRecommendationType.h"
#include "unitysdk/System/Object.h"
class BKALMLMEEPL;
class BMKNANGPDGH;
class FCDLCHGAHFE;
class FPDCINMDJCE;
class GBNJAFIOLIP;
class OFFMDBMMNFM;
class OLLGFBLPHOH;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCDLCHGAHFE_ANJLKPBJJPP_OFFSET UNITYSDK_OFFSET(0x1C00E110)
#define FCDLCHGAHFE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C00D890)
#define FCDLCHGAHFE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C00DF70)
#define FCDLCHGAHFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C00D9E0)
#define FCDLCHGAHFE_DOMAOPLDIEI_OFFSET UNITYSDK_OFFSET(0x1C00E410)
#define FCDLCHGAHFE_FEEHDOFCBLI_OFFSET UNITYSDK_OFFSET(0x1C00EA00)
#define FCDLCHGAHFE_FIBBCHGLKNC_OFFSET UNITYSDK_OFFSET(0x1C00EAF0)
#define FCDLCHGAHFE_GETLINEUPDETAILINFO_OFFSET UNITYSDK_OFFSET(0x1C00E210)
#define FCDLCHGAHFE_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x1C00D780)
#define FCDLCHGAHFE_GET_COUNTOFLINEUPS_OFFSET UNITYSDK_OFFSET(0x1C00D7A0)
#define FCDLCHGAHFE_GET_FRIENDRECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x1C00D840)
#define FCDLCHGAHFE_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1C00D740)
#define FCDLCHGAHFE_GET_RECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x1C00D7F0)
#define FCDLCHGAHFE_GOIAOCEEKOI_OFFSET UNITYSDK_OFFSET(0x1C00F9A0)
#define FCDLCHGAHFE_JNLEJOMACDK_OFFSET UNITYSDK_OFFSET(0x1C00E180)
#define FCDLCHGAHFE_LEMHDMFMEAF_OFFSET UNITYSDK_OFFSET(0x1C00EEA0)
#define FCDLCHGAHFE_OLKAFHDFPPK_OFFSET UNITYSDK_OFFSET(0x1C00DC60)
#define FCDLCHGAHFE_PGLGFIIJLMK_OFFSET UNITYSDK_OFFSET(0x1C00EBA0)
#define FCDLCHGAHFE_REFRESH_OFFSET UNITYSDK_OFFSET(0x1C00DAB0)
#define FCDLCHGAHFE_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x1C00E0C0)
#define FCDLCHGAHFE_SET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x1C00D790)

inline static constexpr unsigned int FCDLCHGAHFE_TypeDefinitionIndex = 65362;

	class FCDLCHGAHFE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlayerBriefDisplayData*>* OJOMJABLKHK; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* PHMBKFLPGKJ; // 0x18
		::GBNJAFIOLIP* MAIIMAOLDBM; // 0x20
		::System::Collections::Generic::List_1<::FPDCINMDJCE*>* PHMOPHKGEDJ; // 0x28
		::System::Boolean CBFKKPNKNMP; // 0x30
		::System::Boolean _CanRefresh_k__BackingField; // 0x31
		::System::Byte _padding0[0x2];
		::System::UInt32 HKAHFHHICEN; // 0x34
		::System::Void _ctor(::System::UInt32 a1, ::GBNJAFIOLIP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::GBNJAFIOLIP*))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_CanRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_GET_CANREFRESH_OFFSET))(this);
		}

		::System::Void set_CanRefresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_SET_CANREFRESH_OFFSET))(this, a1);
		}

		::System::Int32 get_CountOfLineups()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_GET_COUNTOFLINEUPS_OFFSET))(this);
		}

		::RPG::Client::LineupRecommendationType get_RecommendType()
		{
			return ((::RPG::Client::LineupRecommendationType(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_GET_RECOMMENDTYPE_OFFSET))(this);
		}

		::JFNJKAPPNOF get_FriendRecommendType()
		{
			return ((::JFNJKAPPNOF(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_GET_FRIENDRECOMMENDTYPE_OFFSET))(this);
		}

		static ::FCDLCHGAHFE* BPLPBPMEODA(::System::UInt32 a1, ::GBNJAFIOLIP* a2)
		{
			return ((::FCDLCHGAHFE*(*)(::System::UInt32, ::GBNJAFIOLIP*))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_REFRESH_OFFSET))(this);
		}

		::System::Void OLKAFHDFPPK(::BKALMLMEEPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKALMLMEEPL*))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_OLKAFHDFPPK_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_CLEAR_OFFSET))(this);
		}

		::System::Void ReportAction(::RPG::Client::LineupRecommendationReportActionType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LineupRecommendationReportActionType, ::System::Boolean))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_REPORTACTION_OFFSET))(this, a1, a2);
		}

		::System::UInt32 ANJLKPBJJPP(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_ANJLKPBJJPP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* GetLineupDetailInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_GETLINEUPDETAILINFO_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* DOMAOPLDIEI(::OLLGFBLPHOH* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID, ::OLLGFBLPHOH*))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_DOMAOPLDIEI_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerBriefDisplayData* FEEHDOFCBLI(::System::Int32 a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_FEEHDOFCBLI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::BMKNANGPDGH*>* FIBBCHGLKNC(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::BMKNANGPDGH*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_FIBBCHGLKNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* PGLGFIIJLMK(::RPG::Client::ExpeditionBattleMap* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID, ::RPG::Client::ExpeditionBattleMap*))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_PGLGFIIJLMK_OFFSET))(this, a1);
		}

		::System::Int32 LEMHDMFMEAF(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_LEMHDMFMEAF_OFFSET))(this, a1, a2);
		}

		::FPDCINMDJCE* JNLEJOMACDK(::System::Int32 a1)
		{
			return ((::FPDCINMDJCE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_JNLEJOMACDK_OFFSET))(this, a1);
		}

		::OFFMDBMMNFM* GOIAOCEEKOI(::System::Int32 a1)
		{
			return ((::OFFMDBMMNFM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_GOIAOCEEKOI_OFFSET))(this, a1);
		}

	};
