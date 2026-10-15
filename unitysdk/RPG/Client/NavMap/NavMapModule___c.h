#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class NavMapSubTabRow; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_NAVMAP_NAVMAPMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD963D20)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD963D50)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE___C___INITTABCONTAINSUBTABS_B__60_0_OFFSET UNITYSDK_OFFSET(0xD963D60)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int NavMapModule___c_TypeDefinitionIndex = 74621;

	class NavMapModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.NavMap", "<>c")->GetStaticField(0x6F240);
		}

		static ::System::Comparison_1<::RPG::GameCore::NavMapSubTabRow*>** StaticGet___9__60_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::NavMapSubTabRow*>**)UnitySDK::FromName("RPG.Client.NavMap", "<>c")->GetStaticField(0x6F248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __InitTabContainSubTabs_b__60_0(::RPG::GameCore::NavMapSubTabRow* a1, ::RPG::GameCore::NavMapSubTabRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::NavMapSubTabRow*, ::RPG::GameCore::NavMapSubTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE___C___INITTABCONTAINSUBTABS_B__60_0_OFFSET))(this, a1, a2);
		}

	};
}
