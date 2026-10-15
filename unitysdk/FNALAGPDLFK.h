#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class SkillExecutionStart; }
namespace RPG::GameCore { class TaskContext; }

#define FNALAGPDLFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15868BD0)
#define FNALAGPDLFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15868E20)
#define FNALAGPDLFK_MIFOJHAHBLM_OFFSET UNITYSDK_OFFSET(0x15868EC0)
#define FNALAGPDLFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15868BE0)
#define FNALAGPDLFK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15868DD0)
#define FNALAGPDLFK_TICK_OFFSET UNITYSDK_OFFSET(0x15868E60)

inline static constexpr unsigned int FNALAGPDLFK_TypeDefinitionIndex = 55621;

	class FNALAGPDLFK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SkillExecutionStart* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SkillExecutionStart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SkillExecutionStart*))((::PBYTE)hIl2Cpp + FNALAGPDLFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNALAGPDLFK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNALAGPDLFK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNALAGPDLFK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FNALAGPDLFK_TICK_OFFSET))(this, a1);
		}

		::System::Void MIFOJHAHBLM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FNALAGPDLFK_MIFOJHAHBLM_OFFSET))(this, a1);
		}

	};
