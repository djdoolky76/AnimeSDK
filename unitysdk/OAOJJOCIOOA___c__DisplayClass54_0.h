#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class LJFHKAJPFNE;
class OAOJJOCIOOA;
namespace RPG::Client { class Stage; }
namespace System { template <typename T> class Func_1; }

#define OAOJJOCIOOA___C__DISPLAYCLASS54_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC631EA0)
#define OAOJJOCIOOA___C__DISPLAYCLASS54_0___CREATETEMPORARYSUBSTAGEEXITRESULTPROVIDER_B__0_OFFSET UNITYSDK_OFFSET(0xC632270)
#define OAOJJOCIOOA___C__DISPLAYCLASS54_0___CREATETEMPORARYSUBSTAGEEXITRESULTPROVIDER_B__1_OFFSET UNITYSDK_OFFSET(0xC6323A0)

inline static constexpr unsigned int OAOJJOCIOOA___c__DisplayClass54_0_TypeDefinitionIndex = 61939;

	class OAOJJOCIOOA___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::OAOJJOCIOOA* __4__this; // 0x10
		::RPG::Client::Stage* expectedStage; // 0x18
		::LJFHKAJPFNE* expectedWorld; // 0x20
		::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>* checkResult; // 0x28
		::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>* stageResultProvider; // 0x30
		::System::UInt64 completedUpdateSequence; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA___C__DISPLAYCLASS54_0_CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult> __CreateTemporarySubStageExitResultProvider_b__0()
		{
			return ((::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA___C__DISPLAYCLASS54_0___CREATETEMPORARYSUBSTAGEEXITRESULTPROVIDER_B__0_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult> __CreateTemporarySubStageExitResultProvider_b__1()
		{
			return ((::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA___C__DISPLAYCLASS54_0___CREATETEMPORARYSUBSTAGEEXITRESULTPROVIDER_B__1_OFFSET))(this);
		}

	};
