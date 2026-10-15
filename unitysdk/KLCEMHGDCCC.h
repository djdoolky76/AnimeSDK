#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAndProcessBattleResult; }
namespace System::Collections { class IEnumerator; }

#define KLCEMHGDCCC_CTOR_OFFSET UNITYSDK_OFFSET(0xB4E0FF0)
#define KLCEMHGDCCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4E1010)
#define KLCEMHGDCCC_IMKEDDPCEHJ_OFFSET UNITYSDK_OFFSET(0xB4E1910)
#define KLCEMHGDCCC_JELJKMHDNKL_OFFSET UNITYSDK_OFFSET(0xB4E16F0)
#define KLCEMHGDCCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4E10F0)
#define KLCEMHGDCCC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB4E1350)
#define KLCEMHGDCCC_TICK_OFFSET UNITYSDK_OFFSET(0xB4E1450)

	class KLCEMHGDCCC : public ::GELIALJDFBL
	{
	public:
		::System::Collections::IEnumerator* DCIOGOGNJFJ; // 0x18
		::System::Collections::IEnumerator* JHBNJLNCGEJ; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::WaitAndProcessBattleResult* OFKGLJOAMLD; // 0x30
		::System::Boolean PINCHACJCNO; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAndProcessBattleResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAndProcessBattleResult*))((::PBYTE)hIl2Cpp + KLCEMHGDCCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCEMHGDCCC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCEMHGDCCC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCEMHGDCCC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLCEMHGDCCC_TICK_OFFSET))(this, a1);
		}

		::System::Void JELJKMHDNKL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLCEMHGDCCC_JELJKMHDNKL_OFFSET))(this, a1);
		}

		::System::Void IMKEDDPCEHJ(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + KLCEMHGDCCC_IMKEDDPCEHJ_OFFSET))(this, a1);
		}

	};
