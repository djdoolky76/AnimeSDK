#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_SetAlertLevel; }
namespace RPG::GameCore { class TaskContext; }

#define MFDKIIOMMKD_CTOR_OFFSET UNITYSDK_OFFSET(0x17C7B360)
#define MFDKIIOMMKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C7B390)
#define MFDKIIOMMKD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C7B660)

inline static constexpr unsigned int MFDKIIOMMKD_TypeDefinitionIndex = 53358;

	class MFDKIIOMMKD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_SetAlertLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_SetAlertLevel*))((::PBYTE)hIl2Cpp + MFDKIIOMMKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDKIIOMMKD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDKIIOMMKD_ONTASKRESET_OFFSET))(this);
		}

	};
