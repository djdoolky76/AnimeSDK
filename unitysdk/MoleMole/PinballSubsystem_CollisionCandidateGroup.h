#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PinballSubsystem_CollisionCandidate.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PINBALLSUBSYSTEM_COLLISIONCANDIDATEGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0x14B14F80)
#define MOLEMOLE_PINBALLSUBSYSTEM_COLLISIONCANDIDATEGROUP_GET_HASANY_OFFSET UNITYSDK_OFFSET(0x14B14EF0)
#define MOLEMOLE_PINBALLSUBSYSTEM_COLLISIONCANDIDATEGROUP_GET_HASSOLIDS_OFFSET UNITYSDK_OFFSET(0x14B14F60)
#define MOLEMOLE_PINBALLSUBSYSTEM_COLLISIONCANDIDATEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x14B15060)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_CollisionCandidateGroup_TypeDefinitionIndex = 56747;

	class PinballSubsystem_CollisionCandidateGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* SolidCandidates; // 0x10
		::MoleMole::PinballSubsystem_CollisionCandidate PrimarySolid; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* TriggerCandidates; // 0x88
		::System::Single NormalizedTime; // 0x90
		::System::Boolean HasPrimarySolid; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_COLLISIONCANDIDATEGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasAny()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_COLLISIONCANDIDATEGROUP_GET_HASANY_OFFSET))(this);
		}

		::System::Boolean get_HasSolids()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_COLLISIONCANDIDATEGROUP_GET_HASSOLIDS_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_COLLISIONCANDIDATEGROUP_CLEAR_OFFSET))(this);
		}
	};
}
