#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Object.h"
class EAIGLLEMOII;
class JLHPJLGBCLD;

#define JLHPJLGBCLD___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A093A10)
#define JLHPJLGBCLD___C__DISPLAYCLASS18_0___ACQUIRESANDBOX_B__0_OFFSET UNITYSDK_OFFSET(0x1A093A20)

inline static constexpr unsigned int JLHPJLGBCLD___c__DisplayClass18_0_TypeDefinitionIndex = 77031;

	class JLHPJLGBCLD___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::EAIGLLEMOII* lease; // 0x10
		::JLHPJLGBCLD* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Void __AcquireSandbox_b__0(::RPG::Client::LittleGameSandboxCompletionResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameSandboxCompletionResult))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS18_0___ACQUIRESANDBOX_B__0_OFFSET))(this, a1);
		}

	};
