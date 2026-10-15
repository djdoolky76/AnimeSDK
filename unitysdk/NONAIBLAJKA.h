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

#define NONAIBLAJKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D242A90)
#define NONAIBLAJKA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D242AA0)
#define NONAIBLAJKA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D242A50)

	class NONAIBLAJKA : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* MGJLINFADJK; // 0x20
		::Il2CppArray<::RPG::GameCore::FloorSavedValueOverride*>* AKMPDOOGAFJ; // 0x28
		::RPG::GameCore::TriggerPerformanceMask* HGHDDOHMDCD; // 0x30
		::System::String* JFABDOKNDBI; // 0x38
		::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x40
		::System::UInt32 OLHIGHGKMIH; // 0x44
		::System::UInt32 NJIOMOHBILM; // 0x48
		::System::UInt32 FIMNPJLNLEE; // 0x4C
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
