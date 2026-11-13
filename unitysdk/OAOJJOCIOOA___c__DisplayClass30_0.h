#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class OAOJJOCIOOA;

#define OAOJJOCIOOA___C__DISPLAYCLASS30_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB6A920)
#define OAOJJOCIOOA___C__DISPLAYCLASS30_0__ACQUIRETEMPORARYSUBSTAGE_B__0_OFFSET UNITYSDK_OFFSET(0x1AB6E010)

inline static constexpr unsigned int OAOJJOCIOOA___c__DisplayClass30_0_TypeDefinitionIndex = 61937;

	class OAOJJOCIOOA___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::OAOJJOCIOOA* __4__this; // 0x10
		::System::Int64 leaseID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA___C__DISPLAYCLASS30_0_CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult> _AcquireTemporarySubStage_b__0()
		{
			return ((::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA___C__DISPLAYCLASS30_0__ACQUIRETEMPORARYSUBSTAGE_B__0_OFFSET))(this);
		}

	};
