#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetTeamRootOffset; }
namespace RPG::GameCore { class TaskContext; }

#define FHPKLEDCLHI_CTOR_OFFSET UNITYSDK_OFFSET(0x157890D0)
#define FHPKLEDCLHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157890E0)
#define FHPKLEDCLHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15789120)
#define FHPKLEDCLHI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15789820)
#define FHPKLEDCLHI_TICK_OFFSET UNITYSDK_OFFSET(0x15789870)

inline static constexpr unsigned int FHPKLEDCLHI_TypeDefinitionIndex = 56434;

	class FHPKLEDCLHI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetTeamRootOffset* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTeamRootOffset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTeamRootOffset*))((::PBYTE)hIl2Cpp + FHPKLEDCLHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPKLEDCLHI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPKLEDCLHI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPKLEDCLHI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHPKLEDCLHI_TICK_OFFSET))(this, a1);
		}

	};
