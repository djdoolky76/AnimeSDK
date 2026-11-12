#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKCLHMNONOD.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5096A0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD5096D0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTMODULE___C___REQUESTACTIVITYDATA_B__114_0_OFFSET UNITYSDK_OFFSET(0xD5096E0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTMODULE___C___SETUPUPGRADETREE_B__120_0_OFFSET UNITYSDK_OFFSET(0xD509750)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertModule___c_TypeDefinitionIndex = 77052;

	class ComicDessertModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::AKCLHMNONOD>** StaticGet___9__120_0()
		{
			return (::System::Func_2<::System::UInt32, ::AKCLHMNONOD>**)UnitySDK::FromName("RPG.Client.ComicDessert", "<>c")->GetStaticField(0x18BF0);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__114_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.ComicDessert", "<>c")->GetStaticField(0x18BF8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ComicDessert", "<>c")->GetStaticField(0x18C00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Void __RequestActivityData_b__114_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTMODULE___C___REQUESTACTIVITYDATA_B__114_0_OFFSET))(this, a1);
		}

		::AKCLHMNONOD __SetUpUpgradeTree_b__120_0(::System::UInt32 a1)
		{
			return ((::AKCLHMNONOD(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTMODULE___C___SETUPUPGRADETREE_B__120_0_OFFSET))(this, a1);
		}

	};
}
