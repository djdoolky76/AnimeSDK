#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AIVariableInt; }
namespace RPG::GameCore { class ModifyAIVariableInt; }
namespace RPG::GameCore { class TaskContext; }

#define NBLLJGFJKPG_AGCLGFNAIPM_OFFSET UNITYSDK_OFFSET(0xBAD6760)
#define NBLLJGFJKPG_CTOR_OFFSET UNITYSDK_OFFSET(0xBAD6650)
#define NBLLJGFJKPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAD6660)
#define NBLLJGFJKPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAD66A0)
#define NBLLJGFJKPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBAD67F0)
#define NBLLJGFJKPG_TICK_OFFSET UNITYSDK_OFFSET(0xBAD6840)

inline static constexpr unsigned int NBLLJGFJKPG_TypeDefinitionIndex = 54392;

	class NBLLJGFJKPG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::ModifyAIVariableInt* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyAIVariableInt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyAIVariableInt*))((::PBYTE)hIl2Cpp + NBLLJGFJKPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBLLJGFJKPG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBLLJGFJKPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBLLJGFJKPG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBLLJGFJKPG_TICK_OFFSET))(this, a1);
		}

		::System::Void AGCLGFNAIPM(::RPG::GameCore::AIVariableInt* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIVariableInt*))((::PBYTE)hIl2Cpp + NBLLJGFJKPG_AGCLGFNAIPM_OFFSET))(this, a1);
		}

	};
