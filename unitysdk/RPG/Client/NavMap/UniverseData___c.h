#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::NavMap { class WorldData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_NAVMAP_UNIVERSEDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD97B7D0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD97B810)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA___C__GET_SHOWWORLDS_B__43_0_OFFSET UNITYSDK_OFFSET(0xD97B820)

namespace RPG::Client::NavMap
{
	class UniverseData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.NavMap", "<>c")->GetStaticField(0x6F290);
		}

		static ::System::Func_2<::RPG::Client::NavMap::WorldData*, ::System::Boolean>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::RPG::Client::NavMap::WorldData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.NavMap", "<>c")->GetStaticField(0x6F298);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ShowWorlds_b__43_0(::RPG::Client::NavMap::WorldData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::WorldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA___C__GET_SHOWWORLDS_B__43_0_OFFSET))(this, a1);
		}

	};
}
