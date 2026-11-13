#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetHpBreakHint; }
namespace RPG::GameCore { class TaskContext; }

#define KNICPGBBJME_CTOR_OFFSET UNITYSDK_OFFSET(0x18FA8590)
#define KNICPGBBJME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FA85A0)
#define KNICPGBBJME_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18FA85E0)
#define KNICPGBBJME_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18FA8790)
#define KNICPGBBJME_TICK_OFFSET UNITYSDK_OFFSET(0x18FA87E0)

inline static constexpr unsigned int KNICPGBBJME_TypeDefinitionIndex = 56712;

	class KNICPGBBJME : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetHpBreakHint* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetHpBreakHint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetHpBreakHint*))((::PBYTE)hIl2Cpp + KNICPGBBJME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNICPGBBJME_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNICPGBBJME_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNICPGBBJME_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNICPGBBJME_TICK_OFFSET))(this, a1);
		}

	};
