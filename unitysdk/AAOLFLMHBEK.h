#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CLHNNJKABAO;
class LPNPMKNMMOK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HealHP; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define AAOLFLMHBEK_CCAHIFAKGNE_OFFSET UNITYSDK_OFFSET(0xB0D8F10)
#define AAOLFLMHBEK_CTOR_OFFSET UNITYSDK_OFFSET(0xB0D8350)
#define AAOLFLMHBEK_HEJEBANKABM_OFFSET UNITYSDK_OFFSET(0xB0D8D90)
#define AAOLFLMHBEK_JACIFDIHDLP_OFFSET UNITYSDK_OFFSET(0xB0D9540)
#define AAOLFLMHBEK_KIPMNDOKBCG_OFFSET UNITYSDK_OFFSET(0xB0D99E0)
#define AAOLFLMHBEK_OMNDKBCPMAG_OFFSET UNITYSDK_OFFSET(0xB0D9880)
#define AAOLFLMHBEK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0D8380)
#define AAOLFLMHBEK_PBFANKMMAOC_OFFSET UNITYSDK_OFFSET(0xB0D9070)

inline static constexpr unsigned int AAOLFLMHBEK_TypeDefinitionIndex = 55089;

	class AAOLFLMHBEK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HealHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HealHP*))((::PBYTE)hIl2Cpp + AAOLFLMHBEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOLFLMHBEK_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint PBFANKMMAOC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::CHMCAGBDPJH a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + AAOLFLMHBEK_PBFANKMMAOC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HEJEBANKABM(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::CLHNNJKABAO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::CLHNNJKABAO*))((::PBYTE)hIl2Cpp + AAOLFLMHBEK_HEJEBANKABM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CCAHIFAKGNE(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::CLHNNJKABAO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::CLHNNJKABAO*))((::PBYTE)hIl2Cpp + AAOLFLMHBEK_CCAHIFAKGNE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JACIFDIHDLP(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::CLHNNJKABAO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::CLHNNJKABAO*))((::PBYTE)hIl2Cpp + AAOLFLMHBEK_JACIFDIHDLP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OMNDKBCPMAG(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::CLHNNJKABAO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::CLHNNJKABAO*))((::PBYTE)hIl2Cpp + AAOLFLMHBEK_OMNDKBCPMAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KIPMNDOKBCG(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedModifierEvent a2, ::LPNPMKNMMOK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedModifierEvent, ::LPNPMKNMMOK*))((::PBYTE)hIl2Cpp + AAOLFLMHBEK_KIPMNDOKBCG_OFFSET))(this, a1, a2, a3);
		}

	};
