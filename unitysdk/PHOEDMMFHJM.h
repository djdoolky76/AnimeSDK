#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PerformanceExtendEndBlack; }
namespace RPG::GameCore { class TaskContext; }

#define PHOEDMMFHJM_CTOR_OFFSET UNITYSDK_OFFSET(0xC257F80)
#define PHOEDMMFHJM_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC257FB0)
#define PHOEDMMFHJM_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC258040)
#define PHOEDMMFHJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC257FC0)

	class PHOEDMMFHJM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformanceExtendEndBlack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformanceExtendEndBlack*))((::PBYTE)hIl2Cpp + PHOEDMMFHJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOEDMMFHJM_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOEDMMFHJM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOEDMMFHJM_ONSKIP_OFFSET))(this);
		}

	};
