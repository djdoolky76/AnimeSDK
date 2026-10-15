#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureRemoveExtraMPCost; }
namespace RPG::GameCore { class TaskContext; }

#define OKBOMCCNEEO_CTOR_OFFSET UNITYSDK_OFFSET(0xBED33A0)
#define OKBOMCCNEEO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBED33D0)

inline static constexpr unsigned int OKBOMCCNEEO_TypeDefinitionIndex = 57910;

	class OKBOMCCNEEO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureRemoveExtraMPCost* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureRemoveExtraMPCost*))((::PBYTE)hIl2Cpp + OKBOMCCNEEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBOMCCNEEO_ONTASKBEGIN_OFFSET))(this);
		}

	};
