#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Main_ElfWaiterCarrayFood; }
namespace RPG::GameCore { class TaskContext; }

#define MAEDLKAGPIM_CTOR_OFFSET UNITYSDK_OFFSET(0xB84B520)
#define MAEDLKAGPIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB84B550)
#define MAEDLKAGPIM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB84BFA0)

inline static constexpr unsigned int MAEDLKAGPIM_TypeDefinitionIndex = 52167;

	class MAEDLKAGPIM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood*))((::PBYTE)hIl2Cpp + MAEDLKAGPIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEDLKAGPIM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEDLKAGPIM_ONTASKRESET_OFFSET))(this);
		}

	};
