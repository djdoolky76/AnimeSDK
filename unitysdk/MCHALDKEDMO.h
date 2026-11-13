#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AddEntityToTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define MCHALDKEDMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B843280)
#define MCHALDKEDMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B843290)
#define MCHALDKEDMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B8432D0)
#define MCHALDKEDMO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B843500)
#define MCHALDKEDMO_TICK_OFFSET UNITYSDK_OFFSET(0x1B843550)

inline static constexpr unsigned int MCHALDKEDMO_TypeDefinitionIndex = 55980;

	class MCHALDKEDMO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AddEntityToTeamFormation* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddEntityToTeamFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddEntityToTeamFormation*))((::PBYTE)hIl2Cpp + MCHALDKEDMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHALDKEDMO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHALDKEDMO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHALDKEDMO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCHALDKEDMO_TICK_OFFSET))(this, a1);
		}

	};
