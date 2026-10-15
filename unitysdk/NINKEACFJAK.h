#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByDamageDataProperty; }
namespace RPG::GameCore { class TaskContext; }

#define NINKEACFJAK_CTOR_OFFSET UNITYSDK_OFFSET(0xBBFE9B0)
#define NINKEACFJAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBFEA90)

	class NINKEACFJAK
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByDamageDataProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByDamageDataProperty*))((::PBYTE)hIl2Cpp + NINKEACFJAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINKEACFJAK_ONTASKBEGIN_OFFSET))(this);
		}

	};
