#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetShenJunActionBar; }
namespace RPG::GameCore { class TaskContext; }

#define DIOGHLGFFKB_CTOR_OFFSET UNITYSDK_OFFSET(0xF220220)
#define DIOGHLGFFKB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF220230)
#define DIOGHLGFFKB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF220270)
#define DIOGHLGFFKB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF2202D0)
#define DIOGHLGFFKB_TICK_OFFSET UNITYSDK_OFFSET(0xF220320)

inline static constexpr unsigned int DIOGHLGFFKB_TypeDefinitionIndex = 56418;

	class DIOGHLGFFKB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetShenJunActionBar* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetShenJunActionBar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetShenJunActionBar*))((::PBYTE)hIl2Cpp + DIOGHLGFFKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOGHLGFFKB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOGHLGFFKB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOGHLGFFKB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIOGHLGFFKB_TICK_OFFSET))(this, a1);
		}

	};
