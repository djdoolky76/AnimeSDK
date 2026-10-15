#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSpawnArrowAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSPAWNARROWACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DCEA0)
#define RPG_GAMECORE_FIVEDIMSPAWNARROWACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DCEB0)
#define RPG_GAMECORE_FIVEDIMSPAWNARROWACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DCE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSpawnArrowAction_TypeDefinitionIndex = 18730;

	class FiveDimSpawnArrowAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* NormalArrowPreset; // 0x10
		::System::String* EnhancedArrowPreset; // 0x18
		::System::String* AttachPointName; // 0x20
		::System::Boolean RigidbodyDiscreteCollision; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNARROWACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSpawnArrowAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSpawnArrowAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNARROWACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSpawnArrowAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSpawnArrowAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNARROWACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
