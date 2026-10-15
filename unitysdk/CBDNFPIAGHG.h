#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class ConvinceWaitTrickSkill; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CBDNFPIAGHG_CTOR_OFFSET UNITYSDK_OFFSET(0xC498FD0)
#define CBDNFPIAGHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC499120)
#define CBDNFPIAGHG_KAKIAHJFAKA_OFFSET UNITYSDK_OFFSET(0xC499170)
#define CBDNFPIAGHG_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0xC4993F0)
#define CBDNFPIAGHG_MGHBLMNCEMG_OFFSET UNITYSDK_OFFSET(0xC4992F0)
#define CBDNFPIAGHG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC499270)
#define CBDNFPIAGHG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC499340)
#define CBDNFPIAGHG_PDFBFNFBMLF_OFFSET UNITYSDK_OFFSET(0xC499010)
#define CBDNFPIAGHG_TICK_OFFSET UNITYSDK_OFFSET(0xC499390)

inline static constexpr unsigned int CBDNFPIAGHG_TypeDefinitionIndex = 52716;

	class CBDNFPIAGHG : public ::GELIALJDFBL
	{
	public:
		::System::String* IFDOLFKAOLA; // 0x18
		::RPG::GameCore::ConvinceWaitTrickSkill* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Boolean NCDPNHDBKKG; // 0x30
		::System::Boolean GGJECIOIBCJ; // 0x31
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceWaitTrickSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceWaitTrickSkill*))((::PBYTE)hIl2Cpp + CBDNFPIAGHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDNFPIAGHG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDNFPIAGHG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDNFPIAGHG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBDNFPIAGHG_TICK_OFFSET))(this, a1);
		}

		::System::Void PDFBFNFBMLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDNFPIAGHG_PDFBFNFBMLF_OFFSET))(this);
		}

		::System::Void KAKIAHJFAKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDNFPIAGHG_KAKIAHJFAKA_OFFSET))(this);
		}

		::System::Void KIGKKADGFCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CBDNFPIAGHG_KIGKKADGFCC_OFFSET))(this, a1);
		}

		::System::Void MGHBLMNCEMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDNFPIAGHG_MGHBLMNCEMG_OFFSET))(this);
		}

	};
