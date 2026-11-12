#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::NavMap { class IMainTab; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB57A90)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xEB57AD0)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYMAPCONTEXT___C__GETMAINTABLIST_B__3_0_OFFSET UNITYSDK_OFFSET(0xEB57AE0)

namespace RPG::Client::SocialPlay
{
	inline static constexpr unsigned int OnlinePlayMapContext___c_TypeDefinitionIndex = 76647;

	class OnlinePlayMapContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::NavMap::SubTabData*, ::RPG::Client::NavMap::IMainTab*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::NavMap::SubTabData*, ::RPG::Client::NavMap::IMainTab*>**)UnitySDK::FromName("RPG.Client.SocialPlay", "<>c")->GetStaticField(0x73A10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.SocialPlay", "<>c")->GetStaticField(0x73A18);
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
