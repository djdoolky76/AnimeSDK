#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameEventReason.h"
class DPOLNNLAJJG;
class KFELGAIGHAP;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define LIDGJDABLEB_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C0BC0)
#define LIDGJDABLEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6C0BD0)
#define LIDGJDABLEB_MHNIIMAGMNM_OFFSET UNITYSDK_OFFSET(0xB6C1290)
#define LIDGJDABLEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6C0E90)
#define LIDGJDABLEB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6C0D40)
#define LIDGJDABLEB_TICK_OFFSET UNITYSDK_OFFSET(0xB6C10D0)

inline static constexpr unsigned int LIDGJDABLEB_TypeDefinitionIndex = 52847;

	class LIDGJDABLEB : public ::GELIALJDFBL
	{
	public:
		::DPOLNNLAJJG* OFKGLJOAMLD; // 0x18
		::RPG::Client::FiveDimGameInstance* HOADGOKCPDG; // 0x20
		::KFELGAIGHAP* LFLADNLBDMH; // 0x28
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
