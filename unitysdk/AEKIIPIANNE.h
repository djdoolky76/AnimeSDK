#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BreakMunicipalChat; }
namespace RPG::GameCore { class TaskContext; }

#define AEKIIPIANNE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF01160)
#define AEKIIPIANNE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF01190)

inline static constexpr unsigned int AEKIIPIANNE_TypeDefinitionIndex = 57962;

	class AEKIIPIANNE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BreakMunicipalChat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BreakMunicipalChat*))((::PBYTE)hIl2Cpp + AEKIIPIANNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKIIPIANNE_ONTASKBEGIN_OFFSET))(this);
		}

	};
