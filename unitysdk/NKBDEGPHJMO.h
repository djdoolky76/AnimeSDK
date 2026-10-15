#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UINotifyMonopolyCellEventFinish; }

#define NKBDEGPHJMO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC28740)
#define NKBDEGPHJMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC28860)
#define NKBDEGPHJMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC28750)
#define NKBDEGPHJMO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC28810)
#define NKBDEGPHJMO_TICK_OFFSET UNITYSDK_OFFSET(0xBC287B0)

inline static constexpr unsigned int NKBDEGPHJMO_TypeDefinitionIndex = 58837;

	class NKBDEGPHJMO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::UINotifyMonopolyCellEventFinish* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UINotifyMonopolyCellEventFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UINotifyMonopolyCellEventFinish*))((::PBYTE)hIl2Cpp + NKBDEGPHJMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBDEGPHJMO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKBDEGPHJMO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBDEGPHJMO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBDEGPHJMO_DISPOSE_OFFSET))(this);
		}

	};
