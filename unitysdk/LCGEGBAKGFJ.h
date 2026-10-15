#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByBattleTargetProgress; }
namespace RPG::GameCore { class TaskContext; }

#define LCGEGBAKGFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB6147E0)
#define LCGEGBAKGFJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB614970)

	class LCGEGBAKGFJ
	{
	public:
		::RPG::GameCore::StringHash IKPIIDMENNM; // 0x28
		::RPG::GameCore::StringHash IOCKIKFGCLK; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBattleTargetProgress*))((::PBYTE)hIl2Cpp + LCGEGBAKGFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGEGBAKGFJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
