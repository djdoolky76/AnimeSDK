#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PreCharacterStatus.h"
#include "unitysdk/System/Object.h"
class GMPJIHGDDJB;
class HJCHNOIBJCA;
class KJILOMKCDEM;
class MHOICJPNIML;
class POICJJPPMDA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class PreAvatarGrowthMaterialData; }
namespace RPG::Client { class PreReleaseAvatarRosterGroups; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PRERELEASEAVATARHELPER_CLEARDISABLEDPRERELEASEAVATARS_OFFSET UNITYSDK_OFFSET(0x19BE2AC0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_DISABLEALLPRERELEASEAVATARS_OFFSET UNITYSDK_OFFSET(0x19BE2B10)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETORCREATEPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0x19BE2600)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0x19BE2540)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEGROWTHMATERIALDATA_OFFSET UNITYSDK_OFFSET(0x19BE2E00)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEROSTERGROUPS_OFFSET UNITYSDK_OFFSET(0x19BE2E60)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASESTATUS_OFFSET UNITYSDK_OFFSET(0x19BE2770)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASETEAMICONPATH_OFFSET UNITYSDK_OFFSET(0x19BE26F0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__AVATARREPO_OFFSET UNITYSDK_OFFSET(0x19BE23C0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__DISABLE_OFFSET UNITYSDK_OFFSET(0x19BE24C0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__INFOREPO_OFFSET UNITYSDK_OFFSET(0x19BE2340)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__SEEN_OFFSET UNITYSDK_OFFSET(0x19BE2440)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__STATE_OFFSET UNITYSDK_OFFSET(0x19BE2290)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_HASPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0x19BE25A0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_HASUNSEENPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0x19BE2D00)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISADVERTISINGAVATAR_OFFSET UNITYSDK_OFFSET(0x19BE28F0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISCOLLABORATIONAVATAR_OFFSET UNITYSDK_OFFSET(0x19BE2830)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISDISABLEDPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0x19BE2B60)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISPRERELEASEAVATARUNSEEN_OFFSET UNITYSDK_OFFSET(0x19BE2D50)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISUPCOMINGREMASTERAVATAR_OFFSET UNITYSDK_OFFSET(0x19BE2890)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISUPRELEASINGAVATAR_OFFSET UNITYSDK_OFFSET(0x19BE27D0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_RECORDALLPRERELEASEAVATARSSEEN_OFFSET UNITYSDK_OFFSET(0x19BE2C50)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_RECORDPRERELEASEAVATARSEEN_OFFSET UNITYSDK_OFFSET(0x19BE2CA0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_REFRESHPRERELEASESEENRECORDS_OFFSET UNITYSDK_OFFSET(0x19BE2DB0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_REQUESTPRERELEASEDATAREFRESH_OFFSET UNITYSDK_OFFSET(0x19BE29B0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_REQUESTPRERELEASERELICDATAREFRESH_OFFSET UNITYSDK_OFFSET(0x19BE2A00)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_SETDISABLEDPRERELEASEAVATARS_OFFSET UNITYSDK_OFFSET(0x19BE2A60)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_SORTPRERELEASEAVATARSBYREFERENCE_OFFSET UNITYSDK_OFFSET(0x19BE3510)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_SORTPRERELEASEAVATARS_OFFSET UNITYSDK_OFFSET(0x19BE34C0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_TRYGETPRERELEASERELICSETIDS_OFFSET UNITYSDK_OFFSET(0x19BE2660)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_VALIDATEGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x19BE2C00)

namespace RPG::Client
{
	inline static constexpr unsigned int PreReleaseAvatarHelper_TypeDefinitionIndex = 68656;

	class PreReleaseAvatarHelper : public ::System::Object
	{
	public:
		static ::GMPJIHGDDJB* get__State()
		{
			return ((::GMPJIHGDDJB*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GET__STATE_OFFSET))();
		}

		static ::HJCHNOIBJCA* get__InfoRepo()
		{
			return ((::HJCHNOIBJCA*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GET__INFOREPO_OFFSET))();
		}

		static ::POICJJPPMDA* get__AvatarRepo()
		{
			return ((::POICJJPPMDA*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GET__AVATARREPO_OFFSET))();
		}

		static ::KJILOMKCDEM* get__Seen()
		{
			return ((::KJILOMKCDEM*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GET__SEEN_OFFSET))();
		}

		static ::MHOICJPNIML* get__Disable()
		{
			return ((::MHOICJPNIML*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GET__DISABLE_OFFSET))();
		}

		static ::RPG::AvatarSystem::IAvatar* GetPreReleaseAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEAVATAR_OFFSET))(a1);
		}

		static ::System::Boolean HasPreReleaseAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_HASPRERELEASEAVATAR_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetOrCreatePreReleaseAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GETORCREATEPRERELEASEAVATAR_OFFSET))(a1);
		}

		static ::System::Boolean TryGetPreReleaseRelicSetIDs(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_TRYGETPRERELEASERELICSETIDS_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetPreReleaseTeamIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASETEAMICONPATH_OFFSET))(a1);
		}

		static ::RPG::Client::PreCharacterStatus GetPreReleaseStatus(::System::UInt32 a1)
		{
			return ((::RPG::Client::PreCharacterStatus(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASESTATUS_OFFSET))(a1);
		}

		static ::System::Boolean IsUpReleasingAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_ISUPRELEASINGAVATAR_OFFSET))(a1);
		}

		static ::System::Boolean IsCollaborationAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_ISCOLLABORATIONAVATAR_OFFSET))(a1);
		}

		static ::System::Boolean IsUpcomingRemasterAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_ISUPCOMINGREMASTERAVATAR_OFFSET))(a1);
		}

		static ::System::Boolean IsAdvertisingAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_ISADVERTISINGAVATAR_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::Promise* RequestPreReleaseDataRefresh()
		{
			return ((::RPG::Client::Promises::Promise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_REQUESTPRERELEASEDATAREFRESH_OFFSET))();
		}

		static ::RPG::Client::Promises::Promise* RequestPreReleaseRelicDataRefresh(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_REQUESTPRERELEASERELICDATAREFRESH_OFFSET))(a1);
		}

		static ::System::Void SetDisabledPreReleaseAvatars(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_SETDISABLEDPRERELEASEAVATARS_OFFSET))(a1);
		}

		static ::System::Void ClearDisabledPreReleaseAvatars()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_CLEARDISABLEDPRERELEASEAVATARS_OFFSET))();
		}

		static ::System::Void DisableAllPreReleaseAvatars()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_DISABLEALLPRERELEASEAVATARS_OFFSET))();
		}

		static ::System::Boolean IsDisabledPreReleaseAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_ISDISABLEDPRERELEASEAVATAR_OFFSET))(a1);
		}

		static ::System::Void ValidateGrowthTarget()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_VALIDATEGROWTHTARGET_OFFSET))();
		}

		static ::System::Void RecordAllPreReleaseAvatarsSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_RECORDALLPRERELEASEAVATARSSEEN_OFFSET))();
		}

		static ::System::Void RecordPreReleaseAvatarSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_RECORDPRERELEASEAVATARSEEN_OFFSET))(a1);
		}

		static ::System::Boolean HasUnseenPreReleaseAvatar()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_HASUNSEENPRERELEASEAVATAR_OFFSET))();
		}

		static ::System::Boolean IsPreReleaseAvatarUnseen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_ISPRERELEASEAVATARUNSEEN_OFFSET))(a1);
		}

		static ::System::Void RefreshPreReleaseSeenRecords()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_REFRESHPRERELEASESEENRECORDS_OFFSET))();
		}

		static ::RPG::Client::PreAvatarGrowthMaterialData* GetPreReleaseGrowthMaterialData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PreAvatarGrowthMaterialData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEGROWTHMATERIALDATA_OFFSET))(a1);
		}

		static ::RPG::Client::PreReleaseAvatarRosterGroups* GetPreReleaseRosterGroups()
		{
			return ((::RPG::Client::PreReleaseAvatarRosterGroups*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEROSTERGROUPS_OFFSET))();
		}

		static ::System::Void SortPreReleaseAvatars(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_SORTPRERELEASEAVATARS_OFFSET))(a1);
		}

		static ::System::Void SortPreReleaseAvatarsByReference(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_SORTPRERELEASEAVATARSBYREFERENCE_OFFSET))(a1, a2, a3, a4);
		}

	};
}
