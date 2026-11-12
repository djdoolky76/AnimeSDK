#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Object.h"
class JLHPJLGBCLD;
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

#define JLHPJLGBCLD___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA761B0)
#define JLHPJLGBCLD___C__DISPLAYCLASS22_0___FAILENTER_B__0_OFFSET UNITYSDK_OFFSET(0xBA767D0)

inline static constexpr unsigned int JLHPJLGBCLD___c__DisplayClass22_0_TypeDefinitionIndex = 77035;

	class JLHPJLGBCLD___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::JLHPJLGBCLD* __4__this; // 0x10
		::System::Exception* exception; // 0x18
		::RPG::Client::Promises::Promise* cleanupPromise; // 0x20
		::RPG::Client::Promises::Promise* enteringPromise; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::System::Void __FailEnter_b__0(::RPG::Client::LittleGameSandboxCompletionResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameSandboxCompletionResult))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS22_0___FAILENTER_B__0_OFFSET))(this, a1);
		}

	};
