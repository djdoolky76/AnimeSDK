#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class AddStageAbilityByName; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }

#define GKGHLELBDFI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A8B090)
#define GKGHLELBDFI_DJFNGICIECG_OFFSET UNITYSDK_OFFSET(0x15A8B4C0)
#define GKGHLELBDFI_GGOBOBEOKME_OFFSET UNITYSDK_OFFSET(0x15A8B2F0)
#define GKGHLELBDFI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A8B0C0)

inline static constexpr unsigned int GKGHLELBDFI_TypeDefinitionIndex = 54822;

	class GKGHLELBDFI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddStageAbilityByName*))((::PBYTE)hIl2Cpp + GKGHLELBDFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGHLELBDFI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void GGOBOBEOKME(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + GKGHLELBDFI_GGOBOBEOKME_OFFSET))(this, a1, a2);
		}

		::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* DJFNGICIECG()
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGHLELBDFI_DJFNGICIECG_OFFSET))(this);
		}

	};
