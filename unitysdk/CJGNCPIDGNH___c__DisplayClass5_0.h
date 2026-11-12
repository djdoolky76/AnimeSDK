#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJGNCPIDGNH;
class MBJOEPEGLII;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CJGNCPIDGNH___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB82190)
#define CJGNCPIDGNH___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xDB87500)
#define CJGNCPIDGNH___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xDB875B0)
#define CJGNCPIDGNH___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__2_OFFSET UNITYSDK_OFFSET(0xDB87870)

inline static constexpr unsigned int CJGNCPIDGNH___c__DisplayClass5_0_TypeDefinitionIndex = 83051;

	class CJGNCPIDGNH___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MBJOEPEGLII* session; // 0x10
		::CJGNCPIDGNH* __4__this; // 0x18
		::System::Action_1<::System::Exception*>* __9__2; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* __DoJoinLobby_b__0(::RPG::Client::BaseLobby* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__0_OFFSET))(this, a1);
		}

		::System::Void __DoJoinLobby_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__1_OFFSET))(this, a1);
		}

		::System::Void __DoJoinLobby_b__2(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__2_OFFSET))(this, a1);
		}

	};
