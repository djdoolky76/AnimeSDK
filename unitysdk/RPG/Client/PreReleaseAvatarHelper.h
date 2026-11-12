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

#define RPG_CLIENT_PRERELEASEAVATARHELPER_CLEARDISABLEDPRERELEASEAVATARS_OFFSET UNITYSDK_OFFSET(0xE6A47D0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_DISABLEALLPRERELEASEAVATARS_OFFSET UNITYSDK_OFFSET(0xE6A4820)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETORCREATEPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0xE6A4310)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0xE6A4250)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEGROWTHMATERIALDATA_OFFSET UNITYSDK_OFFSET(0xE6A4B10)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEROSTERGROUPS_OFFSET UNITYSDK_OFFSET(0xE6A4B70)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASESTATUS_OFFSET UNITYSDK_OFFSET(0xE6A4480)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASETEAMICONPATH_OFFSET UNITYSDK_OFFSET(0xE6A4400)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__AVATARREPO_OFFSET UNITYSDK_OFFSET(0xE6A40D0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__DISABLE_OFFSET UNITYSDK_OFFSET(0xE6A41D0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__INFOREPO_OFFSET UNITYSDK_OFFSET(0xE6A4050)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__SEEN_OFFSET UNITYSDK_OFFSET(0xE6A4150)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__STATE_OFFSET UNITYSDK_OFFSET(0xE6A3FA0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_HASPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0xE6A42B0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_HASUNSEENPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0xE6A4A10)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISADVERTISINGAVATAR_OFFSET UNITYSDK_OFFSET(0xE6A4600)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISCOLLABORATIONAVATAR_OFFSET UNITYSDK_OFFSET(0xE6A4540)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISDISABLEDPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0xE6A4870)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISPRERELEASEAVATARUNSEEN_OFFSET UNITYSDK_OFFSET(0xE6A4A60)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISUPCOMINGREMASTERAVATAR_OFFSET UNITYSDK_OFFSET(0xE6A45A0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISUPRELEASINGAVATAR_OFFSET UNITYSDK_OFFSET(0xE6A44E0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_RECORDALLPRERELEASEAVATARSSEEN_OFFSET UNITYSDK_OFFSET(0xE6A4960)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_RECORDPRERELEASEAVATARSEEN_OFFSET UNITYSDK_OFFSET(0xE6A49B0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_REFRESHPRERELEASESEENRECORDS_OFFSET UNITYSDK_OFFSET(0xE6A4AC0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_REQUESTPRERELEASEDATAREFRESH_OFFSET UNITYSDK_OFFSET(0xE6A46C0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_REQUESTPRERELEASERELICDATAREFRESH_OFFSET UNITYSDK_OFFSET(0xE6A4710)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_SETDISABLEDPRERELEASEAVATARS_OFFSET UNITYSDK_OFFSET(0xE6A4770)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_SORTPRERELEASEAVATARSBYREFERENCE_OFFSET UNITYSDK_OFFSET(0xE6A5220)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_SORTPRERELEASEAVATARS_OFFSET UNITYSDK_OFFSET(0xE6A51D0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_TRYGETPRERELEASERELICSETIDS_OFFSET UNITYSDK_OFFSET(0xE6A4370)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_VALIDATEGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0xE6A4910)

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
