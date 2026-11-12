#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class DDNEPPOHKJN;
namespace RPG::Client { class Stage; }

#define OAOJJOCIOOA___C__DISPLAYCLASS53_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC631E90)
#define OAOJJOCIOOA___C__DISPLAYCLASS53_0___CREATESTAGESTREAMINGRESULTPROVIDER_B__0_OFFSET UNITYSDK_OFFSET(0xC632130)

inline static constexpr unsigned int OAOJJOCIOOA___c__DisplayClass53_0_TypeDefinitionIndex = 61938;

	class OAOJJOCIOOA___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::DDNEPPOHKJN* expectedBigStage; // 0x10
		::RPG::Client::Stage* expectedStage; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA___C__DISPLAYCLASS53_0_CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult> __CreateStageStreamingResultProvider_b__0()
		{
			return ((::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA___C__DISPLAYCLASS53_0___CREATESTAGESTREAMINGRESULTPROVIDER_B__0_OFFSET))(this);
		}

	};
