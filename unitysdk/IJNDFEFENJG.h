#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByMagicUnitCounter; }
namespace RPG::GameCore { class TaskContext; }

#define IJNDFEFENJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1646FA50)
#define IJNDFEFENJG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1646FB30)

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
