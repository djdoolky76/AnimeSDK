#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropStartFarmElement; }
namespace RPG::GameCore { class TaskContext; }

#define CCOFOBLMANK_CTOR_OFFSET UNITYSDK_OFFSET(0xC74EE50)
#define CCOFOBLMANK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC74EE80)

inline static constexpr unsigned int CCOFOBLMANK_TypeDefinitionIndex = 58357;

	class CCOFOBLMANK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropStartFarmElement* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropStartFarmElement*))((::PBYTE)hIl2Cpp + CCOFOBLMANK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOFOBLMANK_ONTASKBEGIN_OFFSET))(this);
		}

	};
