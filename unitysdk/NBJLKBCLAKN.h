#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetLevel; }
namespace RPG::GameCore { class TaskContext; }

#define NBJLKBCLAKN_CTOR_OFFSET UNITYSDK_OFFSET(0xBAC9FA0)
#define NBJLKBCLAKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAC9FD0)

inline static constexpr unsigned int NBJLKBCLAKN_TypeDefinitionIndex = 55529;

	class NBJLKBCLAKN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLevel*))((::PBYTE)hIl2Cpp + NBJLKBCLAKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLKBCLAKN_ONTASKBEGIN_OFFSET))(this);
		}

	};
