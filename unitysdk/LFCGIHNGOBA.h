#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class GELIALJDFBL;
namespace RPG::GameCore { class SkillDamageTypePreshowConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFCGIHNGOBA_CTOR_OFFSET UNITYSDK_OFFSET(0xBEF8980)

inline static constexpr unsigned int LFCGIHNGOBA_TypeDefinitionIndex = 58968;

	class LFCGIHNGOBA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::SkillDamageTypePreshowConfig*>* CMAHHEIJGBF; // 0x10
		::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x18
		::RPG::GameCore::TurnBasedModifierInstance* ENHCCOOHNKG; // 0x20
		::GELIALJDFBL* FMAEENMABDJ; // 0x28
		::RPG::GameCore::FixPoint BOEJGHIJJIF; // 0x30
		::RPG::GameCore::FixPoint PAKIOJMFKMB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCGIHNGOBA_CTOR_OFFSET))(this);
		}

	};
