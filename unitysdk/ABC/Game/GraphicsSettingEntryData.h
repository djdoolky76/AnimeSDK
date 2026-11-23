#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Game/GameSettingEntryData.h"
#include "unitysdk/E68AA4EB51923C98/EF8E73431D585F57.h"

class A31C67312C73E0E6;

#define ABC_GAME_GRAPHICSSETTINGENTRYDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F1B5B0)
#define ABC_GAME_GRAPHICSSETTINGENTRYDATA_SETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1F1B870)
#define ABC_GAME_GRAPHICSSETTINGENTRYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace ABC::Game
{
	inline static constexpr unsigned int GraphicsSettingEntryData_TypeDefinitionIndex = 7555;

	class GraphicsSettingEntryData : public ::ABC::Game::GameSettingEntryData
	{
	public:
		::E68AA4EB51923C98::EF8E73431D585F57 settingType; // 0x10
		::System::Int32 optionValue; // 0x14

		::System::Void SetDefaultValue(::A31C67312C73E0E6* ACDE58E97E37D13C)
		{
			return ((::System::Void(*)(::PVOID, ::A31C67312C73E0E6*))((::PBYTE)hIl2Cpp + ABC_GAME_GRAPHICSSETTINGENTRYDATA_SETDEFAULTVALUE_OFFSET))(this, ACDE58E97E37D13C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GRAPHICSSETTINGENTRYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid(::A31C67312C73E0E6* ACDE58E97E37D13C)
		{
			return ((::System::Boolean(*)(::PVOID, ::A31C67312C73E0E6*))((::PBYTE)hIl2Cpp + ABC_GAME_GRAPHICSSETTINGENTRYDATA_ISVALID_OFFSET))(this, ACDE58E97E37D13C);
		}
	};
}
