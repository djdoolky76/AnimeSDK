#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RefreshFarmElement; }
namespace RPG::GameCore { class TaskContext; }

#define EMJOBGCJKOF_CTOR_OFFSET UNITYSDK_OFFSET(0x155460B0)
#define EMJOBGCJKOF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155460E0)

inline static constexpr unsigned int EMJOBGCJKOF_TypeDefinitionIndex = 58375;

	class EMJOBGCJKOF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshFarmElement* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshFarmElement*))((::PBYTE)hIl2Cpp + EMJOBGCJKOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJOBGCJKOF_ONTASKBEGIN_OFFSET))(this);
		}

	};
