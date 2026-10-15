#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::NavMap { class IMainTab; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE0EDC90)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE0EDCD0)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT___C__GETMAINTABLIST_B__3_0_OFFSET UNITYSDK_OFFSET(0xE0EDCE0)

namespace RPG::Client::SocialPlay
{
	class OnlinePlayMapContext___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.SocialPlay", "<>c")->GetStaticField(0x6F190);
		}

		static ::System::Func_2<::RPG::Client::NavMap::SubTabData*, ::RPG::Client::NavMap::IMainTab*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::NavMap::SubTabData*, ::RPG::Client::NavMap::IMainTab*>**)UnitySDK::FromName("RPG.Client.SocialPlay", "<>c")->GetStaticField(0x6F198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::NavMap::IMainTab* _GetMainTabList_b__3_0(::RPG::Client::NavMap::SubTabData* a1)
		{
			return ((::RPG::Client::NavMap::IMainTab*(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT___C__GETMAINTABLIST_B__3_0_OFFSET))(this, a1);
		}

	};
}
