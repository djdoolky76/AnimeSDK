#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetPropInteractBtnSwitch; }
namespace RPG::GameCore { class TaskContext; }

#define DAMDBCLEPHL_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC5260)
#define DAMDBCLEPHL_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xDFC5310)
#define DAMDBCLEPHL_ONSKIP_OFFSET UNITYSDK_OFFSET(0xDFC5320)
#define DAMDBCLEPHL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFC5290)

	class DAMDBCLEPHL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPropInteractBtnSwitch* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPropInteractBtnSwitch*))((::PBYTE)hIl2Cpp + DAMDBCLEPHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMDBCLEPHL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMDBCLEPHL_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMDBCLEPHL_ONSKIP_OFFSET))(this);
		}

	};
