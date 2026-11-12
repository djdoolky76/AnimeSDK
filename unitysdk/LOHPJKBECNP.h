#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ModifySkillPropertyByName; }
namespace RPG::GameCore { class TaskContext; }

#define LOHPJKBECNP_CTOR_OFFSET UNITYSDK_OFFSET(0xC064AB0)
#define LOHPJKBECNP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC064AC0)
#define LOHPJKBECNP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC064B00)
#define LOHPJKBECNP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC0651B0)
#define LOHPJKBECNP_TICK_OFFSET UNITYSDK_OFFSET(0xC065200)

inline static constexpr unsigned int LOHPJKBECNP_TypeDefinitionIndex = 56395;

	class LOHPJKBECNP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ModifySkillPropertyByName* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifySkillPropertyByName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifySkillPropertyByName*))((::PBYTE)hIl2Cpp + LOHPJKBECNP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPJKBECNP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPJKBECNP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPJKBECNP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOHPJKBECNP_TICK_OFFSET))(this, a1);
		}

	};
