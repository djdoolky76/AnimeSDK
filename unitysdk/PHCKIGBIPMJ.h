#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
class NKCEJINFMPB;
namespace RPG::GameCore { class TaskContext; }

#define PHCKIGBIPMJ_ABKMPGNDAHO_OFFSET UNITYSDK_OFFSET(0xC239FD0)
#define PHCKIGBIPMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC239560)
#define PHCKIGBIPMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC239660)
#define PHCKIGBIPMJ_NFNECIHEOAF_OFFSET UNITYSDK_OFFSET(0xC239E60)
#define PHCKIGBIPMJ_NIBCKCMKMMI_OFFSET UNITYSDK_OFFSET(0xC239F00)
#define PHCKIGBIPMJ_OAGGNEPCCGE_OFFSET UNITYSDK_OFFSET(0xC239D00)
#define PHCKIGBIPMJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2397D0)
#define PHCKIGBIPMJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC239A30)
#define PHCKIGBIPMJ_TICK_OFFSET UNITYSDK_OFFSET(0xC239D80)

inline static constexpr unsigned int PHCKIGBIPMJ_TypeDefinitionIndex = 52828;

	class PHCKIGBIPMJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* MPLMGDDNFLM; // 0x20
		::KFELGAIGHAP* DOGACPGEDDH; // 0x28
		::NKCEJINFMPB* OFKGLJOAMLD; // 0x30
		::System::Boolean IDOBBOEHGLO; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NKCEJINFMPB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NKCEJINFMPB*))((::PBYTE)hIl2Cpp + PHCKIGBIPMJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCKIGBIPMJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCKIGBIPMJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCKIGBIPMJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHCKIGBIPMJ_TICK_OFFSET))(this, a1);
		}

		::System::Void NFNECIHEOAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCKIGBIPMJ_NFNECIHEOAF_OFFSET))(this);
		}

		::System::Void OAGGNEPCCGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCKIGBIPMJ_OAGGNEPCCGE_OFFSET))(this);
		}

		::System::Void NIBCKCMKMMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCKIGBIPMJ_NIBCKCMKMMI_OFFSET))(this);
		}

		::System::Boolean ABKMPGNDAHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCKIGBIPMJ_ABKMPGNDAHO_OFFSET))(this);
		}

	};
