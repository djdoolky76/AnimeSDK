#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHPNLANLMDB.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ST_EnchantTargetDistanceType.h"
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Nullable; }

#define HMCLPKKBHGH_ABBKNIKBKPP_OFFSET UNITYSDK_OFFSET(0x15D79DE0)
#define HMCLPKKBHGH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D79B10)
#define HMCLPKKBHGH_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x15D79E50)
#define HMCLPKKBHGH_IEHGJKIODLM_OFFSET UNITYSDK_OFFSET(0x15D79B60)
#define HMCLPKKBHGH_NDAENKCAIJF_OFFSET UNITYSDK_OFFSET(0x15D79CB0)

	class HMCLPKKBHGH : public ::NHPNLANLMDB
	{
	public:
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x90
		::System::Nullable* KMNKEBCIPEM; // 0x94
		::System::Nullable* HDEPECEDLBO; // 0x9C
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

		::System::Nullable* ABBKNIKBKPP(::RPG::GameCore::ST_EnchantTargetDistanceType a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::RPG::GameCore::ST_EnchantTargetDistanceType))((::PBYTE)hIl2Cpp + HMCLPKKBHGH_ABBKNIKBKPP_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCLPKKBHGH_GET_FLAG_OFFSET))(this);
		}

	};
