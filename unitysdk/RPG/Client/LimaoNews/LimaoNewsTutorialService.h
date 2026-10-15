#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIFMNJNCIEF;
class GKEEBJNJDMP;

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_CCTOR_OFFSET UNITYSDK_OFFSET(0xD3EC220)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_CTOR_1_OFFSET UNITYSDK_OFFSET(0xD3EC040)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0xD3EC030)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3EBFF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_GET_FIRSTENTEREDMAINPAGEFLAG_OFFSET UNITYSDK_OFFSET(0xD3EC200)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_ISNEEDSHOWEVENTGUIDE_OFFSET UNITYSDK_OFFSET(0xD3EC0A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_REFRESHFIRSTENTEREDMAINPAGEFLAG_OFFSET UNITYSDK_OFFSET(0xD3EC050)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_SET_FIRSTENTEREDMAINPAGEFLAG_OFFSET UNITYSDK_OFFSET(0xD3EC210)

namespace RPG::Client::LimaoNews
{
	class LimaoNewsTutorialService : public ::System::Object
	{
	public:
		::GIFMNJNCIEF* _LimaoNewsConditionService; // 0x10
		::GKEEBJNJDMP* _LimaoNewsLimaoService; // 0x18
		::System::Boolean _FirstEnteredMainPageFlag_k__BackingField; // 0x20
		static ::System::UInt32* StaticGet_TutorialForumNodeID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.LimaoNews", "LimaoNewsTutorialService")->GetStaticField(0x7F80);
		}

		static ::System::UInt32* StaticGet_TutorialPostID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.LimaoNews", "LimaoNewsTutorialService")->GetStaticField(0x7F84);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIFMNJNCIEF* a1, ::GKEEBJNJDMP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GIFMNJNCIEF*, ::GKEEBJNJDMP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshFirstEnteredMainPageFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_REFRESHFIRSTENTEREDMAINPAGEFLAG_OFFSET))(this, a1);
		}

		::System::Boolean IsNeedShowEventGuide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_ISNEEDSHOWEVENTGUIDE_OFFSET))(this);
		}

		::System::Boolean get_FirstEnteredMainPageFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_GET_FIRSTENTEREDMAINPAGEFLAG_OFFSET))(this);
		}

		::System::Void set_FirstEnteredMainPageFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_SET_FIRSTENTEREDMAINPAGEFLAG_OFFSET))(this, a1);
		}

	};
}
