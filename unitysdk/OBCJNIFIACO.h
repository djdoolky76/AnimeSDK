#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GDBOEBBNHLP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OBCJNIFIACO_CDFEEDDEKKF_OFFSET UNITYSDK_OFFSET(0xBD38050)
#define OBCJNIFIACO_CTOR_OFFSET UNITYSDK_OFFSET(0xBD372D0)
#define OBCJNIFIACO_GOGBDHKKKAD_OFFSET UNITYSDK_OFFSET(0xBD37DE0)
#define OBCJNIFIACO_HKEGGBCDIJA_OFFSET UNITYSDK_OFFSET(0xBD37A40)
#define OBCJNIFIACO_HMMHOOCBCMA_OFFSET UNITYSDK_OFFSET(0xBD375C0)
#define OBCJNIFIACO_JOKEMACJGAN_OFFSET UNITYSDK_OFFSET(0xBD37D60)
#define OBCJNIFIACO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD37330)

	class OBCJNIFIACO
	{
	public:
		::RPG::GameCore::StringHash JJOIEPIHIPG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GDBOEBBNHLP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GDBOEBBNHLP*))((::PBYTE)hIl2Cpp + OBCJNIFIACO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCJNIFIACO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void HMMHOOCBCMA(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OBCJNIFIACO_HMMHOOCBCMA_OFFSET))(this, a1, a2);
		}

		::System::Void HKEGGBCDIJA(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + OBCJNIFIACO_HKEGGBCDIJA_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 CDFEEDDEKKF(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + OBCJNIFIACO_CDFEEDDEKKF_OFFSET))(a1, a2);
		}

		::System::Void JOKEMACJGAN(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OBCJNIFIACO_JOKEMACJGAN_OFFSET))(this, a1, a2);
		}

		::System::Void GOGBDHKKKAD(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OBCJNIFIACO_GOGBDHKKKAD_OFFSET))(this, a1, a2);
		}

	};
