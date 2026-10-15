#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameEventReason.h"
class DPOLNNLAJJG;
class KFELGAIGHAP;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define LIDGJDABLEB_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C77C0)
#define LIDGJDABLEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6C77D0)
#define LIDGJDABLEB_MHNIIMAGMNM_OFFSET UNITYSDK_OFFSET(0xB6C7E90)
#define LIDGJDABLEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6C7A90)
#define LIDGJDABLEB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6C7940)
#define LIDGJDABLEB_TICK_OFFSET UNITYSDK_OFFSET(0xB6C7CD0)

	class LIDGJDABLEB : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* LFLADNLBDMH; // 0x18
		::RPG::Client::FiveDimGameInstance* HOADGOKCPDG; // 0x20
		::DPOLNNLAJJG* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::KFELGAIGHAP* BCEOFGNHABE; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DPOLNNLAJJG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DPOLNNLAJJG*))((::PBYTE)hIl2Cpp + LIDGJDABLEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDGJDABLEB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDGJDABLEB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDGJDABLEB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LIDGJDABLEB_TICK_OFFSET))(this, a1);
		}

		::System::Void MHNIIMAGMNM(::RPG::Client::LittleGame::FiveDim::MiniGameEventReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameEventReason))((::PBYTE)hIl2Cpp + LIDGJDABLEB_MHNIIMAGMNM_OFFSET))(this, a1);
		}

	};
