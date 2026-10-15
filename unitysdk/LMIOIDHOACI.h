#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByGridFightCustomProperty; }
namespace RPG::GameCore { class TaskContext; }

#define LMIOIDHOACI_CTOR_OFFSET UNITYSDK_OFFSET(0xB7CA040)
#define LMIOIDHOACI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7CA120)

	class LMIOIDHOACI
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByGridFightCustomProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByGridFightCustomProperty*))((::PBYTE)hIl2Cpp + LMIOIDHOACI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIOIDHOACI_ONTASKBEGIN_OFFSET))(this);
		}

	};
