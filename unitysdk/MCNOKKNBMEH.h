#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAbility; }

#define MCNOKKNBMEH_CTOR_OFFSET UNITYSDK_OFFSET(0xB8828C0)
#define MCNOKKNBMEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8836F0)
#define MCNOKKNBMEH_NAGBMNBECCI_OFFSET UNITYSDK_OFFSET(0xB883320)
#define MCNOKKNBMEH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB882980)

inline static constexpr unsigned int MCNOKKNBMEH_TypeDefinitionIndex = 55711;

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
