#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetStanceHintEffect; }
namespace RPG::GameCore { class TaskContext; }

#define KJHEDLNMAEL_CTOR_OFFSET UNITYSDK_OFFSET(0x19F0CCE0)
#define KJHEDLNMAEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F0CCF0)
#define KJHEDLNMAEL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19F0CD30)
#define KJHEDLNMAEL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19F0CEC0)
#define KJHEDLNMAEL_TICK_OFFSET UNITYSDK_OFFSET(0x19F0CF10)

inline static constexpr unsigned int KJHEDLNMAEL_TypeDefinitionIndex = 56765;

	class KJHEDLNMAEL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetStanceHintEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetStanceHintEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetStanceHintEffect*))((::PBYTE)hIl2Cpp + KJHEDLNMAEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHEDLNMAEL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHEDLNMAEL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHEDLNMAEL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJHEDLNMAEL_TICK_OFFSET))(this, a1);
		}

	};
