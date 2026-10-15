#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class CJGNCPIDGNH;
class FMHEHLIFNGJ;
class MBJOEPEGLII;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define CJGNCPIDGNH___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD20C380)
#define CJGNCPIDGNH___C__DISPLAYCLASS4_0__JOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xD2117E0)
#define CJGNCPIDGNH___C__DISPLAYCLASS4_0__JOINLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xD211920)

	class CJGNCPIDGNH___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::FMHEHLIFNGJ* extInfo; // 0x10
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__1; // 0x18
		::MBJOEPEGLII* session; // 0x20
		::CJGNCPIDGNH* __4__this; // 0x28
		::System::UInt64 lobbyID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _JoinLobby_b__0(::System::ValueTuple a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS4_0__JOINLOBBY_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _JoinLobby_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS4_0__JOINLOBBY_B__1_OFFSET))(this);
		}

	};
