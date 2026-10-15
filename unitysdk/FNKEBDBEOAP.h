#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTeamLocationIndexType; }
namespace RPG::GameCore { class TaskContext; }

#define FNKEBDBEOAP_CTOR_OFFSET UNITYSDK_OFFSET(0x15869590)
#define FNKEBDBEOAP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x158695C0)

inline static constexpr unsigned int FNKEBDBEOAP_TypeDefinitionIndex = 54693;

	class FNKEBDBEOAP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTeamLocationIndexType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTeamLocationIndexType*))((::PBYTE)hIl2Cpp + FNKEBDBEOAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKEBDBEOAP_EVALUATE_OFFSET))(this);
		}

	};
