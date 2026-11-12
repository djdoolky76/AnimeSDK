#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Object.h"
class EAIGLLEMOII;
class JLHPJLGBCLD;

#define JLHPJLGBCLD___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA75720)
#define JLHPJLGBCLD___C__DISPLAYCLASS18_0___ACQUIRESANDBOX_B__0_OFFSET UNITYSDK_OFFSET(0xBA76640)

inline static constexpr unsigned int JLHPJLGBCLD___c__DisplayClass18_0_TypeDefinitionIndex = 77032;

	class JLHPJLGBCLD___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::JLHPJLGBCLD* __4__this; // 0x10
		::EAIGLLEMOII* lease; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Void __AcquireSandbox_b__0(::RPG::Client::LittleGameSandboxCompletionResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameSandboxCompletionResult))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS18_0___ACQUIRESANDBOX_B__0_OFFSET))(this, a1);
		}

	};
