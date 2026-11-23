#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Game/GameSettingEntryData.h"
#include "unitysdk/E68AA4EB51923C98/BB8E1C26AB62AE20.h"
#include "unitysdk/E68AA4EB51923C98/E4B55EE0EC5CC11E.h"

class A31C67312C73E0E6;

#define ABC_GAME_LANGUAGESETTINGENTRYDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x20F51A0)
#define ABC_GAME_LANGUAGESETTINGENTRYDATA_SETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x20F5390)
#define ABC_GAME_LANGUAGESETTINGENTRYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace ABC::Game
{
	inline static constexpr unsigned int LanguageSettingEntryData_TypeDefinitionIndex = 8679;

	class LanguageSettingEntryData : public ::ABC::Game::GameSettingEntryData
	{
	public:
		::E68AA4EB51923C98::BB8E1C26AB62AE20 settingType; // 0x10
		::E68AA4EB51923C98::E4B55EE0EC5CC11E language; // 0x14

		::System::Void SetDefaultValue(::A31C67312C73E0E6* ACDE58E97E37D13C)
		{
			return ((::System::Void(*)(::PVOID, ::A31C67312C73E0E6*))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGENTRYDATA_SETDEFAULTVALUE_OFFSET))(this, ACDE58E97E37D13C);
		}

		::System::Boolean IsValid(::A31C67312C73E0E6* ACDE58E97E37D13C)
		{
			return ((::System::Boolean(*)(::PVOID, ::A31C67312C73E0E6*))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGENTRYDATA_ISVALID_OFFSET))(this, ACDE58E97E37D13C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGENTRYDATA__CTOR_OFFSET))(this);
		}
	};
}
