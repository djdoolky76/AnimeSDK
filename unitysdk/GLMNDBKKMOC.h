#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdventureStackProperty; }
namespace RPG::GameCore { class TaskContext; }

#define GLMNDBKKMOC_CTOR_OFFSET UNITYSDK_OFFSET(0x16A40060)
#define GLMNDBKKMOC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A40090)
#define GLMNDBKKMOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A400D0)
#define GLMNDBKKMOC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16A40310)
#define GLMNDBKKMOC_TICK_OFFSET UNITYSDK_OFFSET(0x16A40360)

inline static constexpr unsigned int GLMNDBKKMOC_TypeDefinitionIndex = 56004;

	class GLMNDBKKMOC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdventureStackProperty* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureStackProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureStackProperty*))((::PBYTE)hIl2Cpp + GLMNDBKKMOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMNDBKKMOC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMNDBKKMOC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMNDBKKMOC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GLMNDBKKMOC_TICK_OFFSET))(this, a1);
		}

	};
