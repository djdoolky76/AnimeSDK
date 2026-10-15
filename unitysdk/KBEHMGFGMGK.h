#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowSwipeGuide; }
namespace RPG::GameCore { class TaskContext; }

#define KBEHMGFGMGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB2F6750)
#define KBEHMGFGMGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2F6760)
#define KBEHMGFGMGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2F67A0)
#define KBEHMGFGMGK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2F6870)
#define KBEHMGFGMGK_TICK_OFFSET UNITYSDK_OFFSET(0xB2F68C0)

inline static constexpr unsigned int KBEHMGFGMGK_TypeDefinitionIndex = 58695;

	class KBEHMGFGMGK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowSwipeGuide* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSwipeGuide* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSwipeGuide*))((::PBYTE)hIl2Cpp + KBEHMGFGMGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEHMGFGMGK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEHMGFGMGK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEHMGFGMGK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBEHMGFGMGK_TICK_OFFSET))(this, a1);
		}

	};
