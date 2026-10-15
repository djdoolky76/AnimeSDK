#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeStoryThemeConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGESTORYTHEMECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D563980)
#define RPG_GAMECORE_CHALLENGESTORYTHEMECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D563720)

namespace RPG::GameCore
{
	class ChallengeStoryThemeConfigRow : public ::System::Object
	{
	public:
		::System::String* ThemeSubColor1; // 0x10
		::System::String* ThemeBgPrefabPath; // 0x18
		::System::String* ThemeSubColor2; // 0x20
		::System::String* ThemeEffColor; // 0x28
		::System::String* ThemePanelPrefabPath; // 0x30
		::System::String* ThemeMainColor; // 0x38
		::System::UInt32 ThemeID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYTHEMECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChallengeStoryThemeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChallengeStoryThemeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYTHEMECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
