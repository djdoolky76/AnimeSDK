#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class KMDEHNNGIDD;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define KMDEHNNGIDD___C__DISPLAYCLASS25_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB542030)
#define KMDEHNNGIDD___C__DISPLAYCLASS25_0__CREATELOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xB543190)
#define KMDEHNNGIDD___C__DISPLAYCLASS25_0__CREATELOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xB5432C0)

inline static constexpr unsigned int KMDEHNNGIDD___c__DisplayClass25_0_TypeDefinitionIndex = 63056;

	class KMDEHNNGIDD___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::KMDEHNNGIDD* __4__this; // 0x10
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__1; // 0x18
		::System::UInt32 fieldID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDEHNNGIDD___C__DISPLAYCLASS25_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CreateLobby_b__0(::System::ValueTuple a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + KMDEHNNGIDD___C__DISPLAYCLASS25_0__CREATELOBBY_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _CreateLobby_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDEHNNGIDD___C__DISPLAYCLASS25_0__CREATELOBBY_B__1_OFFSET))(this);
		}

	};
