#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class PerformanceEndSeq; }
namespace RPG::GameCore { class TaskContext; }

#define EABOJDNOCPM_CFDNBDIGIMO_OFFSET UNITYSDK_OFFSET(0x181C66F0)
#define EABOJDNOCPM_CTOR_OFFSET UNITYSDK_OFFSET(0x181C59C0)
#define EABOJDNOCPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181C5A30)
#define EABOJDNOCPM_EAKIPGLKKPP_OFFSET UNITYSDK_OFFSET(0x181C6430)
#define EABOJDNOCPM_INJAFKILCKC_OFFSET UNITYSDK_OFFSET(0x181C62B0)
#define EABOJDNOCPM_KHPHCEOOJOC_OFFSET UNITYSDK_OFFSET(0x181C5B60)
#define EABOJDNOCPM_LHJPKFDLIIN_OFFSET UNITYSDK_OFFSET(0x181C5ED0)
#define EABOJDNOCPM_NFPGMGONMJE_OFFSET UNITYSDK_OFFSET(0x181C6750)
#define EABOJDNOCPM_OFKIKMELOBH_OFFSET UNITYSDK_OFFSET(0x181C6010)
#define EABOJDNOCPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x181C5DC0)
#define EABOJDNOCPM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x181C5D30)
#define EABOJDNOCPM_PDHMAHOCFOJ_OFFSET UNITYSDK_OFFSET(0x181C5C80)
#define EABOJDNOCPM_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x181C59E0)
#define EABOJDNOCPM_TICK_OFFSET UNITYSDK_OFFSET(0x181C64A0)

inline static constexpr unsigned int EABOJDNOCPM_TypeDefinitionIndex = 54233;

	class EABOJDNOCPM : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* JJODLPFGBHE; // 0x18
		::GELIALJDFBL* CJHJNLGOJLA; // 0x20
		::MJKLAEILHPK OLMFJLICIIA; // 0x28
		::RPG::GameCore::PerformanceEndSeq* OFKGLJOAMLD; // 0x58
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x60
		::System::Boolean IHFLEJFHICI; // 0x68
		::System::Boolean CLKPBEGJMMC; // 0x69
		::System::Boolean BLFKFMFBKHA; // 0x6A
		::System::Byte _padding0[0x1];
		::System::UInt32 LBEAFBGHLDN; // 0x6C
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
