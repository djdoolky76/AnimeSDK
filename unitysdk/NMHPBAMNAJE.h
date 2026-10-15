#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyGridFightCustomProperty; }
namespace RPG::GameCore { class TaskContext; }

#define NMHPBAMNAJE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC7F190)
#define NMHPBAMNAJE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC7F1C0)

inline static constexpr unsigned int NMHPBAMNAJE_TypeDefinitionIndex = 55203;

	class NMHPBAMNAJE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyGridFightCustomProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyGridFightCustomProperty*))((::PBYTE)hIl2Cpp + NMHPBAMNAJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHPBAMNAJE_ONTASKBEGIN_OFFSET))(this);
		}

	};
