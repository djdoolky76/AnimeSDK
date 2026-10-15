#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class FMHEHLIFNGJ;
class IILCHDOMOME;
namespace RPG::Client { class LobbyModule; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define IILCHDOMOME___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1643AF30)
#define IILCHDOMOME___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x1643C280)
#define IILCHDOMOME___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__2_OFFSET UNITYSDK_OFFSET(0x1643C4B0)
#define IILCHDOMOME___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_G___CREATELOBBY_1_OFFSET UNITYSDK_OFFSET(0x1643C360)

inline static constexpr unsigned int IILCHDOMOME___c__DisplayClass3_0_TypeDefinitionIndex = 66044;

	class IILCHDOMOME___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::IILCHDOMOME* __4__this; // 0x18
		::System::Func_1<::FMHEHLIFNGJ*>* extInfoGetter; // 0x20
		::RPG::Client::LobbyModule* lobbyModule; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCHDOMOME___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _TryCreateAndOpen_b__0(::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL>))((::PBYTE)hIl2Cpp + IILCHDOMOME___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__0_OFFSET))(this, a1);
		}

		::System::Void _TryCreateAndOpen_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCHDOMOME___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__2_OFFSET))(this);
		}

		::System::Void _TryCreateAndOpen_g___CreateLobby_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCHDOMOME___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_G___CREATELOBBY_1_OFFSET))(this);
		}

	};
