#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerHitTarget; }

#define FNGLHFPADGA_CTOR_OFFSET UNITYSDK_OFFSET(0x15864C50)
#define FNGLHFPADGA_NICNFGOAOHI_OFFSET UNITYSDK_OFFSET(0x15864CD0)
#define FNGLHFPADGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15864C80)

inline static constexpr unsigned int FNGLHFPADGA_TypeDefinitionIndex = 58789;

	class FNGLHFPADGA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerHitTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerHitTarget*))((::PBYTE)hIl2Cpp + FNGLHFPADGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGLHFPADGA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void NICNFGOAOHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGLHFPADGA_NICNFGOAOHI_OFFSET))(this);
		}

	};
