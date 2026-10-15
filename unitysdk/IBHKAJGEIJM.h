#pragma once
#include "unitysdk/unitysdk.h"
class DMHFEDAIKME;
namespace RPG::Client { class ST_Parkour_SwitchRoad; }
namespace RPG::GameCore { class TaskContext; }

#define IBHKAJGEIJM_CTOR_OFFSET UNITYSDK_OFFSET(0x15E354E0)
#define IBHKAJGEIJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E35510)
#define IBHKAJGEIJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E35560)
#define IBHKAJGEIJM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E35970)
#define IBHKAJGEIJM_TICK_OFFSET UNITYSDK_OFFSET(0x15E35760)

inline static constexpr unsigned int IBHKAJGEIJM_TypeDefinitionIndex = 52136;

	class IBHKAJGEIJM
	{
	public:
		::DMHFEDAIKME* PFECGMGNMEN; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_SwitchRoad* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_SwitchRoad*))((::PBYTE)hIl2Cpp + IBHKAJGEIJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHKAJGEIJM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHKAJGEIJM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHKAJGEIJM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBHKAJGEIJM_TICK_OFFSET))(this, a1);
		}

	};
