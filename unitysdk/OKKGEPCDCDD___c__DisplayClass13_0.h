#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Object.h"
class OKKGEPCDCDD;
namespace System { template <typename T> class Action_1; }

#define OKKGEPCDCDD___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC7E4000)
#define OKKGEPCDCDD___C__DISPLAYCLASS13_0__REGISTERSANDBOXGAMEINITFINISH_B__0_OFFSET UNITYSDK_OFFSET(0xC7E4610)

inline static constexpr unsigned int OKKGEPCDCDD___c__DisplayClass13_0_TypeDefinitionIndex = 61916;

	class OKKGEPCDCDD___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::OKKGEPCDCDD* __4__this; // 0x10
		::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>* callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void _RegisterSandboxGameInitFinish_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD___C__DISPLAYCLASS13_0__REGISTERSANDBOXGAMEINITFINISH_B__0_OFFSET))(this);
		}

	};
