#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
class DLEKOLHCNIE;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournAreaDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1C85F690)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C85F710)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETAREA_OFFSET UNITYSDK_OFFSET(0x1C85FDA0)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETFORMALAREABYDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C861000)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETFORMALAREAS_OFFSET UNITYSDK_OFFSET(0x1C860510)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETFORMALDIVISIONAREAS_OFFSET UNITYSDK_OFFSET(0x1C860850)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETPASSEDSEASONGUIDEAREACOUNT_OFFSET UNITYSDK_OFFSET(0x1C861630)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETPERMANENTGUIDEAREAS_OFFSET UNITYSDK_OFFSET(0x1C85FE30)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETSEASONGUIDEAREAS_OFFSET UNITYSDK_OFFSET(0x1C8600A0)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETUNLOCKEDANDUNFINISHEDSEASONGUIDEAREAS_OFFSET UNITYSDK_OFFSET(0x1C8602D0)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETWEEKCHALLENGEAREAS_OFFSET UNITYSDK_OFFSET(0x1C860AD0)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETWEEKCHALLENGEDIVISIONAREAS_OFFSET UNITYSDK_OFFSET(0x1C860D90)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_ISANYFORMALAREAPASSED_OFFSET UNITYSDK_OFFSET(0x1C8617D0)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_ISPERMANENTGUIDEAREASPASSED_OFFSET UNITYSDK_OFFSET(0x1C861310)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_ISSEASONGUIDEAREASPASSED_OFFSET UNITYSDK_OFFSET(0x1C8614A0)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_SYNC_OFFSET UNITYSDK_OFFSET(0x1C85F7B0)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION__GETORCREATEDATAITEM_OFFSET UNITYSDK_OFFSET(0x1C85FC30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAreaCollection_TypeDefinitionIndex = 69438;

	class RogueTournAreaCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournAreaDataItem*>* _AreaDataItems; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::DLEKOLHCNIE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::DLEKOLHCNIE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournAreaDataItem* GetArea(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournAreaDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETAREA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>* GetPermanentGuideAreas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETPERMANENTGUIDEAREAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>* GetSeasonGuideAreas(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETSEASONGUIDEAREAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>* GetUnlockedAndUnfinishedSeasonGuideAreas(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETUNLOCKEDANDUNFINISHEDSEASONGUIDEAREAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>* GetFormalAreas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETFORMALAREAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>* GetFormalDivisionAreas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETFORMALDIVISIONAREAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>* GetWeekChallengeAreas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETWEEKCHALLENGEAREAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>* GetWeekChallengeDivisionAreas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETWEEKCHALLENGEDIVISIONAREAS_OFFSET))(this);
		}

		::RPG::Client::RogueTournAreaDataItem* GetFormalAreaByDifficulty(::RPG::GameCore::RogueTournDifficultyType a1)
		{
			return ((::RPG::Client::RogueTournAreaDataItem*(*)(::PVOID, ::RPG::GameCore::RogueTournDifficultyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETFORMALAREABYDIFFICULTY_OFFSET))(this, a1);
		}

		::System::Boolean IsPermanentGuideAreasPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_ISPERMANENTGUIDEAREASPASSED_OFFSET))(this);
		}

		::System::Boolean IsSeasonGuideAreasPassed(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_ISSEASONGUIDEAREASPASSED_OFFSET))(this, a1);
		}

		::System::UInt32 GetPassedSeasonGuideAreaCount(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETPASSEDSEASONGUIDEAREACOUNT_OFFSET))(this, a1);
		}

		::System::Boolean IsAnyFormalAreaPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_ISANYFORMALAREAPASSED_OFFSET))(this);
		}

		::RPG::Client::RogueTournAreaDataItem* _GetOrCreateDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournAreaDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION__GETORCREATEDATAITEM_OFFSET))(this, a1);
		}

	};
}
