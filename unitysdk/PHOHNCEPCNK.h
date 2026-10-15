#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowGuideText; }
namespace RPG::GameCore { class TaskContext; }

#define PHOHNCEPCNK_CTOR_OFFSET UNITYSDK_OFFSET(0xC250830)
#define PHOHNCEPCNK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC250840)
#define PHOHNCEPCNK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC250880)
#define PHOHNCEPCNK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC250B40)
#define PHOHNCEPCNK_TICK_OFFSET UNITYSDK_OFFSET(0xC250B90)

inline static constexpr unsigned int PHOHNCEPCNK_TypeDefinitionIndex = 58661;

	class PHOHNCEPCNK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowGuideText* OFKGLJOAMLD; // 0x20
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
