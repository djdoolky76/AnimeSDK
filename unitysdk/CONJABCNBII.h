#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ModifyMazePuzzleChallenge; }
namespace RPG::GameCore { class TaskContext; }

#define CONJABCNBII_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB9B10)
#define CONJABCNBII_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCB9B20)
#define CONJABCNBII_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCB9B60)
#define CONJABCNBII_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDCB9E40)
#define CONJABCNBII_TICK_OFFSET UNITYSDK_OFFSET(0xDCB9E90)

inline static constexpr unsigned int CONJABCNBII_TypeDefinitionIndex = 53028;

	class CONJABCNBII : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ModifyMazePuzzleChallenge* OFKGLJOAMLD; // 0x20
		::System::UInt32 DNCPEJNPCBC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + CONJABCNBII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONJABCNBII_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONJABCNBII_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONJABCNBII_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CONJABCNBII_TICK_OFFSET))(this, a1);
		}

	};
