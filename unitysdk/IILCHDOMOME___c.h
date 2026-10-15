#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseLobby; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IILCHDOMOME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1643C200)
#define IILCHDOMOME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1643C240)
#define IILCHDOMOME___C___BEGINJOINLOBBY_B__7_0_OFFSET UNITYSDK_OFFSET(0x1643C250)

inline static constexpr unsigned int IILCHDOMOME___c_TypeDefinitionIndex = 66043;

	class IILCHDOMOME___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::BaseLobby*, ::RPG::Client::BaseLobby*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::BaseLobby*, ::RPG::Client::BaseLobby*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FFA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FFA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IILCHDOMOME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCHDOMOME___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::BaseLobby* __BeginJoinLobby_b__7_0(::RPG::Client::BaseLobby* a1)
		{
			return ((::RPG::Client::BaseLobby*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + IILCHDOMOME___C___BEGINJOINLOBBY_B__7_0_OFFSET))(this, a1);
		}

	};
