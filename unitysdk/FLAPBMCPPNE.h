#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeleportToFiveDimGame; }

#define FLAPBMCPPNE_CTOR_OFFSET UNITYSDK_OFFSET(0x15827220)
#define FLAPBMCPPNE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15827230)
#define FLAPBMCPPNE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15827280)
#define FLAPBMCPPNE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15827660)
#define FLAPBMCPPNE_TICK_OFFSET UNITYSDK_OFFSET(0x158276B0)

inline static constexpr unsigned int FLAPBMCPPNE_TypeDefinitionIndex = 52894;

	class FLAPBMCPPNE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TeleportToFiveDimGame* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TeleportToFiveDimGame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TeleportToFiveDimGame*))((::PBYTE)hIl2Cpp + FLAPBMCPPNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAPBMCPPNE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAPBMCPPNE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAPBMCPPNE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLAPBMCPPNE_TICK_OFFSET))(this, a1);
		}

	};
