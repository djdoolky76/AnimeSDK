#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Game/GameSettingEntryData.h"

class A31C67312C73E0E6;

#define ABC_GAME_PERSPECTIVESENSITIVITYSETTINGENTRYDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x224A340)
#define ABC_GAME_PERSPECTIVESENSITIVITYSETTINGENTRYDATA_SETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x224A470)
#define ABC_GAME_PERSPECTIVESENSITIVITYSETTINGENTRYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace ABC::Game
{
	inline static constexpr unsigned int PerspectiveSensitivitySettingEntryData_TypeDefinitionIndex = 6898;

	class PerspectiveSensitivitySettingEntryData : public ::ABC::Game::GameSettingEntryData
	{
	public:
		::System::Single sensitivity; // 0x10

		::System::Void SetDefaultValue(::A31C67312C73E0E6* ACDE58E97E37D13C)
		{
			return ((::System::Void(*)(::PVOID, ::A31C67312C73E0E6*))((::PBYTE)hIl2Cpp + ABC_GAME_PERSPECTIVESENSITIVITYSETTINGENTRYDATA_SETDEFAULTVALUE_OFFSET))(this, ACDE58E97E37D13C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_PERSPECTIVESENSITIVITYSETTINGENTRYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid(::A31C67312C73E0E6* ACDE58E97E37D13C)
		{
			return ((::System::Boolean(*)(::PVOID, ::A31C67312C73E0E6*))((::PBYTE)hIl2Cpp + ABC_GAME_PERSPECTIVESENSITIVITYSETTINGENTRYDATA_ISVALID_OFFSET))(this, ACDE58E97E37D13C);
		}
	};
}
