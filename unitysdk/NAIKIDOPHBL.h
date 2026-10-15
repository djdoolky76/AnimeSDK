#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByTournFloorType; }
namespace RPG::GameCore { class TaskContext; }

#define NAIKIDOPHBL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA97790)
#define NAIKIDOPHBL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA97870)

inline static constexpr unsigned int NAIKIDOPHBL_TypeDefinitionIndex = 55476;

	class NAIKIDOPHBL
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByTournFloorType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByTournFloorType*))((::PBYTE)hIl2Cpp + NAIKIDOPHBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIKIDOPHBL_ONTASKBEGIN_OFFSET))(this);
		}

	};
