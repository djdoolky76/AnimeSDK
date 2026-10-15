#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConditionType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionPredicateType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionStatType.h"
#include "unitysdk/System/Object.h"
namespace System { class Nullable; }

#define NLJJDELDLMK_BINIHENIJKE_OFFSET UNITYSDK_OFFSET(0x1C573B30)
#define NLJJDELDLMK_GMKKLAKHJBD_OFFSET UNITYSDK_OFFSET(0x1C573B90)

	class NLJJDELDLMK : public ::System::Object
	{
	public:
		static ::System::Nullable* BINIHENIJKE(::RPG::Client::MechCraft::MechCraftConditionType a1)
		{
			return ((::System::Nullable*(*)(::RPG::Client::MechCraft::MechCraftConditionType))((::PBYTE)hIl2Cpp + NLJJDELDLMK_BINIHENIJKE_OFFSET))(a1);
		}

		static ::System::Nullable* GMKKLAKHJBD(::RPG::Client::MechCraft::MechCraftConditionType a1)
		{
			return ((::System::Nullable*(*)(::RPG::Client::MechCraft::MechCraftConditionType))((::PBYTE)hIl2Cpp + NLJJDELDLMK_GMKKLAKHJBD_OFFSET))(a1);
		}

	};
