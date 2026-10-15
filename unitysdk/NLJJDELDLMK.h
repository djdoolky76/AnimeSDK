#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConditionType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionPredicateType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionStatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

#define NLJJDELDLMK_BINIHENIJKE_OFFSET UNITYSDK_OFFSET(0x1C545680)
#define NLJJDELDLMK_GMKKLAKHJBD_OFFSET UNITYSDK_OFFSET(0x1C5456E0)

inline static constexpr unsigned int NLJJDELDLMK_TypeDefinitionIndex = 41651;

	class NLJJDELDLMK : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftConstraintConditionStatType> BINIHENIJKE(::RPG::Client::MechCraft::MechCraftConditionType a1)
		{
			return ((::System::Nullable_1<::RPG::Client::MechCraft::MechCraftConstraintConditionStatType>(*)(::RPG::Client::MechCraft::MechCraftConditionType))((::PBYTE)hIl2Cpp + NLJJDELDLMK_BINIHENIJKE_OFFSET))(a1);
		}

		static ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType> GMKKLAKHJBD(::RPG::Client::MechCraft::MechCraftConditionType a1)
		{
			return ((::System::Nullable_1<::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType>(*)(::RPG::Client::MechCraft::MechCraftConditionType))((::PBYTE)hIl2Cpp + NLJJDELDLMK_GMKKLAKHJBD_OFFSET))(a1);
		}

	};
