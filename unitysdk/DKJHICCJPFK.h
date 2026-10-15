#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvEnableFitToGroundIK; }
namespace RPG::GameCore { class TaskContext; }

#define DKJHICCJPFK_CTOR_OFFSET UNITYSDK_OFFSET(0xF888130)
#define DKJHICCJPFK_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xF888340)
#define DKJHICCJPFK_ONSKIP_OFFSET UNITYSDK_OFFSET(0xF888350)
#define DKJHICCJPFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF888160)

	class DKJHICCJPFK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEnableFitToGroundIK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEnableFitToGroundIK*))((::PBYTE)hIl2Cpp + DKJHICCJPFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJHICCJPFK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJHICCJPFK_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJHICCJPFK_ONSKIP_OFFSET))(this);
		}

	};
