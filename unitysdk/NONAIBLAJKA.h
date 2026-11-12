#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
class FCOEMCEDLNL;
class NONAIBLAJKA;
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerPerformanceMask; }
namespace System { class String; }

#define NONAIBLAJKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E448450)
#define NONAIBLAJKA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E448460)
#define NONAIBLAJKA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E448410)

inline static constexpr unsigned int NONAIBLAJKA_TypeDefinitionIndex = 20637;

	class NONAIBLAJKA : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::TriggerPerformanceMask* HGHDDOHMDCD; // 0x20
		::System::String* JFABDOKNDBI; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* MGJLINFADJK; // 0x30
		::Il2CppArray<::RPG::GameCore::FloorSavedValueOverride*>* AKMPDOOGAFJ; // 0x38
		::System::UInt32 NJIOMOHBILM; // 0x40
		::System::UInt32 FIMNPJLNLEE; // 0x44
		::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x48
		::System::UInt32 OLHIGHGKMIH; // 0x4C
		::System::UInt32 HNPDLANHONH; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONAIBLAJKA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NONAIBLAJKA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NONAIBLAJKA*))((::PBYTE)hIl2Cpp + NONAIBLAJKA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NONAIBLAJKA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NONAIBLAJKA*))((::PBYTE)hIl2Cpp + NONAIBLAJKA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
