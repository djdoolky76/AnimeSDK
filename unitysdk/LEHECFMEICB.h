#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class BattleAudioSwitch; }
namespace RPG::GameCore { class TaskContext; }

#define LEHECFMEICB_CTOR_OFFSET UNITYSDK_OFFSET(0xB64D0C0)
#define LEHECFMEICB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB64D0D0)
#define LEHECFMEICB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB64D110)
#define LEHECFMEICB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB64D380)
#define LEHECFMEICB_TICK_OFFSET UNITYSDK_OFFSET(0xB64D3D0)

inline static constexpr unsigned int LEHECFMEICB_TypeDefinitionIndex = 57947;

	class LEHECFMEICB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::BattleAudioSwitch* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleAudioSwitch* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleAudioSwitch*))((::PBYTE)hIl2Cpp + LEHECFMEICB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEHECFMEICB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEHECFMEICB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEHECFMEICB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEHECFMEICB_TICK_OFFSET))(this, a1);
		}

	};
