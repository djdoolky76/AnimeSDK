#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DestroyNPC; }
namespace RPG::GameCore { class TaskContext; }

#define NPJOGIJKCFL_CTOR_OFFSET UNITYSDK_OFFSET(0xBD0C960)
#define NPJOGIJKCFL_DHMJMEBEBNB_OFFSET UNITYSDK_OFFSET(0xBD0CCC0)
#define NPJOGIJKCFL_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBD0C9E0)
#define NPJOGIJKCFL_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBD0C9F0)
#define NPJOGIJKCFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD0C990)

inline static constexpr unsigned int NPJOGIJKCFL_TypeDefinitionIndex = 58076;

	class NPJOGIJKCFL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyNPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyNPC*))((::PBYTE)hIl2Cpp + NPJOGIJKCFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJOGIJKCFL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJOGIJKCFL_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJOGIJKCFL_ONSKIP_OFFSET))(this);
		}

		::System::Void DHMJMEBEBNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJOGIJKCFL_DHMJMEBEBNB_OFFSET))(this);
		}

	};
