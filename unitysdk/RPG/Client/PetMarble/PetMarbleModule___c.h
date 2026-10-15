#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCHICFMEANN.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDADD410)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDADD450)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSGAME_B__25_0_OFFSET UNITYSDK_OFFSET(0xDADD460)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSGAME_B__25_1_OFFSET UNITYSDK_OFFSET(0xDADD470)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSPVEGAME_B__26_0_OFFSET UNITYSDK_OFFSET(0xDADD4A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSPVEGAME_B__26_1_OFFSET UNITYSDK_OFFSET(0xDADD480)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSPVEGAME_B__26_2_OFFSET UNITYSDK_OFFSET(0xDADD490)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleModule___c_TypeDefinitionIndex = 74719;

	class PetMarbleModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DCHICFMEANN, ::System::Boolean>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::DCHICFMEANN, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.PetMarble", "<>c")->GetStaticField(0x18230);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PetMarble", "<>c")->GetStaticField(0x18238);
		}

		static ::System::Func_2<::DCHICFMEANN, ::System::Boolean>** StaticGet___9__26_2()
		{
			return (::System::Func_2<::DCHICFMEANN, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.PetMarble", "<>c")->GetStaticField(0x18240);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.PetMarble", "<>c")->GetStaticField(0x18248);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.PetMarble", "<>c")->GetStaticField(0x18250);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.PetMarble", "<>c")->GetStaticField(0x18258);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _StartMarbleCoopBossGame_b__25_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSGAME_B__25_0_OFFSET))(this, a1);
		}

		::System::Boolean _StartMarbleCoopBossGame_b__25_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSGAME_B__25_1_OFFSET))(this, a1);
		}

		::System::Boolean _StartMarbleCoopBossPveGame_b__26_1(::DCHICFMEANN a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCHICFMEANN))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSPVEGAME_B__26_1_OFFSET))(this, a1);
		}

		::System::Boolean _StartMarbleCoopBossPveGame_b__26_2(::DCHICFMEANN a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCHICFMEANN))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSPVEGAME_B__26_2_OFFSET))(this, a1);
		}

		::System::Boolean _StartMarbleCoopBossPveGame_b__26_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__STARTMARBLECOOPBOSSPVEGAME_B__26_0_OFFSET))(this, a1);
		}

	};
}
