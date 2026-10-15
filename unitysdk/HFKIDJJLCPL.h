#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyTeamBoostPointMax; }
namespace RPG::GameCore { class TaskContext; }

#define HFKIDJJLCPL_CTOR_OFFSET UNITYSDK_OFFSET(0x15C7B990)
#define HFKIDJJLCPL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C7B9C0)

inline static constexpr unsigned int HFKIDJJLCPL_TypeDefinitionIndex = 55220;

	class HFKIDJJLCPL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyTeamBoostPointMax* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyTeamBoostPointMax*))((::PBYTE)hIl2Cpp + HFKIDJJLCPL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKIDJJLCPL_ONTASKBEGIN_OFFSET))(this);
		}

	};
