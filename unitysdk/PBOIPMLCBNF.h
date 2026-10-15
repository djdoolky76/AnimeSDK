#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class BattlePlayTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define PBOIPMLCBNF_CTOR_OFFSET UNITYSDK_OFFSET(0xBFEF4E0)
#define PBOIPMLCBNF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFEF4F0)
#define PBOIPMLCBNF_GANACOCPDLF_OFFSET UNITYSDK_OFFSET(0xBFEF740)
#define PBOIPMLCBNF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFEF5B0)
#define PBOIPMLCBNF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFEF690)
#define PBOIPMLCBNF_TICK_OFFSET UNITYSDK_OFFSET(0xBFEF6E0)

inline static constexpr unsigned int PBOIPMLCBNF_TypeDefinitionIndex = 57955;

	class PBOIPMLCBNF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::BattlePlayTalk* EJJEEJENLDA; // 0x18
		::RPG::GameCore::TaskContext* APKCDIIEJLO; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattlePlayTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattlePlayTalk*))((::PBYTE)hIl2Cpp + PBOIPMLCBNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOIPMLCBNF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOIPMLCBNF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOIPMLCBNF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBOIPMLCBNF_TICK_OFFSET))(this, a1);
		}

		::System::Void GANACOCPDLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBOIPMLCBNF_GANACOCPDLF_OFFSET))(this, a1);
		}

	};
