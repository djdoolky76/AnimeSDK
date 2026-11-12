#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChimePuzzleDimAllBoard; }
namespace RPG::GameCore { class TaskContext; }

#define JFBGKLLCGEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB98EA50)
#define JFBGKLLCGEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB98EA80)

inline static constexpr unsigned int JFBGKLLCGEJ_TypeDefinitionIndex = 59257;

	class JFBGKLLCGEJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChimePuzzleDimAllBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChimePuzzleDimAllBoard*))((::PBYTE)hIl2Cpp + JFBGKLLCGEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBGKLLCGEJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
