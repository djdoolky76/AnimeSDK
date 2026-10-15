#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define PGBLBOJBDGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9E8B70)
#define PGBLBOJBDGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E8BB0)
#define PGBLBOJBDGG___C___CTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1C9E8BC0)
#define PGBLBOJBDGG___C___CTOR_B__23_1_OFFSET UNITYSDK_OFFSET(0x1C9E8BF0)

inline static constexpr unsigned int PGBLBOJBDGG___c_TypeDefinitionIndex = 42584;

	class PGBLBOJBDGG___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>** StaticGet___9__23_1()
		{
			return (::System::Func_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D060);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D068);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGBLBOJBDGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBLBOJBDGG___C_CTOR_OFFSET))(this);
		}

		::Entitas::IAERC* __ctor_b__23_0(::Entitas::IEntity* a1)
		{
			return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + PGBLBOJBDGG___C___CTOR_B__23_0_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ElfRestaurantGameEntity* __ctor_b__23_1()
		{
			return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBLBOJBDGG___C___CTOR_B__23_1_OFFSET))(this);
		}

	};
