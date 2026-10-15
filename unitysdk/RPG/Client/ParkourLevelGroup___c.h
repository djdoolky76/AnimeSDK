#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ParkourLevel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PARKOURLEVELGROUP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA86B70)
#define RPG_CLIENT_PARKOURLEVELGROUP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA86BB0)
#define RPG_CLIENT_PARKOURLEVELGROUP___C__GET_HASUNLOCKED_B__16_0_OFFSET UNITYSDK_OFFSET(0xDA86BC0)
#define RPG_CLIENT_PARKOURLEVELGROUP___C__GET_ISNEW_B__18_0_OFFSET UNITYSDK_OFFSET(0xDA86BF0)

namespace RPG::Client
{
	class ParkourLevelGroup___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11410);
		}

		static ::System::Func_2<::RPG::Client::ParkourLevel*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::ParkourLevel*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11418);
		}

		static ::System::Func_2<::RPG::Client::ParkourLevel*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::ParkourLevel*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_HasUnlocked_b__16_0(::RPG::Client::ParkourLevel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP___C__GET_HASUNLOCKED_B__16_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsNew_b__18_0(::RPG::Client::ParkourLevel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP___C__GET_ISNEW_B__18_0_OFFSET))(this, a1);
		}

	};
}
