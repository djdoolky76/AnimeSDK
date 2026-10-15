#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFMChannelReceiverSignalChange; }

#define FGFLNMKGMOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1574F970)
#define FGFLNMKGMOI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1574FD50)
#define FGFLNMKGMOI_IDBABNMHBIC_OFFSET UNITYSDK_OFFSET(0x15750000)
#define FGFLNMKGMOI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1574F9F0)
#define FGFLNMKGMOI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1574FBA0)
#define FGFLNMKGMOI_TICK_OFFSET UNITYSDK_OFFSET(0x1574FFA0)

inline static constexpr unsigned int FGFLNMKGMOI_TypeDefinitionIndex = 53467;

	class FGFLNMKGMOI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitFMChannelReceiverSignalChange* OFKGLJOAMLD; // 0x20
		::KFELGAIGHAP* ECMFFNPIHGD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFMChannelReceiverSignalChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFMChannelReceiverSignalChange*))((::PBYTE)hIl2Cpp + FGFLNMKGMOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFLNMKGMOI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFLNMKGMOI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFLNMKGMOI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGFLNMKGMOI_TICK_OFFSET))(this, a1);
		}

		::System::Void IDBABNMHBIC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGFLNMKGMOI_IDBABNMHBIC_OFFSET))(this, a1);
		}

	};
