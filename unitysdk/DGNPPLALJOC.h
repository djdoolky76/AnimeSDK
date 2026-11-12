#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByMaxBP; }
namespace RPG::GameCore { class TaskContext; }

#define DGNPPLALJOC_CTOR_OFFSET UNITYSDK_OFFSET(0xF42AA70)
#define DGNPPLALJOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF42AB50)

inline static constexpr unsigned int DGNPPLALJOC_TypeDefinitionIndex = 56640;

	class DGNPPLALJOC
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByMaxBP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByMaxBP*))((::PBYTE)hIl2Cpp + DGNPPLALJOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNPPLALJOC_ONTASKBEGIN_OFFSET))(this);
		}

	};
