#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class ConvinceWaitTurnBegin; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define MABAODLFNPL_CTOR_OFFSET UNITYSDK_OFFSET(0xC09ED90)
#define MABAODLFNPL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC09EF80)
#define MABAODLFNPL_KAKIAHJFAKA_OFFSET UNITYSDK_OFFSET(0xC09EFE0)
#define MABAODLFNPL_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0xC09F2F0)
#define MABAODLFNPL_LDBOFIJDJOE_OFFSET UNITYSDK_OFFSET(0xC09F4E0)
#define MABAODLFNPL_MGHBLMNCEMG_OFFSET UNITYSDK_OFFSET(0xC09F140)
#define MABAODLFNPL_MIHPPLBCDBL_OFFSET UNITYSDK_OFFSET(0xC09F690)
#define MABAODLFNPL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC09F0E0)
#define MABAODLFNPL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC09F1F0)
#define MABAODLFNPL_PDFBFNFBMLF_OFFSET UNITYSDK_OFFSET(0xC09EE70)
#define MABAODLFNPL_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xC09F2A0)
#define MABAODLFNPL_TICK_OFFSET UNITYSDK_OFFSET(0xC09F240)

inline static constexpr unsigned int MABAODLFNPL_TypeDefinitionIndex = 53861;

	class MABAODLFNPL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ConvinceWaitTurnBegin* OFKGLJOAMLD; // 0x18
		::System::String* IFDOLFKAOLA; // 0x20
		::GELIALJDFBL* DMKAOCCJEBG; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Boolean GGJECIOIBCJ; // 0x38
		::System::Boolean NCDPNHDBKKG; // 0x39
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceWaitTurnBegin* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceWaitTurnBegin*))((::PBYTE)hIl2Cpp + MABAODLFNPL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABAODLFNPL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABAODLFNPL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABAODLFNPL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MABAODLFNPL_TICK_OFFSET))(this, a1);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + MABAODLFNPL_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void PDFBFNFBMLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABAODLFNPL_PDFBFNFBMLF_OFFSET))(this);
		}

		::System::Void KAKIAHJFAKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABAODLFNPL_KAKIAHJFAKA_OFFSET))(this);
		}

		::System::Void KIGKKADGFCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + MABAODLFNPL_KIGKKADGFCC_OFFSET))(this, a1);
		}

		::System::Void MGHBLMNCEMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABAODLFNPL_MGHBLMNCEMG_OFFSET))(this);
		}

		::System::Boolean LDBOFIJDJOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MABAODLFNPL_LDBOFIJDJOE_OFFSET))(this);
		}

		::System::Void MIHPPLBCDBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABAODLFNPL_MIHPPLBCDBL_OFFSET))(this);
		}

	};
