#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddAdventureModifier; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADDADVENTUREMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3851C0)
#define RPG_GAMECORE_ADDADVENTUREMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3851D0)
#define RPG_GAMECORE_ADDADVENTUREMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D385190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddAdventureModifier_TypeDefinitionIndex = 20427;

	class AddAdventureModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* Caster; // 0x20
		::System::String* ModifierName; // 0x28
		::RPG::GameCore::DynamicFloat* LifeTime; // 0x30
		::RPG::GameCore::DynamicFloat* Count; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDADVENTUREMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddAdventureModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddAdventureModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDADVENTUREMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddAdventureModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddAdventureModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDADVENTUREMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
