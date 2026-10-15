#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetEntityActionState; }
namespace RPG::GameCore { class TaskContext; }

#define NFMHODLEFEE_CTOR_OFFSET UNITYSDK_OFFSET(0xBB952A0)
#define NFMHODLEFEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB952B0)
#define NFMHODLEFEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB952F0)
#define NFMHODLEFEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB955E0)
#define NFMHODLEFEE_TICK_OFFSET UNITYSDK_OFFSET(0xBB95630)

inline static constexpr unsigned int NFMHODLEFEE_TypeDefinitionIndex = 55499;

	class NFMHODLEFEE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetEntityActionState* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityActionState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityActionState*))((::PBYTE)hIl2Cpp + NFMHODLEFEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMHODLEFEE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMHODLEFEE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMHODLEFEE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFMHODLEFEE_TICK_OFFSET))(this, a1);
		}

	};
