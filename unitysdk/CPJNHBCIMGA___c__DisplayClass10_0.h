#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPJNHBCIMGA;
class OCHJEBJLIJP;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Object; }

#define CPJNHBCIMGA___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD8320)
#define CPJNHBCIMGA___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__0_OFFSET UNITYSDK_OFFSET(0xDCD8420)
#define CPJNHBCIMGA___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__1_OFFSET UNITYSDK_OFFSET(0xDCD8590)
#define CPJNHBCIMGA___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__2_OFFSET UNITYSDK_OFFSET(0xDCD85F0)
#define CPJNHBCIMGA___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__3_OFFSET UNITYSDK_OFFSET(0xDCD8730)
#define CPJNHBCIMGA___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__5_OFFSET UNITYSDK_OFFSET(0xDCD8750)

inline static constexpr unsigned int CPJNHBCIMGA___c__DisplayClass10_0_TypeDefinitionIndex = 77727;

	class CPJNHBCIMGA___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::OCHJEBJLIJP* nextPhase; // 0x18
		::CPJNHBCIMGA* __4__this; // 0x20
		::System::Object* enterParam; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJNHBCIMGA___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __ExecuteSwitch_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJNHBCIMGA___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __ExecuteSwitch_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJNHBCIMGA___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__1_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __ExecuteSwitch_b__2()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJNHBCIMGA___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__2_OFFSET))(this);
		}

		::System::Void __ExecuteSwitch_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJNHBCIMGA___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__3_OFFSET))(this);
		}

		::System::Void __ExecuteSwitch_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJNHBCIMGA___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__5_OFFSET))(this);
		}

	};
