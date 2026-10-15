#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/NEGNPGDLIFB_State.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitBattleResult; }

#define NEGNPGDLIFB_CTOR_OFFSET UNITYSDK_OFFSET(0xBB5D930)
#define NEGNPGDLIFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB5DA10)
#define NEGNPGDLIFB_IMKEDDPCEHJ_OFFSET UNITYSDK_OFFSET(0xBB5E2A0)
#define NEGNPGDLIFB_JELJKMHDNKL_OFFSET UNITYSDK_OFFSET(0xBB5E010)
#define NEGNPGDLIFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB5DB70)
#define NEGNPGDLIFB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB5DDF0)
#define NEGNPGDLIFB_TICK_OFFSET UNITYSDK_OFFSET(0xBB5DF00)

inline static constexpr unsigned int NEGNPGDLIFB_TypeDefinitionIndex = 58875;

	class NEGNPGDLIFB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitBattleResult* OFKGLJOAMLD; // 0x18
		::KFELGAIGHAP* EHOAHCNLNAN; // 0x20
		::KFELGAIGHAP* GIKDFLDAMMG; // 0x28
		::KFELGAIGHAP* CFPDPMEKCPJ; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::NEGNPGDLIFB_State GFHMLIGMANO; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitBattleResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitBattleResult*))((::PBYTE)hIl2Cpp + NEGNPGDLIFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNPGDLIFB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNPGDLIFB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNPGDLIFB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEGNPGDLIFB_TICK_OFFSET))(this, a1);
		}

		::System::Void JELJKMHDNKL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NEGNPGDLIFB_JELJKMHDNKL_OFFSET))(this, a1);
		}

		::System::Void IMKEDDPCEHJ(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + NEGNPGDLIFB_IMKEDDPCEHJ_OFFSET))(this, a1);
		}

	};
