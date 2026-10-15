#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame::Ability { template <typename T> class ILittleGameAbilityEffect_1; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PHKKDKMNPFA_BDDDKINALPG_OFFSET UNITYSDK_OFFSET(0xC253E70)
#define PHKKDKMNPFA_CTOR_OFFSET UNITYSDK_OFFSET(0xC2540F0)
#define PHKKDKMNPFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC253DD0)

	class PHKKDKMNPFA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::Client::LittleGame::Ability::ILittleGameAbilityEffect_1<::Entitas::IEntity*>*>* APPIAANONPF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKKDKMNPFA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKKDKMNPFA_DISPOSE_OFFSET))(this);
		}

		::System::Void BDDDKINALPG(::IOGNBKGNPFD* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IOGNBKGNPFD*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + PHKKDKMNPFA_BDDDKINALPG_OFFSET))(this, a1, a2, a3);
		}

	};
