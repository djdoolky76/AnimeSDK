#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WriteCustomValueToStatistic; }

#define MBBCOABFGON_CTOR_OFFSET UNITYSDK_OFFSET(0xB852BA0)
#define MBBCOABFGON_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB852BD0)

inline static constexpr unsigned int MBBCOABFGON_TypeDefinitionIndex = 55816;

	class MBBCOABFGON
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WriteCustomValueToStatistic* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WriteCustomValueToStatistic*))((::PBYTE)hIl2Cpp + MBBCOABFGON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBCOABFGON_ONTASKBEGIN_OFFSET))(this);
		}

	};
