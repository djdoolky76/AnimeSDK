#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FormationMoveToStation; }
namespace RPG::GameCore { class TaskContext; }

#define DNEIKMAKGFD_CTOR_OFFSET UNITYSDK_OFFSET(0x119463B0)
#define DNEIKMAKGFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x119463E0)

inline static constexpr unsigned int DNEIKMAKGFD_TypeDefinitionIndex = 58135;

	class DNEIKMAKGFD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveToStation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveToStation*))((::PBYTE)hIl2Cpp + DNEIKMAKGFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEIKMAKGFD_ONTASKBEGIN_OFFSET))(this);
		}

	};
