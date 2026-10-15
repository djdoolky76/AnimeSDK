#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAbility; }

#define MCNOKKNBMEH_CTOR_OFFSET UNITYSDK_OFFSET(0xB889640)
#define MCNOKKNBMEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB88A470)
#define MCNOKKNBMEH_NAGBMNBECCI_OFFSET UNITYSDK_OFFSET(0xB88A0A0)
#define MCNOKKNBMEH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB889700)

	class MCNOKKNBMEH
	{
	public:
		::GELIALJDFBL* BBODFIBDPCG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAbility*))((::PBYTE)hIl2Cpp + MCNOKKNBMEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNOKKNBMEH_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* NAGBMNBECCI()
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNOKKNBMEH_NAGBMNBECCI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNOKKNBMEH_DISPOSE_OFFSET))(this);
		}

	};
