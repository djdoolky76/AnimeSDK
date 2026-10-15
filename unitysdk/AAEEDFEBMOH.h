#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GroupInitMemberEntityPropState; }
namespace RPG::GameCore { class TaskContext; }

#define AAEEDFEBMOH_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C23C0)
#define AAEEDFEBMOH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0C23F0)

inline static constexpr unsigned int AAEEDFEBMOH_TypeDefinitionIndex = 52919;

	class AAEEDFEBMOH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GroupInitMemberEntityPropState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GroupInitMemberEntityPropState*))((::PBYTE)hIl2Cpp + AAEEDFEBMOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEDFEBMOH_ONTASKBEGIN_OFFSET))(this);
		}

	};
