#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DestroyNPC; }
namespace RPG::GameCore { class TaskContext; }

#define NPJOGIJKCFL_CTOR_OFFSET UNITYSDK_OFFSET(0x19D07D40)
#define NPJOGIJKCFL_DHMJMEBEBNB_OFFSET UNITYSDK_OFFSET(0x19D07DC0)
#define NPJOGIJKCFL_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x19D08660)
#define NPJOGIJKCFL_ONSKIP_OFFSET UNITYSDK_OFFSET(0x19D08670)
#define NPJOGIJKCFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19D07D70)

inline static constexpr unsigned int NPJOGIJKCFL_TypeDefinitionIndex = 59315;

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
