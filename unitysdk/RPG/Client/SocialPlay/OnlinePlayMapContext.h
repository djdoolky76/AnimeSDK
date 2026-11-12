#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGJOIILGIHK;
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::NavMap { class IMainTab; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::SocialPlay { class OnlinePlayMapContext; }
namespace RPG::Client::SocialPlay { class SocialPlayMapInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xEB55AD0)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xEB55AC0)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETCURRENTSUBTAB_OFFSET UNITYSDK_OFFSET(0xEB55E60)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETMAINTABLIST_OFFSET UNITYSDK_OFFSET(0xEB55BD0)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETMAPNAMEBYSUBTAB_OFFSET UNITYSDK_OFFSET(0xEB56640)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETOWNERPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xEB55B70)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETPLAYERBRIEFDISPLAYDATALISTBYMAINTAB_OFFSET UNITYSDK_OFFSET(0xEB56DA0)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT__RESOLVEMAPINFOBYSUBTAB_OFFSET UNITYSDK_OFFSET(0xEB57430)

namespace RPG::Client::SocialPlay
{
	inline static constexpr unsigned int OnlinePlayMapContext_TypeDefinitionIndex = 76646;

	class OnlinePlayMapContext : public ::System::Object
	{
	public:
		::AGJOIILGIHK* _Owner; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::SocialPlay::SocialPlayMapInfo*>* _MapInfoList; // 0x18
		::System::Collections::Generic::IList_1<::RPG::Client::NavMap::SubTabData*>* _SubTabList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SocialPlay::OnlinePlayMapContext* Create(::AGJOIILGIHK* a1, ::System::Collections::Generic::IList_1<::RPG::Client::NavMap::SubTabData*>* a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::SocialPlay::SocialPlayMapInfo*>* a3)
		{
			return ((::RPG::Client::SocialPlay::OnlinePlayMapContext*(*)(::AGJOIILGIHK*, ::System::Collections::Generic::IList_1<::RPG::Client::NavMap::SubTabData*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::SocialPlay::SocialPlayMapInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_CREATE_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::PlayerBriefDisplayData* GetOwnerPlayerBriefDisplayData()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETOWNERPLAYERBRIEFDISPLAYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::NavMap::IMainTab*>* GetMainTabList()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::NavMap::IMainTab*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETMAINTABLIST_OFFSET))(this);
		}

		::RPG::Client::NavMap::SubTabData* GetCurrentSubTab()
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETCURRENTSUBTAB_OFFSET))(this);
		}

		::System::String* GetMapNameBySubTab(::RPG::Client::NavMap::SubTabData* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETMAPNAMEBYSUBTAB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>* GetPlayerBriefDisplayDataListByMainTab(::RPG::Client::NavMap::IMainTab* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>*(*)(::PVOID, ::RPG::Client::NavMap::IMainTab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT_GETPLAYERBRIEFDISPLAYDATALISTBYMAINTAB_OFFSET))(this, a1);
		}

		::RPG::Client::SocialPlay::SocialPlayMapInfo* _ResolveMapInfoBySubTab(::RPG::Client::NavMap::SubTabData* a1)
		{
			return ((::RPG::Client::SocialPlay::SocialPlayMapInfo*(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT__RESOLVEMAPINFOBYSUBTAB_OFFSET))(this, a1);
		}

	};
}
