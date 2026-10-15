#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define OEALBACEMNP_CTOR_OFFSET UNITYSDK_OFFSET(0xBDFE9D0)
#define OEALBACEMNP_DOONENTER_OFFSET UNITYSDK_OFFSET(0xBDFEA20)
#define OEALBACEMNP_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xBDFEA90)

inline static constexpr unsigned int OEALBACEMNP_TypeDefinitionIndex = 57530;

	class OEALBACEMNP : public ::EDLDHDMLJDH
	{
	public:
		::System::Action_1<::RPG::GameCore::GameEntity*>* FFKBFPKEPEN; // 0xA0
		::System::Action_1<::RPG::GameCore::GameEntity*>* NMPLHCJKEOI; // 0xA8
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Action_1<::RPG::GameCore::GameEntity*>* a2, ::System::Action_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + OEALBACEMNP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OEALBACEMNP_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + OEALBACEMNP_DOONEXIT_OFFSET))(this, a1, a2);
		}

	};
