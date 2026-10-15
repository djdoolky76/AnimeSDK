#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FormationMoveResume; }
namespace RPG::GameCore { class TaskContext; }

#define EAOPCGANEOG_CTOR_OFFSET UNITYSDK_OFFSET(0x12CE4870)
#define EAOPCGANEOG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CE48A0)

inline static constexpr unsigned int EAOPCGANEOG_TypeDefinitionIndex = 58132;

	class EAOPCGANEOG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveResume* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveResume*))((::PBYTE)hIl2Cpp + EAOPCGANEOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOPCGANEOG_ONTASKBEGIN_OFFSET))(this);
		}

	};
