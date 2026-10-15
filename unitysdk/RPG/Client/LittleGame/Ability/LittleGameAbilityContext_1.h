#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameTargetMemoryType.h"
#include "unitysdk/System/Object.h"
class ADBMBHAELDP;
class NCLLCKELFPC;
class NDPCHFKPIFL;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame { template <typename T> class IAbilityAttributeService_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Text { class StringBuilder; }

namespace RPG::Client::LittleGame::Ability
{
	inline static constexpr unsigned int LittleGameAbilityContext_1_TypeDefinitionIndex = 77363;

	template <typename T>
	class LittleGameAbilityContext_1 : public ::System::Object
	{
	public:
		T _AbilityOwner_k__BackingField; // 0x0
		::Entitas::IEntity* _AbilitySelf_k__BackingField; // 0x0
		::Entitas::IContext* _Context_k__BackingField; // 0x0
		::RPG::Client::LittleGame::IAbilityAttributeService_1<T>* _AttributeService_k__BackingField; // 0x0
		::ADBMBHAELDP* _EffectService_k__BackingField; // 0x0
		::NDPCHFKPIFL* _TargetSelectorService; // 0x0
		::NCLLCKELFPC* _ValueGetterService; // 0x0
		::System::Text::StringBuilder* _DebugInfo; // 0x0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameTargetMemoryType, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* _TargetMemory; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _RuntimeValues; // 0x0
	};
}
