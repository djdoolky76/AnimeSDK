#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableAdvEntityDitherWithPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define NJBMPECKHJH_CTOR_OFFSET UNITYSDK_OFFSET(0xBC091C0)
#define NJBMPECKHJH_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBC09330)
#define NJBMPECKHJH_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBC09340)
#define NJBMPECKHJH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC091F0)

inline static constexpr unsigned int NJBMPECKHJH_TypeDefinitionIndex = 52741;

	class NJBMPECKHJH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableAdvEntityDitherWithPlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableAdvEntityDitherWithPlayer*))((::PBYTE)hIl2Cpp + NJBMPECKHJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBMPECKHJH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBMPECKHJH_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBMPECKHJH_ONSKIP_OFFSET))(this);
		}

	};
