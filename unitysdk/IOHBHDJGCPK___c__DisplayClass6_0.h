#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIDKLLMAIGP;
class IOHBHDJGCPK;
class PIGILFCALBA;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class LittleGameLevelConfig; }

#define IOHBHDJGCPK___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB837310)
#define IOHBHDJGCPK___C__DISPLAYCLASS6_0__RETRYLEVEL_B__0_OFFSET UNITYSDK_OFFSET(0xB837320)
#define IOHBHDJGCPK___C__DISPLAYCLASS6_0__RETRYLEVEL_B__1_OFFSET UNITYSDK_OFFSET(0xB837400)

inline static constexpr unsigned int IOHBHDJGCPK___c__DisplayClass6_0_TypeDefinitionIndex = 77131;

	class IOHBHDJGCPK___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::IOHBHDJGCPK* __4__this; // 0x10
		::RPG::GameCore::LittleGameLevelConfig* levelConfig; // 0x18
		::System::UInt32 levelId; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _RetryLevel_b__0(::PIGILFCALBA* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::PIGILFCALBA*))((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C__DISPLAYCLASS6_0__RETRYLEVEL_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _RetryLevel_b__1(::CIDKLLMAIGP* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::CIDKLLMAIGP*))((::PBYTE)hIl2Cpp + IOHBHDJGCPK___C__DISPLAYCLASS6_0__RETRYLEVEL_B__1_OFFSET))(this, a1);
		}

	};
