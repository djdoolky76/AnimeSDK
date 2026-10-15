#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class FOOIINCDBFA;
namespace RPG::GameCore { class AdvNPCUseMazeSkill; }
namespace RPG::GameCore { class AdventureSkillCharacterComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HJMECDHPBNN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D2E8D0)
#define HJMECDHPBNN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D2EAF0)
#define HJMECDHPBNN_HHEHAJFLHPO_OFFSET UNITYSDK_OFFSET(0x15D2F390)
#define HJMECDHPBNN_KHHJNEKMOGA_OFFSET UNITYSDK_OFFSET(0x15D2F160)
#define HJMECDHPBNN_MPPLHHLLOHH_OFFSET UNITYSDK_OFFSET(0x15D2EC20)
#define HJMECDHPBNN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D2EB40)
#define HJMECDHPBNN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D2F0A0)
#define HJMECDHPBNN_TICK_OFFSET UNITYSDK_OFFSET(0x15D2F100)

	class HJMECDHPBNN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::NPCComponent* OJAIBDDGDME; // 0x18
		::RPG::GameCore::AdvNPCUseMazeSkill* IGHAHBNLIJA; // 0x20
		::FOOIINCDBFA* DIFOMCDONEO; // 0x28
		::RPG::GameCore::AdventureSkillCharacterComponent* KKANBKCEJEF; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::Int32 CNFFDNNAPFJ; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCUseMazeSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCUseMazeSkill*))((::PBYTE)hIl2Cpp + HJMECDHPBNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMECDHPBNN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMECDHPBNN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMECDHPBNN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJMECDHPBNN_TICK_OFFSET))(this, a1);
		}

		::System::Void MPPLHHLLOHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMECDHPBNN_MPPLHHLLOHH_OFFSET))(this);
		}

		::System::Void KHHJNEKMOGA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJMECDHPBNN_KHHJNEKMOGA_OFFSET))(this, a1);
		}

		::System::Void HHEHAJFLHPO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJMECDHPBNN_HHEHAJFLHPO_OFFSET))(this, a1);
		}

	};
