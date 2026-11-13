#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdventurePlayVO; }
namespace RPG::GameCore { class TaskContext; }

#define HJAAAHMEHAG_CTOR_OFFSET UNITYSDK_OFFSET(0x181F1410)
#define HJAAAHMEHAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181F1420)
#define HJAAAHMEHAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x181F1460)
#define HJAAAHMEHAG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x181F16F0)
#define HJAAAHMEHAG_TICK_OFFSET UNITYSDK_OFFSET(0x181F1740)

inline static constexpr unsigned int HJAAAHMEHAG_TypeDefinitionIndex = 59146;

	class HJAAAHMEHAG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdventurePlayVO* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventurePlayVO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventurePlayVO*))((::PBYTE)hIl2Cpp + HJAAAHMEHAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAAAHMEHAG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAAAHMEHAG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAAAHMEHAG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJAAAHMEHAG_TICK_OFFSET))(this, a1);
		}

	};
