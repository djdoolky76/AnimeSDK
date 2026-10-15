#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CloseTimeRewindPage; }
namespace RPG::GameCore { class TaskContext; }

#define FABPAPJEAEM_CTOR_OFFSET UNITYSDK_OFFSET(0x15664A60)
#define FABPAPJEAEM_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15664B20)
#define FABPAPJEAEM_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15664B30)
#define FABPAPJEAEM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15664A90)

inline static constexpr unsigned int FABPAPJEAEM_TypeDefinitionIndex = 53370;

	class FABPAPJEAEM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CloseTimeRewindPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CloseTimeRewindPage*))((::PBYTE)hIl2Cpp + FABPAPJEAEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FABPAPJEAEM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FABPAPJEAEM_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FABPAPJEAEM_ONSKIP_OFFSET))(this);
		}

	};
