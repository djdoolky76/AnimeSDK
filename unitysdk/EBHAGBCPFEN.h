#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetCurrentTurnActionEntity; }
namespace RPG::GameCore { class TaskContext; }

#define EBHAGBCPFEN_CTOR_OFFSET UNITYSDK_OFFSET(0x12CEBA10)
#define EBHAGBCPFEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CEBA20)
#define EBHAGBCPFEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CEBA60)
#define EBHAGBCPFEN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CEBB30)
#define EBHAGBCPFEN_TICK_OFFSET UNITYSDK_OFFSET(0x12CEBB80)

inline static constexpr unsigned int EBHAGBCPFEN_TypeDefinitionIndex = 55384;

	class EBHAGBCPFEN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetCurrentTurnActionEntity* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCurrentTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCurrentTurnActionEntity*))((::PBYTE)hIl2Cpp + EBHAGBCPFEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHAGBCPFEN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHAGBCPFEN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHAGBCPFEN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBHAGBCPFEN_TICK_OFFSET))(this, a1);
		}

	};
