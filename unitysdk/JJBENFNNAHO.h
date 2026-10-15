#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CharmUseSkill; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define JJBENFNNAHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB2009A0)
#define JJBENFNNAHO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2009B0)
#define JJBENFNNAHO_IBCBIAKDGMO_OFFSET UNITYSDK_OFFSET(0xB200F80)
#define JJBENFNNAHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2009F0)
#define JJBENFNNAHO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB200ED0)
#define JJBENFNNAHO_TICK_OFFSET UNITYSDK_OFFSET(0xB200F20)

	class JJBENFNNAHO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CharmUseSkill* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharmUseSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharmUseSkill*))((::PBYTE)hIl2Cpp + JJBENFNNAHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBENFNNAHO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBENFNNAHO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBENFNNAHO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JJBENFNNAHO_TICK_OFFSET))(this, a1);
		}

		::System::Void IBCBIAKDGMO(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JJBENFNNAHO_IBCBIAKDGMO_OFFSET))(this, a1, a2);
		}

	};
