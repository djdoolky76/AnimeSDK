#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CCEGMAMFLLK_CTOR_OFFSET UNITYSDK_OFFSET(0xC735860)
#define CCEGMAMFLLK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7358F0)
#define CCEGMAMFLLK_DOONENTER_OFFSET UNITYSDK_OFFSET(0xC735990)
#define CCEGMAMFLLK_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xC735A00)

inline static constexpr unsigned int CCEGMAMFLLK_TypeDefinitionIndex = 57487;

	class CCEGMAMFLLK : public ::EDLDHDMLJDH
	{
	public:
		::System::Action* CKAEKHBNBHN; // 0xA0
		::System::Action* DPNPDPDPMCL; // 0xA8
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CCEGMAMFLLK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCEGMAMFLLK_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CCEGMAMFLLK_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CCEGMAMFLLK_DOONEXIT_OFFSET))(this, a1, a2);
		}

	};
