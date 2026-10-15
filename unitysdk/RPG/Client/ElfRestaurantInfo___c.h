#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ELFRESTAURANTINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCDC0B50)
#define RPG_CLIENT_ELFRESTAURANTINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCDC0B90)
#define RPG_CLIENT_ELFRESTAURANTINFO___C__TRYGETMANAGESTATISTICS_B__25_0_OFFSET UNITYSDK_OFFSET(0xCDC0BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantInfo___c_TypeDefinitionIndex = 63740;

	class ElfRestaurantInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3AFB0);
		}

		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3AFB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetManageStatistics_b__25_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO___C__TRYGETMANAGESTATISTICS_B__25_0_OFFSET))(this, a1);
		}

	};
}
