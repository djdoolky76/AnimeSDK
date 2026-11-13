#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByMagicUnitCounter; }
namespace RPG::GameCore { class TaskContext; }

#define IJNDFEFENJG_CTOR_OFFSET UNITYSDK_OFFSET(0x18060600)
#define IJNDFEFENJG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x180606E0)

inline static constexpr unsigned int IJNDFEFENJG_TypeDefinitionIndex = 56639;

	class IJNDFEFENJG
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByMagicUnitCounter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByMagicUnitCounter*))((::PBYTE)hIl2Cpp + IJNDFEFENJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNDFEFENJG_ONTASKBEGIN_OFFSET))(this);
		}

	};
