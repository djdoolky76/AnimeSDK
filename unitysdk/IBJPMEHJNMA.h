#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerModifierEnterBattle; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBJPMEHJNMA_AEKAIJHJHPA_OFFSET UNITYSDK_OFFSET(0x15E3C740)
#define IBJPMEHJNMA_AGACNDEKMHP_OFFSET UNITYSDK_OFFSET(0x15E3BFB0)
#define IBJPMEHJNMA_BACCCEEHKCF_OFFSET UNITYSDK_OFFSET(0x15E3BF30)
#define IBJPMEHJNMA_CTOR_OFFSET UNITYSDK_OFFSET(0x15E3B650)
#define IBJPMEHJNMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E3B760)
#define IBJPMEHJNMA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E3B7A0)
#define IBJPMEHJNMA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E3C6F0)
#define IBJPMEHJNMA_PMNMMIIBKBB_OFFSET UNITYSDK_OFFSET(0x15E3C170)
#define IBJPMEHJNMA_TICK_OFFSET UNITYSDK_OFFSET(0x15E3C4E0)
#define IBJPMEHJNMA__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x15E3C820)

inline static constexpr unsigned int IBJPMEHJNMA_TypeDefinitionIndex = 55748;

	class IBJPMEHJNMA : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* PGFACPLOACF; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::TriggerModifierEnterBattle* OFKGLJOAMLD; // 0x28
		::GELIALJDFBL* FMNNOJKECOE; // 0x30
		::System::Int32 OMCKJCKJCCA; // 0x38
		::System::Boolean HFAFMLHAJBJ; // 0x3C
		::System::Boolean NEKAHLIFDDI; // 0x3D
		::System::Byte _padding0[0x2];
		::System::Int32 BBPBJFBGDBJ; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerModifierEnterBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerModifierEnterBattle*))((::PBYTE)hIl2Cpp + IBJPMEHJNMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJPMEHJNMA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJPMEHJNMA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJPMEHJNMA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBJPMEHJNMA_TICK_OFFSET))(this, a1);
		}

		::System::Void PMNMMIIBKBB(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + IBJPMEHJNMA_PMNMMIIBKBB_OFFSET))(this, a1, a2);
		}

		::System::Void AGACNDEKMHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJPMEHJNMA_AGACNDEKMHP_OFFSET))(this);
		}

		::System::Void BACCCEEHKCF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IBJPMEHJNMA_BACCCEEHKCF_OFFSET))(this, a1);
		}

		::System::Int32 AEKAIJHJHPA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IBJPMEHJNMA_AEKAIJHJHPA_OFFSET))(this, a1);
		}

		::System::Int32 _OnTaskBegin_b__3_0(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IBJPMEHJNMA__ONTASKBEGIN_B__3_0_OFFSET))(this, a1, a2);
		}

	};
