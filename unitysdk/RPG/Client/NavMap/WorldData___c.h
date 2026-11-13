#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::NavMap { class IMainTab; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_NAVMAP_WORLDDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8C5960)
#define RPG_CLIENT_NAVMAP_WORLDDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C59A0)
#define RPG_CLIENT_NAVMAP_WORLDDATA___C__GET_SHOWTABS_B__24_0_OFFSET UNITYSDK_OFFSET(0x1B8C59B0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int WorldData___c_TypeDefinitionIndex = 76793;

	class WorldData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::NavMap::IMainTab*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::RPG::Client::NavMap::IMainTab*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.NavMap", "<>c")->GetStaticField(0xE270);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.NavMap", "<>c")->GetStaticField(0xE278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ShowTabs_b__24_0(::RPG::Client::NavMap::IMainTab* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::IMainTab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA___C__GET_SHOWTABS_B__24_0_OFFSET))(this, a1);
		}

	};
}
