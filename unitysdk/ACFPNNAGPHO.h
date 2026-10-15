#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FormationMovePause; }
namespace RPG::GameCore { class TaskContext; }

#define ACFPNNAGPHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB11DAD0)
#define ACFPNNAGPHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB11DB00)

inline static constexpr unsigned int ACFPNNAGPHO_TypeDefinitionIndex = 58131;

	class ACFPNNAGPHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMovePause* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMovePause*))((::PBYTE)hIl2Cpp + ACFPNNAGPHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFPNNAGPHO_ONTASKBEGIN_OFFSET))(this);
		}

	};
