#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowGuideText; }
namespace RPG::GameCore { class TaskContext; }

#define PHOHNCEPCNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9B9FE0)
#define PHOHNCEPCNK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A9B9FF0)
#define PHOHNCEPCNK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A9BA030)
#define PHOHNCEPCNK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A9BA260)
#define PHOHNCEPCNK_TICK_OFFSET UNITYSDK_OFFSET(0x1A9BA2B0)

inline static constexpr unsigned int PHOHNCEPCNK_TypeDefinitionIndex = 59928;

	class PHOHNCEPCNK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowGuideText* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideText* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideText*))((::PBYTE)hIl2Cpp + PHOHNCEPCNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOHNCEPCNK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOHNCEPCNK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOHNCEPCNK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHOHNCEPCNK_TICK_OFFSET))(this, a1);
		}

	};
