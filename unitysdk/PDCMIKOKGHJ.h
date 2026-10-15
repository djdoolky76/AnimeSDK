#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByGridFightProperty; }
namespace RPG::GameCore { class TaskContext; }

#define PDCMIKOKGHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC00D5A0)
#define PDCMIKOKGHJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC00D680)

	class PDCMIKOKGHJ
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByGridFightProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByGridFightProperty*))((::PBYTE)hIl2Cpp + PDCMIKOKGHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCMIKOKGHJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
