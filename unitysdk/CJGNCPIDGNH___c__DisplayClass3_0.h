#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJGNCPIDGNH;
class MBJOEPEGLII;
namespace RPG::Client { class BaseLobby; }
namespace System { class Action; }
namespace System { class Exception; }

#define CJGNCPIDGNH___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD20BF70)
#define CJGNCPIDGNH___C__DISPLAYCLASS3_0___DOCREATELOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xD2115A0)
#define CJGNCPIDGNH___C__DISPLAYCLASS3_0___DOCREATELOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xD211740)

inline static constexpr unsigned int CJGNCPIDGNH___c__DisplayClass3_0_TypeDefinitionIndex = 80272;

	class CJGNCPIDGNH___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::CJGNCPIDGNH* __4__this; // 0x10
		::MBJOEPEGLII* session; // 0x18
		::System::Action* __9__1; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::BaseLobby* __DoCreateLobby_b__0(::System::Exception* a1)
		{
			return ((::RPG::Client::BaseLobby*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS3_0___DOCREATELOBBY_B__0_OFFSET))(this, a1);
		}

		::System::Void __DoCreateLobby_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS3_0___DOCREATELOBBY_B__1_OFFSET))(this, a1);
		}

	};
