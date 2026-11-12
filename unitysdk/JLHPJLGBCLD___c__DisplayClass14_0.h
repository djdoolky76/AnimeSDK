#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLHPJLGBCLD;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }

#define JLHPJLGBCLD___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA747D0)
#define JLHPJLGBCLD___C__DISPLAYCLASS14_0__ENTERSANDBOX_B__0_OFFSET UNITYSDK_OFFSET(0xBA76550)
#define JLHPJLGBCLD___C__DISPLAYCLASS14_0__ENTERSANDBOX_B__1_OFFSET UNITYSDK_OFFSET(0xBA76580)

inline static constexpr unsigned int JLHPJLGBCLD___c__DisplayClass14_0_TypeDefinitionIndex = 77030;

	class JLHPJLGBCLD___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* enteringPromise; // 0x10
		::System::Action* onLoadingCovered; // 0x18
		::JLHPJLGBCLD* __4__this; // 0x20
		::System::Action* onSandboxReady; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _EnterSandbox_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS14_0__ENTERSANDBOX_B__0_OFFSET))(this);
		}

		::System::Void _EnterSandbox_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS14_0__ENTERSANDBOX_B__1_OFFSET))(this, a1);
		}

	};
