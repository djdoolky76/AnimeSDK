#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANACIPLIMDE.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterVisibleComponent; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS44_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC6064F0)
#define NPPNOGNDFMJ___C__DISPLAYCLASS44_0___REFRESHPLAYERSTATE_B__2_OFFSET UNITYSDK_OFFSET(0xC60F100)
#define NPPNOGNDFMJ___C__DISPLAYCLASS44_0___REFRESHPLAYERSTATE_B__3_OFFSET UNITYSDK_OFFSET(0xC60F130)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass44_0_TypeDefinitionIndex = 61873;

	class NPPNOGNDFMJ___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::ANACIPLIMDE visibleParam; // 0x10
		::RPG::GameCore::CharacterVisibleComponent* visibleComponent; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS44_0_CTOR_OFFSET))(this);
		}

		::System::Void __RefreshPlayerState_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS44_0___REFRESHPLAYERSTATE_B__2_OFFSET))(this);
		}

		::System::Void __RefreshPlayerState_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS44_0___REFRESHPLAYERSTATE_B__3_OFFSET))(this);
		}

	};
