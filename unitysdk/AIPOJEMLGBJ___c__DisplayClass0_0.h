#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FuncUnlockHint; }

#define AIPOJEMLGBJ___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x12CAF280)
#define AIPOJEMLGBJ___C__DISPLAYCLASS0_0__HANDLENOTIFYUNLOCKHINT_B__0_OFFSET UNITYSDK_OFFSET(0x12CAF290)

inline static constexpr unsigned int AIPOJEMLGBJ___c__DisplayClass0_0_TypeDefinitionIndex = 68018;

	class AIPOJEMLGBJ___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::FuncUnlockHint* unlockHint; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPOJEMLGBJ___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _HandleNotifyUnlockHint_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPOJEMLGBJ___C__DISPLAYCLASS0_0__HANDLENOTIFYUNLOCKHINT_B__0_OFFSET))(this);
		}

	};
