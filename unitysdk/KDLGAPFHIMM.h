#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByVersusBar; }
namespace RPG::GameCore { class TaskContext; }

#define KDLGAPFHIMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB365DD0)
#define KDLGAPFHIMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB365EB0)

	class KDLGAPFHIMM
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByVersusBar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByVersusBar*))((::PBYTE)hIl2Cpp + KDLGAPFHIMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLGAPFHIMM_ONTASKBEGIN_OFFSET))(this);
		}

	};
