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
class OFFMDBMMNFM;
class OLLGFBLPHOH;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCDLCHGAHFE_ANJLKPBJJPP_OFFSET UNITYSDK_OFFSET(0x156B5520)
#define FCDLCHGAHFE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x156B4CC0)
#define FCDLCHGAHFE_CLEAR_OFFSET UNITYSDK_OFFSET(0x156B5380)
#define FCDLCHGAHFE_CTOR_OFFSET UNITYSDK_OFFSET(0x156B4E00)
#define FCDLCHGAHFE_DOMAOPLDIEI_OFFSET UNITYSDK_OFFSET(0x156B5820)
#define FCDLCHGAHFE_FEEHDOFCBLI_OFFSET UNITYSDK_OFFSET(0x156B5DF0)
#define FCDLCHGAHFE_FIBBCHGLKNC_OFFSET UNITYSDK_OFFSET(0x156B5EE0)
#define FCDLCHGAHFE_GETLINEUPDETAILINFO_OFFSET UNITYSDK_OFFSET(0x156B5620)
#define FCDLCHGAHFE_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x156B4BB0)
#define FCDLCHGAHFE_GET_COUNTOFLINEUPS_OFFSET UNITYSDK_OFFSET(0x156B4BD0)
#define FCDLCHGAHFE_GET_FRIENDRECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x156B4C70)
#define FCDLCHGAHFE_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x156B4B70)
#define FCDLCHGAHFE_GET_RECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x156B4C20)
#define FCDLCHGAHFE_GOIAOCEEKOI_OFFSET UNITYSDK_OFFSET(0x156B6D90)
#define FCDLCHGAHFE_JNLEJOMACDK_OFFSET UNITYSDK_OFFSET(0x156B5590)
#define FCDLCHGAHFE_LEMHDMFMEAF_OFFSET UNITYSDK_OFFSET(0x156B6290)
#define FCDLCHGAHFE_OLKAFHDFPPK_OFFSET UNITYSDK_OFFSET(0x156B5070)
#define FCDLCHGAHFE_PGLGFIIJLMK_OFFSET UNITYSDK_OFFSET(0x156B5F90)
#define FCDLCHGAHFE_REFRESH_OFFSET UNITYSDK_OFFSET(0x156B4EC0)
#define FCDLCHGAHFE_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x156B54D0)
#define FCDLCHGAHFE_SET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x156B4BC0)

inline static constexpr unsigned int FCDLCHGAHFE_TypeDefinitionIndex = 63920;

	class FCDLCHGAHFE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* PHMBKFLPGKJ; // 0x10
		::System::Collections::Generic::List_1<::FPDCINMDJCE*>* PHMOPHKGEDJ; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlayerBriefDisplayData*>* OJOMJABLKHK; // 0x20
		::System::UInt32 HKAHFHHICEN; // 0x28
		::System::Boolean _CanRefresh_k__BackingField; // 0x2C
		::System::Boolean CBFKKPNKNMP; // 0x2D
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_CTOR_OFFSET))(this, a1);
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

		static ::FCDLCHGAHFE* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::FCDLCHGAHFE*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_BPLPBPMEODA_OFFSET))(a1);
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

		::RPG::Client::Promises::IPromise* GetLineupDetailInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_GETLINEUPDETAILINFO_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* DOMAOPLDIEI(::OLLGFBLPHOH* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OLLGFBLPHOH*))((::PBYTE)hIl2Cpp + FCDLCHGAHFE_DOMAOPLDIEI_OFFSET))(this, a1);
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
