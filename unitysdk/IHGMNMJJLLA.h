#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class ConvinceWaitAllTurnFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define IHGMNMJJLLA_CTOR_OFFSET UNITYSDK_OFFSET(0x173D5530)
#define IHGMNMJJLLA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x173D56A0)
#define IHGMNMJJLLA_KAKIAHJFAKA_OFFSET UNITYSDK_OFFSET(0x173D56F0)
#define IHGMNMJJLLA_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0x173D5970)
#define IHGMNMJJLLA_MGHBLMNCEMG_OFFSET UNITYSDK_OFFSET(0x173D5870)
#define IHGMNMJJLLA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x173D57F0)
#define IHGMNMJJLLA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x173D58C0)
#define IHGMNMJJLLA_PDFBFNFBMLF_OFFSET UNITYSDK_OFFSET(0x173D5590)
#define IHGMNMJJLLA_TICK_OFFSET UNITYSDK_OFFSET(0x173D5910)

inline static constexpr unsigned int IHGMNMJJLLA_TypeDefinitionIndex = 53859;

	class IHGMNMJJLLA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ConvinceWaitAllTurnFinish* OFKGLJOAMLD; // 0x20
		::System::String* IFDOLFKAOLA; // 0x28
		::System::Boolean NCDPNHDBKKG; // 0x30
		::System::Boolean GGJECIOIBCJ; // 0x31
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceWaitAllTurnFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceWaitAllTurnFinish*))((::PBYTE)hIl2Cpp + IHGMNMJJLLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGMNMJJLLA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGMNMJJLLA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGMNMJJLLA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IHGMNMJJLLA_TICK_OFFSET))(this, a1);
		}

		::System::Void PDFBFNFBMLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGMNMJJLLA_PDFBFNFBMLF_OFFSET))(this);
		}

		::System::Void KAKIAHJFAKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGMNMJJLLA_KAKIAHJFAKA_OFFSET))(this);
		}

		::System::Void KIGKKADGFCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + IHGMNMJJLLA_KIGKKADGFCC_OFFSET))(this, a1);
		}

		::System::Void MGHBLMNCEMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGMNMJJLLA_MGHBLMNCEMG_OFFSET))(this);
		}

	};
