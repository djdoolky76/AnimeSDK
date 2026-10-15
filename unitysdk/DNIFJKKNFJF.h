#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class InfiniteWaveNextMonsterId; }
namespace RPG::GameCore { class TaskContext; }

#define DNIFJKKNFJF_CTOR_OFFSET UNITYSDK_OFFSET(0x11962840)
#define DNIFJKKNFJF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11962A80)

	class DNIFJKKNFJF
	{
	public:
		::RPG::GameCore::StringHash KLDJEHDJOBA; // 0x28
		::RPG::GameCore::StringHash OCNBONDLKOF; // 0x2C
		::RPG::GameCore::StringHash FOLGINKOCIB; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfiniteWaveNextMonsterId* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfiniteWaveNextMonsterId*))((::PBYTE)hIl2Cpp + DNIFJKKNFJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIFJKKNFJF_ONTASKBEGIN_OFFSET))(this);
		}

	};
