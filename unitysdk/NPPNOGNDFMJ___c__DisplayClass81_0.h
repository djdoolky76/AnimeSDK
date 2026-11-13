#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Object.h"
class KPMAOLIGPAP;
class NPPNOGNDFMJ;
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS81_0_CTOR_OFFSET UNITYSDK_OFFSET(0x19D189A0)
#define NPPNOGNDFMJ___C__DISPLAYCLASS81_0___APPLYEFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0x19D1CF80)
#define NPPNOGNDFMJ___C__DISPLAYCLASS81_0___APPLYEFFECTS_B__1_OFFSET UNITYSDK_OFFSET(0x19D1D270)
#define NPPNOGNDFMJ___C__DISPLAYCLASS81_0___APPLYEFFECTS_B__2_OFFSET UNITYSDK_OFFSET(0x19D1D170)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass81_0_TypeDefinitionIndex = 61884;

	class NPPNOGNDFMJ___c__DisplayClass81_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>* __9__2; // 0x10
		::NPPNOGNDFMJ* __4__this; // 0x18
		::System::IDisposable* lease; // 0x20
		::System::IDisposable* exitRegistration; // 0x28
		::KPMAOLIGPAP* session; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS81_0_CTOR_OFFSET))(this);
		}

		::System::Void __ApplyEffects_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS81_0___APPLYEFFECTS_B__0_OFFSET))(this);
		}

		::System::Void __ApplyEffects_b__2(::RPG::Client::LittleGameSandboxCompletionResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameSandboxCompletionResult))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS81_0___APPLYEFFECTS_B__2_OFFSET))(this, a1);
		}

		::System::Void __ApplyEffects_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS81_0___APPLYEFFECTS_B__1_OFFSET))(this);
		}

	};
