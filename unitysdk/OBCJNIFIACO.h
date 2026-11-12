#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GDBOEBBNHLP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OBCJNIFIACO_CTOR_OFFSET UNITYSDK_OFFSET(0xC63ABC0)
#define OBCJNIFIACO_GOGBDHKKKAD_OFFSET UNITYSDK_OFFSET(0xC63B950)
#define OBCJNIFIACO_HKEGGBCDIJA_OFFSET UNITYSDK_OFFSET(0xC63B5B0)
#define OBCJNIFIACO_HMMHOOCBCMA_OFFSET UNITYSDK_OFFSET(0xC63B030)
#define OBCJNIFIACO_JOKEMACJGAN_OFFSET UNITYSDK_OFFSET(0xC63B8D0)
#define OBCJNIFIACO_ONHPNCONEAA_OFFSET UNITYSDK_OFFSET(0xC63BBC0)
#define OBCJNIFIACO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC63ACB0)

inline static constexpr unsigned int OBCJNIFIACO_TypeDefinitionIndex = 56442;

	class OBCJNIFIACO
	{
	public:
		::RPG::GameCore::StringHash JJOIEPIHIPG; // 0x28
		::RPG::GameCore::StringHash CENAHPMFJFA; // 0x2C
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

		::System::Int32 ONHPNCONEAA(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + OBCJNIFIACO_ONHPNCONEAA_OFFSET))(this, a1, a2);
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
