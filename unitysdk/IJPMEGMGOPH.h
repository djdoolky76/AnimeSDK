#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByBPChange; }
namespace RPG::GameCore { class TaskContext; }

#define IJPMEGMGOPH_CTOR_OFFSET UNITYSDK_OFFSET(0x16473B70)
#define IJPMEGMGOPH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16473C50)

inline static constexpr unsigned int IJPMEGMGOPH_TypeDefinitionIndex = 55407;

	class IJPMEGMGOPH
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBPChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBPChange*))((::PBYTE)hIl2Cpp + IJPMEGMGOPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPMEGMGOPH_ONTASKBEGIN_OFFSET))(this);
		}

	};
