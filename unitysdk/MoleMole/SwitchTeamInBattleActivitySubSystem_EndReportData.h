#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_ENDREPORTDATA_BUILDCURACTIVETIME_OFFSET UNITYSDK_OFFSET(0x15AD77B0)
#define MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_ENDREPORTDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x15AD76A0)
#define MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_ENDREPORTDATA_INITCURACTIVEUTC_OFFSET UNITYSDK_OFFSET(0x15AD7720)
#define MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_ENDREPORTDATA_INIT_OFFSET UNITYSDK_OFFSET(0x15AD7500)
#define MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_ENDREPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD78F0)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchTeamInBattleActivitySubSystem_EndReportData_TypeDefinitionIndex = 71386;

	class SwitchTeamInBattleActivitySubSystem_EndReportData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* activeTimes; // 0x10
		::System::UInt32 totalSwitchCount; // 0x18
		::System::UInt32 _curActiveStartUTC; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_ENDREPORTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_ENDREPORTDATA_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_ENDREPORTDATA_CLEAR_OFFSET))(this);
		}

		::System::Void InitCurActiveUTC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_ENDREPORTDATA_INITCURACTIVEUTC_OFFSET))(this);
		}

		::System::Void BuildCurActiveTime(::System::Int32 curIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLEACTIVITYSUBSYSTEM_ENDREPORTDATA_BUILDCURACTIVETIME_OFFSET))(this, curIndex);
		}
	};
}
