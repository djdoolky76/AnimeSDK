#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroPuzzleReport; }

#define EELGLEECCLN_CTOR_OFFSET UNITYSDK_OFFSET(0x147F6E30)
#define EELGLEECCLN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x147F6E60)

inline static constexpr unsigned int EELGLEECCLN_TypeDefinitionIndex = 60236;

	class EELGLEECCLN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroPuzzleReport* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroPuzzleReport*))((::PBYTE)hIl2Cpp + EELGLEECCLN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGLEECCLN_ONTASKBEGIN_OFFSET))(this);
		}

	};
