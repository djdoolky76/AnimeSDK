#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHPNLANLMDB.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ST_EnchantTargetDistanceType.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class GameEntity; }

#define HMCLPKKBHGH_ABBKNIKBKPP_OFFSET UNITYSDK_OFFSET(0x15D6D530)
#define HMCLPKKBHGH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D6D250)
#define HMCLPKKBHGH_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x15D6D5A0)
#define HMCLPKKBHGH_IEHGJKIODLM_OFFSET UNITYSDK_OFFSET(0x15D6D2A0)
#define HMCLPKKBHGH_NDAENKCAIJF_OFFSET UNITYSDK_OFFSET(0x15D6D400)

inline static constexpr unsigned int HMCLPKKBHGH_TypeDefinitionIndex = 57028;

	class HMCLPKKBHGH : public ::NHPNLANLMDB
	{
	public:
		::System::Nullable_1<::System::Single> HDEPECEDLBO; // 0x90
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x98
		::System::Nullable_1<::System::Single> KMNKEBCIPEM; // 0x9C
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HMCLPKKBHGH_CTOR_OFFSET))(this, a1);
		}

		::System::Void IEHGJKIODLM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HMCLPKKBHGH_IEHGJKIODLM_OFFSET))(this, a1, a2);
		}

		::System::Void NDAENKCAIJF(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + HMCLPKKBHGH_NDAENKCAIJF_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Single> ABBKNIKBKPP(::RPG::GameCore::ST_EnchantTargetDistanceType a1)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::RPG::GameCore::ST_EnchantTargetDistanceType))((::PBYTE)hIl2Cpp + HMCLPKKBHGH_ABBKNIKBKPP_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCLPKKBHGH_GET_FLAG_OFFSET))(this);
		}

	};
