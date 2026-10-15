#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
namespace RPG::GameCore { class SetTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define AMJKHOCLEGG_ACOINIPGLFH_OFFSET UNITYSDK_OFFSET(0x155779C0)
#define AMJKHOCLEGG_CNLOPPIFPFA_OFFSET UNITYSDK_OFFSET(0x15577D10)
#define AMJKHOCLEGG_CTOR_OFFSET UNITYSDK_OFFSET(0x15577830)
#define AMJKHOCLEGG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15577840)
#define AMJKHOCLEGG_JNKMHPNJOID_OFFSET UNITYSDK_OFFSET(0x155778F0)
#define AMJKHOCLEGG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15577880)
#define AMJKHOCLEGG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15578150)
#define AMJKHOCLEGG_TICK_OFFSET UNITYSDK_OFFSET(0x155781A0)

inline static constexpr unsigned int AMJKHOCLEGG_TypeDefinitionIndex = 56433;

	class AMJKHOCLEGG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetTeamFormation* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTeamFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTeamFormation*))((::PBYTE)hIl2Cpp + AMJKHOCLEGG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJKHOCLEGG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJKHOCLEGG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ACOINIPGLFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJKHOCLEGG_ACOINIPGLFH_OFFSET))(this);
		}

		::System::Void JNKMHPNJOID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJKHOCLEGG_JNKMHPNJOID_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJKHOCLEGG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMJKHOCLEGG_TICK_OFFSET))(this, a1);
		}

		::System::Void CNLOPPIFPFA(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + AMJKHOCLEGG_CNLOPPIFPFA_OFFSET))(this, a1);
		}

	};
