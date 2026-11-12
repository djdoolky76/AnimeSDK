#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client { class MapTeleportData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE3CD480)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE3CD4B0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__GETTELEPORTABLEICONS_B__2_0_OFFSET UNITYSDK_OFFSET(0xE3CD4C0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__GETTELEPORTABLEICONS_B__2_1_OFFSET UNITYSDK_OFFSET(0xE3CD4E0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int CartographyBaseData___c_TypeDefinitionIndex = 76658;

	class CartographyBaseData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MapTeleportData*, ::System::Boolean>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::Client::MapTeleportData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.NavMap", "<>c")->GetStaticField(0x9900);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.NavMap", "<>c")->GetStaticField(0x9908);
		}

		static ::System::Func_2<::RPG::Client::MapMappingInfoData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::MapMappingInfoData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.NavMap", "<>c")->GetStaticField(0x9910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTeleportableIcons_b__2_0(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__GETTELEPORTABLEICONS_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetTeleportableIcons_b__2_1(::RPG::Client::MapTeleportData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapTeleportData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__GETTELEPORTABLEICONS_B__2_1_OFFSET))(this, a1);
		}

	};
}
