#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByStatusResistance; }
namespace RPG::GameCore { class TaskContext; }

#define GDGJIPCMLDA_CTOR_OFFSET UNITYSDK_OFFSET(0x15991540)
#define GDGJIPCMLDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15991620)

inline static constexpr unsigned int GDGJIPCMLDA_TypeDefinitionIndex = 55471;

	class GDGJIPCMLDA
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByStatusResistance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByStatusResistance*))((::PBYTE)hIl2Cpp + GDGJIPCMLDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGJIPCMLDA_ONTASKBEGIN_OFFSET))(this);
		}

	};
