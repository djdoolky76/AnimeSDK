#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class PerformanceEndSeq; }
namespace RPG::GameCore { class TaskContext; }

#define EABOJDNOCPM_CFDNBDIGIMO_OFFSET UNITYSDK_OFFSET(0x12670B40)
#define EABOJDNOCPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1266FD80)
#define EABOJDNOCPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1266FDF0)
#define EABOJDNOCPM_EAKIPGLKKPP_OFFSET UNITYSDK_OFFSET(0x12670840)
#define EABOJDNOCPM_INJAFKILCKC_OFFSET UNITYSDK_OFFSET(0x12670670)
#define EABOJDNOCPM_KHPHCEOOJOC_OFFSET UNITYSDK_OFFSET(0x1266FF20)
#define EABOJDNOCPM_LHJPKFDLIIN_OFFSET UNITYSDK_OFFSET(0x12670290)
#define EABOJDNOCPM_NFPGMGONMJE_OFFSET UNITYSDK_OFFSET(0x12670BA0)
#define EABOJDNOCPM_OFKIKMELOBH_OFFSET UNITYSDK_OFFSET(0x126703D0)
#define EABOJDNOCPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12670180)
#define EABOJDNOCPM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x126700F0)
#define EABOJDNOCPM_PDHMAHOCFOJ_OFFSET UNITYSDK_OFFSET(0x12670040)
#define EABOJDNOCPM_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x1266FDA0)
#define EABOJDNOCPM_TICK_OFFSET UNITYSDK_OFFSET(0x126708B0)

	class EABOJDNOCPM : public ::GELIALJDFBL
	{
	public:
		::MJKLAEILHPK OLMFJLICIIA; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
		::GELIALJDFBL* CJHJNLGOJLA; // 0x50
		::RPG::GameCore::PerformanceEndSeq* OFKGLJOAMLD; // 0x58
		::KFELGAIGHAP* JJODLPFGBHE; // 0x60
		::System::UInt32 LBEAFBGHLDN; // 0x68
		::System::Boolean IHFLEJFHICI; // 0x6C
		::System::Boolean CLKPBEGJMMC; // 0x6D
		::System::Boolean BLFKFMFBKHA; // 0x6E
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformanceEndSeq* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformanceEndSeq*))((::PBYTE)hIl2Cpp + EABOJDNOCPM_CTOR_OFFSET))(this, a1, a2);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + EABOJDNOCPM_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABOJDNOCPM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABOJDNOCPM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABOJDNOCPM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EABOJDNOCPM_TICK_OFFSET))(this, a1);
		}

		::System::Void CFDNBDIGIMO(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + EABOJDNOCPM_CFDNBDIGIMO_OFFSET))(this, a1, a2);
		}

		::System::Void OFKIKMELOBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABOJDNOCPM_OFKIKMELOBH_OFFSET))(this);
		}

		::System::Void INJAFKILCKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABOJDNOCPM_INJAFKILCKC_OFFSET))(this);
		}

		::System::Void KHPHCEOOJOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABOJDNOCPM_KHPHCEOOJOC_OFFSET))(this);
		}

		::System::Void EAKIPGLKKPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABOJDNOCPM_EAKIPGLKKPP_OFFSET))(this);
		}

		::System::Void NFPGMGONMJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABOJDNOCPM_NFPGMGONMJE_OFFSET))(this);
		}

		::System::Void LHJPKFDLIIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABOJDNOCPM_LHJPKFDLIIN_OFFSET))(this);
		}

		::System::Void PDHMAHOCFOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABOJDNOCPM_PDHMAHOCFOJ_OFFSET))(this);
		}

	};
