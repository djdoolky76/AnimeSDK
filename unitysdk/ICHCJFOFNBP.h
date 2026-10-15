#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchOnPartialFlipDevice; }
namespace RPG::GameCore { class TaskContext; }

#define ICHCJFOFNBP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E41230)
#define ICHCJFOFNBP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E41260)

inline static constexpr unsigned int ICHCJFOFNBP_TypeDefinitionIndex = 52776;

	class ICHCJFOFNBP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchOnPartialFlipDevice* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchOnPartialFlipDevice*))((::PBYTE)hIl2Cpp + ICHCJFOFNBP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHCJFOFNBP_ONTASKBEGIN_OFFSET))(this);
		}

	};
