#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AddGlobalDynamicOffsetIgnoreEntity; }
namespace RPG::GameCore { class TaskContext; }

#define NCCGFODPIFH_CTOR_OFFSET UNITYSDK_OFFSET(0xBAF1A10)
#define NCCGFODPIFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAF1A20)
#define NCCGFODPIFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAF1A60)
#define NCCGFODPIFH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBAF1CF0)
#define NCCGFODPIFH_TICK_OFFSET UNITYSDK_OFFSET(0xBAF1D40)

inline static constexpr unsigned int NCCGFODPIFH_TypeDefinitionIndex = 57860;

	class NCCGFODPIFH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity*))((::PBYTE)hIl2Cpp + NCCGFODPIFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCGFODPIFH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCGFODPIFH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCGFODPIFH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCCGFODPIFH_TICK_OFFSET))(this, a1);
		}

	};
