#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EDHPIGIAOLE;
namespace RPG::GameCore { class SwitchHandCoinFlyTo; }
namespace RPG::GameCore { class TaskContext; }

#define ICJEKEHMGPI_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x15E4F700)
#define ICJEKEHMGPI_CTOR_OFFSET UNITYSDK_OFFSET(0x15E4F160)
#define ICJEKEHMGPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E4F170)
#define ICJEKEHMGPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E4F250)
#define ICJEKEHMGPI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E4F670)
#define ICJEKEHMGPI_TICK_OFFSET UNITYSDK_OFFSET(0x15E4F1F0)

	class ICJEKEHMGPI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwitchHandCoinFlyTo* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::EDHPIGIAOLE* PDGCCOOOJDO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandCoinFlyTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandCoinFlyTo*))((::PBYTE)hIl2Cpp + ICJEKEHMGPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJEKEHMGPI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICJEKEHMGPI_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJEKEHMGPI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJEKEHMGPI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BJLJAHMLKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJEKEHMGPI_BJLJAHMLKIO_OFFSET))(this);
		}

	};
