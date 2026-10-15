#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CloseTimeRewindRecreateWorldPage; }
namespace RPG::GameCore { class TaskContext; }

#define KNBKOIKACCE_CTOR_OFFSET UNITYSDK_OFFSET(0xB579760)
#define KNBKOIKACCE_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB579880)
#define KNBKOIKACCE_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB579890)
#define KNBKOIKACCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB579790)

inline static constexpr unsigned int KNBKOIKACCE_TypeDefinitionIndex = 53371;

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
