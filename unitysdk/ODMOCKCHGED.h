#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterTriggerAnimState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define ODMOCKCHGED_BOLJDDJDNII_OFFSET UNITYSDK_OFFSET(0xC6A5E50)
#define ODMOCKCHGED_CTOR_OFFSET UNITYSDK_OFFSET(0xC6A5DD0)
#define ODMOCKCHGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6A5DE0)
#define ODMOCKCHGED_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC6A5E40)
#define ODMOCKCHGED_HGOJNFKDIMA_OFFSET UNITYSDK_OFFSET(0xC6A6740)
#define ODMOCKCHGED_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC6A6B60)
#define ODMOCKCHGED_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC6A69F0)
#define ODMOCKCHGED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC6A6080)
#define ODMOCKCHGED_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC6A6870)
#define ODMOCKCHGED_TICK_OFFSET UNITYSDK_OFFSET(0xC6A68C0)

inline static constexpr unsigned int ODMOCKCHGED_TypeDefinitionIndex = 59249;

	class ODMOCKCHGED : public ::GELIALJDFBL
	{
	public:
		::System::String* MPLHNHFLCNK; // 0x18
		::RPG::GameCore::AdventureCharacterController* MNBAPCPACFP; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::CharacterTriggerAnimState* OFKGLJOAMLD; // 0x30
		::RPG::Client::MockAnimator* APPGGMLEPLN; // 0x38
		::System::Int32 HFHILHOCPNL; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterTriggerAnimState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterTriggerAnimState*))((::PBYTE)hIl2Cpp + ODMOCKCHGED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMOCKCHGED_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMOCKCHGED_GET_FORCESKIP_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* BOLJDDJDNII()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMOCKCHGED_BOLJDDJDNII_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMOCKCHGED_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void HGOJNFKDIMA(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ODMOCKCHGED_HGOJNFKDIMA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMOCKCHGED_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODMOCKCHGED_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMOCKCHGED_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODMOCKCHGED_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

	};
