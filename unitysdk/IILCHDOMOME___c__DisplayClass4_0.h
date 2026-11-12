#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class FMHEHLIFNGJ;
class IILCHDOMOME;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class LobbyModule; }
namespace System { template <typename T> class Func_1; }

#define IILCHDOMOME___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x174033C0)
#define IILCHDOMOME___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x17404650)
#define IILCHDOMOME___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_B__2_OFFSET UNITYSDK_OFFSET(0x17404670)
#define IILCHDOMOME___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_B__3_OFFSET UNITYSDK_OFFSET(0x174046B0)
#define IILCHDOMOME___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_G__ONFETCHEDLOBBY_1_OFFSET UNITYSDK_OFFSET(0x174033D0)

inline static constexpr unsigned int IILCHDOMOME___c__DisplayClass4_0_TypeDefinitionIndex = 67977;

	class IILCHDOMOME___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::LobbyModule* lobbyModule; // 0x10
		::IILCHDOMOME* __4__this; // 0x18
		::System::Func_1<::FMHEHLIFNGJ*>* extInfoGetter; // 0x20
		::System::UInt64 lobbyID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCHDOMOME___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _TryJoinAndOpen_b__0(::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL>))((::PBYTE)hIl2Cpp + IILCHDOMOME___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_B__0_OFFSET))(this, a1);
		}

		::System::Void _TryJoinAndOpen_g__OnFetchedLobby_1(::RPG::Client::BaseLobby* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + IILCHDOMOME___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_G__ONFETCHEDLOBBY_1_OFFSET))(this, a1);
		}

		::System::Void _TryJoinAndOpen_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCHDOMOME___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_B__2_OFFSET))(this);
		}

		::System::Void _TryJoinAndOpen_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCHDOMOME___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_B__3_OFFSET))(this);
		}

	};
