#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DrinkMakerPreBartendPerformanceEndNotify; }
namespace RPG::GameCore { class PlayScreenTransfer; }
namespace RPG::GameCore { class TaskContext; }

#define FCPGOMFCKII_CTOR_OFFSET UNITYSDK_OFFSET(0x156CFF10)
#define FCPGOMFCKII_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156CFF80)
#define FCPGOMFCKII_FCBCGJCCMPE_OFFSET UNITYSDK_OFFSET(0x156D0100)
#define FCPGOMFCKII_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156D0020)
#define FCPGOMFCKII_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156D0150)
#define FCPGOMFCKII_TICK_OFFSET UNITYSDK_OFFSET(0x156CFFC0)

inline static constexpr unsigned int FCPGOMFCKII_TypeDefinitionIndex = 58089;

	class FCPGOMFCKII : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::PlayScreenTransfer* FHBIIIIJOCD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify*))((::PBYTE)hIl2Cpp + FCPGOMFCKII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPGOMFCKII_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCPGOMFCKII_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPGOMFCKII_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPGOMFCKII_ONTASKRESET_OFFSET))(this);
		}

		::System::Void FCBCGJCCMPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPGOMFCKII_FCBCGJCCMPE_OFFSET))(this);
		}

	};
