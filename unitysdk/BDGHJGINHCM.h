#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StackProperty; }
namespace RPG::GameCore { class TaskContext; }

#define BDGHJGINHCM_CTOR_OFFSET UNITYSDK_OFFSET(0x162F75D0)
#define BDGHJGINHCM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162F7600)
#define BDGHJGINHCM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162F7640)
#define BDGHJGINHCM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x162F7A30)
#define BDGHJGINHCM_TICK_OFFSET UNITYSDK_OFFSET(0x162F7A80)

inline static constexpr unsigned int BDGHJGINHCM_TypeDefinitionIndex = 55646;

	class BDGHJGINHCM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StackProperty* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackProperty*))((::PBYTE)hIl2Cpp + BDGHJGINHCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGHJGINHCM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGHJGINHCM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGHJGINHCM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDGHJGINHCM_TICK_OFFSET))(this, a1);
		}

	};
