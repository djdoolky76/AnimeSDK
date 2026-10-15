#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNBOAMEBAOE;
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitEntityArtLoad; }
namespace System { template <typename T> class Action_1; }

#define NBBCNHGCNAM_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0xBAB6FA0)
#define NBBCNHGCNAM_CTOR_OFFSET UNITYSDK_OFFSET(0xBAB6CD0)
#define NBBCNHGCNAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAB6D30)
#define NBBCNHGCNAM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAB6E60)
#define NBBCNHGCNAM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBAB6D80)
#define NBBCNHGCNAM_PBAAICNFJJO_OFFSET UNITYSDK_OFFSET(0xBAB6FF0)
#define NBBCNHGCNAM_TICK_OFFSET UNITYSDK_OFFSET(0xBAB6F40)

inline static constexpr unsigned int NBBCNHGCNAM_TypeDefinitionIndex = 58887;

	class NBBCNHGCNAM : public ::GELIALJDFBL
	{
	public:
		::System::Action_1<::RPG::GameCore::GameEntity*>* MNGIAJPCOCG; // 0x18
		::GELIALJDFBL* JLMAKNFAEBH; // 0x20
		::RPG::GameCore::GameEntity* POPNDPJELNO; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::RPG::GameCore::WaitEntityArtLoad* OFKGLJOAMLD; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitEntityArtLoad* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitEntityArtLoad*))((::PBYTE)hIl2Cpp + NBBCNHGCNAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBCNHGCNAM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBCNHGCNAM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBCNHGCNAM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBBCNHGCNAM_TICK_OFFSET))(this, a1);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + NBBCNHGCNAM_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void PBAAICNFJJO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NBBCNHGCNAM_PBAAICNFJJO_OFFSET))(this, a1);
		}

	};
