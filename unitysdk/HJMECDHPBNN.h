#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class FOOIINCDBFA;
namespace RPG::GameCore { class AdvNPCUseMazeSkill; }
namespace RPG::GameCore { class AdventureSkillCharacterComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HJMECDHPBNN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D21DB0)
#define HJMECDHPBNN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D21FD0)
#define HJMECDHPBNN_HHEHAJFLHPO_OFFSET UNITYSDK_OFFSET(0x15D22870)
#define HJMECDHPBNN_KHHJNEKMOGA_OFFSET UNITYSDK_OFFSET(0x15D22640)
#define HJMECDHPBNN_MPPLHHLLOHH_OFFSET UNITYSDK_OFFSET(0x15D22100)
#define HJMECDHPBNN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D22020)
#define HJMECDHPBNN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D22580)
#define HJMECDHPBNN_TICK_OFFSET UNITYSDK_OFFSET(0x15D225E0)

inline static constexpr unsigned int HJMECDHPBNN_TypeDefinitionIndex = 52446;

	class HJMECDHPBNN : public ::GELIALJDFBL
	{
	public:
		::FOOIINCDBFA* DIFOMCDONEO; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::NPCComponent* OJAIBDDGDME; // 0x28
		::RPG::GameCore::AdventureSkillCharacterComponent* KKANBKCEJEF; // 0x30
		::RPG::GameCore::AdvNPCUseMazeSkill* IGHAHBNLIJA; // 0x38
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
