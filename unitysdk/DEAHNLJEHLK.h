#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FormationMoveSetGroupToStation; }
namespace RPG::GameCore { class TaskContext; }

#define DEAHNLJEHLK_CTOR_OFFSET UNITYSDK_OFFSET(0xE4F3230)
#define DEAHNLJEHLK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4F3260)

inline static constexpr unsigned int DEAHNLJEHLK_TypeDefinitionIndex = 58133;

	class DEAHNLJEHLK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveSetGroupToStation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveSetGroupToStation*))((::PBYTE)hIl2Cpp + DEAHNLJEHLK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAHNLJEHLK_ONTASKBEGIN_OFFSET))(this);
		}

	};
