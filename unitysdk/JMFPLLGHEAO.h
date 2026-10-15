#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class CaptureNPCToCharacter; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TaskContext; }

#define JMFPLLGHEAO_AJOKBDAPLLL_OFFSET UNITYSDK_OFFSET(0xB262D40)
#define JMFPLLGHEAO_CTOR_OFFSET UNITYSDK_OFFSET(0xB262A60)
#define JMFPLLGHEAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB262A70)
#define JMFPLLGHEAO_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0xB2632E0)
#define JMFPLLGHEAO_LLBOANANONG_OFFSET UNITYSDK_OFFSET(0xB263530)
#define JMFPLLGHEAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB262B30)
#define JMFPLLGHEAO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2631C0)
#define JMFPLLGHEAO_TICK_OFFSET UNITYSDK_OFFSET(0xB263280)

	class JMFPLLGHEAO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameWorld* COMCKNELAFC; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::CaptureNPCToCharacter* OFKGLJOAMLD; // 0x28
		::System::Boolean EPOGIOAMOJI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CaptureNPCToCharacter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CaptureNPCToCharacter*))((::PBYTE)hIl2Cpp + JMFPLLGHEAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPLLGHEAO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPLLGHEAO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPLLGHEAO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMFPLLGHEAO_TICK_OFFSET))(this, a1);
		}

		::System::Void KIGKKADGFCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JMFPLLGHEAO_KIGKKADGFCC_OFFSET))(this, a1);
		}

		::System::Boolean AJOKBDAPLLL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPLLGHEAO_AJOKBDAPLLL_OFFSET))(this);
		}

		::System::Void LLBOANANONG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPLLGHEAO_LLBOANANONG_OFFSET))(this);
		}

	};
