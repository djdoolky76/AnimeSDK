#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionPredicateType.h"
#include "unitysdk/System/Object.h"

#define APBBGIIOKCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E774B90)
#define APBBGIIOKCD_DJMAKDCNPDA_OFFSET UNITYSDK_OFFSET(0x1E774BA0)
#define APBBGIIOKCD_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1E774B80)
#define APBBGIIOKCD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E774B70)

inline static constexpr unsigned int APBBGIIOKCD_TypeDefinitionIndex = 42798;

	class APBBGIIOKCD : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType _Type_k__BackingField; // 0x10
		::System::Int32 _Target_k__BackingField; // 0x14
		::System::Void _ctor(::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType, ::System::Int32))((::PBYTE)hIl2Cpp + APBBGIIOKCD_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType get_Type()
		{
			return ((::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType(*)(::PVOID))((::PBYTE)hIl2Cpp + APBBGIIOKCD_GET_TYPE_OFFSET))(this);
		}

		::System::Int32 get_Target()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APBBGIIOKCD_GET_TARGET_OFFSET))(this);
		}

		::System::Boolean DJMAKDCNPDA(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APBBGIIOKCD_DJMAKDCNPDA_OFFSET))(this, a1);
		}

	};
