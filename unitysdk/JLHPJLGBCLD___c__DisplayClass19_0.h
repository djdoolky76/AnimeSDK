#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAIGLLEMOII;
class JLHPJLGBCLD;
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

#define JLHPJLGBCLD___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A093A50)
#define JLHPJLGBCLD___C__DISPLAYCLASS19_0___COMPLETESANDBOXENTER_B__0_OFFSET UNITYSDK_OFFSET(0x1A093A60)
#define JLHPJLGBCLD___C__DISPLAYCLASS19_0___COMPLETESANDBOXENTER_B__1_OFFSET UNITYSDK_OFFSET(0x1A093B60)

inline static constexpr unsigned int JLHPJLGBCLD___c__DisplayClass19_0_TypeDefinitionIndex = 77032;

	class JLHPJLGBCLD___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::JLHPJLGBCLD* __4__this; // 0x10
		::RPG::Client::Promises::Promise* enteringPromise; // 0x18
		::EAIGLLEMOII* lease; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Void __CompleteSandboxEnter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS19_0___COMPLETESANDBOXENTER_B__0_OFFSET))(this);
		}

		::System::Void __CompleteSandboxEnter_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS19_0___COMPLETESANDBOXENTER_B__1_OFFSET))(this, a1);
		}

	};
