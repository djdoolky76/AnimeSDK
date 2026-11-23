#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Game/GameSettingEntryData.h"
#include "unitysdk/E68AA4EB51923C98/A4AEE7DFB01708A3.h"

class A31C67312C73E0E6;

#define ABC_GAME_SOUNDSETTINGENTRYDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x1FD9C10)
#define ABC_GAME_SOUNDSETTINGENTRYDATA_SETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1FD9CF0)
#define ABC_GAME_SOUNDSETTINGENTRYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace ABC::Game
{
	inline static constexpr unsigned int SoundSettingEntryData_TypeDefinitionIndex = 8025;

	class SoundSettingEntryData : public ::ABC::Game::GameSettingEntryData
	{
	public:
		::E68AA4EB51923C98::A4AEE7DFB01708A3 settingType; // 0x10
		::System::Int32 volume; // 0x14
		::System::Boolean muted; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_SOUNDSETTINGENTRYDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetDefaultValue(::A31C67312C73E0E6* ACDE58E97E37D13C)
		{
			return ((::System::Void(*)(::PVOID, ::A31C67312C73E0E6*))((::PBYTE)hIl2Cpp + ABC_GAME_SOUNDSETTINGENTRYDATA_SETDEFAULTVALUE_OFFSET))(this, ACDE58E97E37D13C);
		}

		::System::Boolean IsValid(::A31C67312C73E0E6* ACDE58E97E37D13C)
		{
			return ((::System::Boolean(*)(::PVOID, ::A31C67312C73E0E6*))((::PBYTE)hIl2Cpp + ABC_GAME_SOUNDSETTINGENTRYDATA_ISVALID_OFFSET))(this, ACDE58E97E37D13C);
		}
	};
}
