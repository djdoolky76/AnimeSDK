#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DEEJKBIMHAA;
class OONGDLIDJJJ;
namespace RPG::GameCore { class AISelector; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UseSequencedSkill; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFBMOOPNEEP_BHCMIIAHNCB_OFFSET UNITYSDK_OFFSET(0xB388D40)
#define KFBMOOPNEEP_CTOR_OFFSET UNITYSDK_OFFSET(0xB3886F0)
#define KFBMOOPNEEP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB388730)
#define KFBMOOPNEEP_FEOIFJONLCH_OFFSET UNITYSDK_OFFSET(0xB389420)
#define KFBMOOPNEEP_IBCBIAKDGMO_OFFSET UNITYSDK_OFFSET(0xB3890F0)
#define KFBMOOPNEEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB388770)
#define KFBMOOPNEEP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB389370)
#define KFBMOOPNEEP_TICK_OFFSET UNITYSDK_OFFSET(0xB3893C0)

	class KFBMOOPNEEP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::UseSequencedSkill* OFKGLJOAMLD; // 0x18
		::OONGDLIDJJJ* LAPCOHEMCJN; // 0x20
		::DEEJKBIMHAA* AIJGGLCAEON; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UseSequencedSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UseSequencedSkill*))((::PBYTE)hIl2Cpp + KFBMOOPNEEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBMOOPNEEP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBMOOPNEEP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBMOOPNEEP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFBMOOPNEEP_TICK_OFFSET))(this, a1);
		}

		::System::Void FEOIFJONLCH(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::AISelector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AISelector*))((::PBYTE)hIl2Cpp + KFBMOOPNEEP_FEOIFJONLCH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntityList* BHCMIIAHNCB(::System::Int32 a1)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFBMOOPNEEP_BHCMIIAHNCB_OFFSET))(this, a1);
		}

		::System::Void IBCBIAKDGMO(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KFBMOOPNEEP_IBCBIAKDGMO_OFFSET))(this, a1, a2);
		}

	};
