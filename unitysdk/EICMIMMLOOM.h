#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MonopolyShowSwitchTransition; }
namespace RPG::GameCore { class TaskContext; }

#define EICMIMMLOOM_CTOR_OFFSET UNITYSDK_OFFSET(0x19A8A660)
#define EICMIMMLOOM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A8A760)
#define EICMIMMLOOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19A8A670)
#define EICMIMMLOOM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19A8A710)
#define EICMIMMLOOM_TICK_OFFSET UNITYSDK_OFFSET(0x19A8A7A0)

inline static constexpr unsigned int EICMIMMLOOM_TypeDefinitionIndex = 59481;

	class EICMIMMLOOM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MonopolyShowSwitchTransition* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyShowSwitchTransition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyShowSwitchTransition*))((::PBYTE)hIl2Cpp + EICMIMMLOOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EICMIMMLOOM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EICMIMMLOOM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EICMIMMLOOM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EICMIMMLOOM_TICK_OFFSET))(this, a1);
		}

	};
