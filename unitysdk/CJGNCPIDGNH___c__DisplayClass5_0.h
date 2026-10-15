#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJGNCPIDGNH;
class MBJOEPEGLII;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Exception; }

#define CJGNCPIDGNH___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD20C590)
#define CJGNCPIDGNH___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xD211950)
#define CJGNCPIDGNH___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xD211A00)
#define CJGNCPIDGNH___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__2_OFFSET UNITYSDK_OFFSET(0xD211CC0)

inline static constexpr unsigned int CJGNCPIDGNH___c__DisplayClass5_0_TypeDefinitionIndex = 80274;

	class CJGNCPIDGNH___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MBJOEPEGLII* session; // 0x18
		::CJGNCPIDGNH* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __DoJoinLobby_b__0(::RPG::Client::BaseLobby* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__0_OFFSET))(this, a1);
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
