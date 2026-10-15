#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitInfiniteWaveRefresh; }

#define PIJEPDLEBGH_CPKKAIDGOJD_OFFSET UNITYSDK_OFFSET(0xC2623A0)
#define PIJEPDLEBGH_CTOR_OFFSET UNITYSDK_OFFSET(0xC261F10)
#define PIJEPDLEBGH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC261F20)
#define PIJEPDLEBGH_MFGCCOMGJNC_OFFSET UNITYSDK_OFFSET(0xC261FC0)
#define PIJEPDLEBGH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC262230)
#define PIJEPDLEBGH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2624A0)
#define PIJEPDLEBGH_OPDLLNNEBPF_OFFSET UNITYSDK_OFFSET(0xC262320)
#define PIJEPDLEBGH_TICK_OFFSET UNITYSDK_OFFSET(0xC261F60)

inline static constexpr unsigned int PIJEPDLEBGH_TypeDefinitionIndex = 55116;

	class PIJEPDLEBGH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitInfiniteWaveRefresh* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitInfiniteWaveRefresh* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitInfiniteWaveRefresh*))((::PBYTE)hIl2Cpp + PIJEPDLEBGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJEPDLEBGH_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIJEPDLEBGH_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJEPDLEBGH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void MFGCCOMGJNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJEPDLEBGH_MFGCCOMGJNC_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJEPDLEBGH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void CPKKAIDGOJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJEPDLEBGH_CPKKAIDGOJD_OFFSET))(this);
		}

		::System::Boolean OPDLLNNEBPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJEPDLEBGH_OPDLLNNEBPF_OFFSET))(this);
		}

	};
