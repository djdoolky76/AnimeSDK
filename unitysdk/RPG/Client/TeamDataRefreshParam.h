#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TeamDataRefreshMask.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TeamDataRefreshParam; }

#define RPG_CLIENT_TEAMDATAREFRESHPARAM_ADDMASK_OFFSET UNITYSDK_OFFSET(0xE1CFEF0)
#define RPG_CLIENT_TEAMDATAREFRESHPARAM_CCTOR_OFFSET UNITYSDK_OFFSET(0xE1CFF40)
#define RPG_CLIENT_TEAMDATAREFRESHPARAM_CHECKMASK_OFFSET UNITYSDK_OFFSET(0xE1CFEA0)
#define RPG_CLIENT_TEAMDATAREFRESHPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xE1CFE30)
#define RPG_CLIENT_TEAMDATAREFRESHPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xE1CFE90)

namespace RPG::Client
{
	class TeamDataRefreshParam : public ::System::Object
	{
	public:
		::RPG::Client::TeamDataRefreshMask Mask; // 0x10
		static ::RPG::Client::TeamDataRefreshParam** StaticGet_Full()
		{
			return (::RPG::Client::TeamDataRefreshParam**)UnitySDK::FromName("RPG.Client", "TeamDataRefreshParam")->GetStaticField(0xFC00);
		}

		static ::RPG::Client::TeamDataRefreshParam** StaticGet_MemberList()
		{
			return (::RPG::Client::TeamDataRefreshParam**)UnitySDK::FromName("RPG.Client", "TeamDataRefreshParam")->GetStaticField(0xFC08);
		}

		static ::RPG::Client::TeamDataRefreshParam** StaticGet_Default()
		{
			return (::RPG::Client::TeamDataRefreshParam**)UnitySDK::FromName("RPG.Client", "TeamDataRefreshParam")->GetStaticField(0xFC10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATAREFRESHPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATAREFRESHPARAM_CCTOR_OFFSET))();
		}

		static ::RPG::Client::TeamDataRefreshParam* Create(::RPG::Client::TeamDataRefreshMask a1)
		{
			return ((::RPG::Client::TeamDataRefreshParam*(*)(::RPG::Client::TeamDataRefreshMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATAREFRESHPARAM_CREATE_OFFSET))(a1);
		}

		::System::Boolean CheckMask(::RPG::Client::TeamDataRefreshMask a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamDataRefreshMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATAREFRESHPARAM_CHECKMASK_OFFSET))(this, a1);
		}

		::System::Void AddMask(::RPG::Client::TeamDataRefreshMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamDataRefreshMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATAREFRESHPARAM_ADDMASK_OFFSET))(this, a1);
		}

	};
}
