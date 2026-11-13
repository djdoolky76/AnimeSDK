#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Object.h"
class JLHPJLGBCLD;
namespace RPG::Client::Promises { class Promise; }

#define JLHPJLGBCLD___C__DISPLAYCLASS20_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A093B90)
#define JLHPJLGBCLD___C__DISPLAYCLASS20_0___RELEASESANDBOX_B__0_OFFSET UNITYSDK_OFFSET(0x1A093BA0)

inline static constexpr unsigned int JLHPJLGBCLD___c__DisplayClass20_0_TypeDefinitionIndex = 77033;

	class JLHPJLGBCLD___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* exitingPromise; // 0x10
		::JLHPJLGBCLD* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS20_0_CTOR_OFFSET))(this);
		}

		::System::Void __ReleaseSandbox_b__0(::RPG::Client::LittleGameSandboxCompletionResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameSandboxCompletionResult))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS20_0___RELEASESANDBOX_B__0_OFFSET))(this, a1);
		}

	};
