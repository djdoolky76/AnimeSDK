#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CloseTimeRewindRecreateWorldPage; }
namespace RPG::GameCore { class TaskContext; }

#define KNBKOIKACCE_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC7370)
#define KNBKOIKACCE_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBDC7490)
#define KNBKOIKACCE_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBDC74A0)
#define KNBKOIKACCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDC73A0)

inline static constexpr unsigned int KNBKOIKACCE_TypeDefinitionIndex = 54533;

	class KNBKOIKACCE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage*))((::PBYTE)hIl2Cpp + KNBKOIKACCE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBKOIKACCE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBKOIKACCE_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBKOIKACCE_ONSKIP_OFFSET))(this);
		}

	};
