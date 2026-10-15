#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitHipplenGameExit; }

#define GNBCHJONFOM_CTOR_OFFSET UNITYSDK_OFFSET(0x15AF6270)
#define GNBCHJONFOM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AF6410)
#define GNBCHJONFOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AF6280)
#define GNBCHJONFOM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AF63C0)
#define GNBCHJONFOM_TICK_OFFSET UNITYSDK_OFFSET(0x15AF62D0)

inline static constexpr unsigned int GNBCHJONFOM_TypeDefinitionIndex = 52299;

	class GNBCHJONFOM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitHipplenGameExit* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitHipplenGameExit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitHipplenGameExit*))((::PBYTE)hIl2Cpp + GNBCHJONFOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCHJONFOM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNBCHJONFOM_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCHJONFOM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCHJONFOM_DISPOSE_OFFSET))(this);
		}

	};
