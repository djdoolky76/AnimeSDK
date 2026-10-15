#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::Client { class AdventureGameplayLockWithDelay; }
namespace RPG::GameCore { class TaskContext; }

#define KMIIPKCBNIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB554AF0)
#define KMIIPKCBNIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5550C0)
#define KMIIPKCBNIE_FIFFPCPCEEK_OFFSET UNITYSDK_OFFSET(0xB554EE0)
#define KMIIPKCBNIE_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB555190)
#define KMIIPKCBNIE_LHJPKFDLIIN_OFFSET UNITYSDK_OFFSET(0xB554D50)
#define KMIIPKCBNIE_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB555070)
#define KMIIPKCBNIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB554B80)

inline static constexpr unsigned int KMIIPKCBNIE_TypeDefinitionIndex = 52723;

	class KMIIPKCBNIE
	{
	public:
		::KFELGAIGHAP* MDONAGBCDLG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::AdventureGameplayLockWithDelay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::AdventureGameplayLockWithDelay*))((::PBYTE)hIl2Cpp + KMIIPKCBNIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIIPKCBNIE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIIPKCBNIE_ONSKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIIPKCBNIE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIIPKCBNIE_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void LHJPKFDLIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMIIPKCBNIE_LHJPKFDLIIN_OFFSET))(this, a1);
		}

		::System::Void FIFFPCPCEEK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMIIPKCBNIE_FIFFPCPCEEK_OFFSET))(this, a1);
		}

	};
