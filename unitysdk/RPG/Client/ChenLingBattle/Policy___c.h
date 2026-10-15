#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHENLINGBATTLE_POLICY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCA4FE10)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCA4FE50)
#define RPG_CLIENT_CHENLINGBATTLE_POLICY___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0xCA4FE60)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Policy___c_TypeDefinitionIndex = 76370;

	class Policy___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x6EF90);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::ChenLingBattle::CardConfig*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ChenLingBattle::CardConfig*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>c")->GetStaticField(0x6EF98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattle::CardConfig* __ctor_b__1_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingBattle::CardConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_POLICY___C___CTOR_B__1_0_OFFSET))(this, a1);
		}

	};
}
