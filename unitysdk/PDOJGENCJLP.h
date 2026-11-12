#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PerformanceEndBlackText; }
namespace RPG::GameCore { class TaskContext; }

#define PDOJGENCJLP_CTOR_OFFSET UNITYSDK_OFFSET(0xC927B60)
#define PDOJGENCJLP_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC927B90)
#define PDOJGENCJLP_LANDEEPIFAK_OFFSET UNITYSDK_OFFSET(0xC927C30)
#define PDOJGENCJLP_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC927CC0)
#define PDOJGENCJLP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC927BA0)

inline static constexpr unsigned int PDOJGENCJLP_TypeDefinitionIndex = 54232;

	class PDOJGENCJLP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformanceEndBlackText* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformanceEndBlackText*))((::PBYTE)hIl2Cpp + PDOJGENCJLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOJGENCJLP_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOJGENCJLP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOJGENCJLP_ONSKIP_OFFSET))(this);
		}

		::System::Void LANDEEPIFAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOJGENCJLP_LANDEEPIFAK_OFFSET))(this);
		}

	};
