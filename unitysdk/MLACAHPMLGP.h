#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowGridFightProgressToWhitebox; }
namespace RPG::GameCore { class TaskContext; }

#define MLACAHPMLGP_CTOR_OFFSET UNITYSDK_OFFSET(0xC25FC90)
#define MLACAHPMLGP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC25FCC0)

inline static constexpr unsigned int MLACAHPMLGP_TypeDefinitionIndex = 59885;

	class MLACAHPMLGP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGridFightProgressToWhitebox* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGridFightProgressToWhitebox*))((::PBYTE)hIl2Cpp + MLACAHPMLGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLACAHPMLGP_ONTASKBEGIN_OFFSET))(this);
		}

	};
