#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PauseToTurnEnd; }
namespace RPG::GameCore { class TaskContext; }

#define EFHGAFLKNJF_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4C090)
#define EFHGAFLKNJF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A4C0A0)
#define EFHGAFLKNJF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A4C0E0)
#define EFHGAFLKNJF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A4C180)
#define EFHGAFLKNJF_TICK_OFFSET UNITYSDK_OFFSET(0x13A4C1D0)

inline static constexpr unsigned int EFHGAFLKNJF_TypeDefinitionIndex = 58250;

	class EFHGAFLKNJF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PauseToTurnEnd* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseToTurnEnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseToTurnEnd*))((::PBYTE)hIl2Cpp + EFHGAFLKNJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHGAFLKNJF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHGAFLKNJF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHGAFLKNJF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFHGAFLKNJF_TICK_OFFSET))(this, a1);
		}

	};
