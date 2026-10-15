#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SwordTrainingProperty.h"
class GKMKOMHLGDC;
namespace RPG::GameCore { class LevelModifierOnUnstackProperty; }
namespace RPG::GameCore { class LevelRemoveModifier; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOLBECBJIMH_CJIHNCLNDCO_OFFSET UNITYSDK_OFFSET(0x11FF0340)
#define DOLBECBJIMH_CPLAEGIONDN_OFFSET UNITYSDK_OFFSET(0x11FF0150)
#define DOLBECBJIMH_CTOR_OFFSET UNITYSDK_OFFSET(0x11FEF4D0)
#define DOLBECBJIMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FEFAC0)
#define DOLBECBJIMH_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x11FEF4C0)
#define DOLBECBJIMH_GET_ALLYRANK_OFFSET UNITYSDK_OFFSET(0x11FF03A0)
#define DOLBECBJIMH_GET_ENEMYHPMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x11FF03E0)
#define DOLBECBJIMH_GET_ENEMYRANK_OFFSET UNITYSDK_OFFSET(0x11FF03C0)
#define DOLBECBJIMH_IJHAHICJPKJ_OFFSET UNITYSDK_OFFSET(0x11FEFFB0)
#define DOLBECBJIMH_ILGPPFNKBFB_OFFSET UNITYSDK_OFFSET(0x11FEFD30)
#define DOLBECBJIMH_KJMNAOKPHCM_OFFSET UNITYSDK_OFFSET(0x11FF01B0)
#define DOLBECBJIMH_NMNIAMJBBJK_OFFSET UNITYSDK_OFFSET(0x11FF00B0)
#define DOLBECBJIMH_OHJNHGKGKPO_OFFSET UNITYSDK_OFFSET(0x11FF0100)
#define DOLBECBJIMH_OIDMDDCJMDJ_OFFSET UNITYSDK_OFFSET(0x11FEFA60)
#define DOLBECBJIMH_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x11FEF5E0)
#define DOLBECBJIMH_SET_ALLYRANK_OFFSET UNITYSDK_OFFSET(0x11FF03B0)
#define DOLBECBJIMH_SET_ENEMYHPMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x11FF03F0)
#define DOLBECBJIMH_SET_ENEMYRANK_OFFSET UNITYSDK_OFFSET(0x11FF03D0)

inline static constexpr unsigned int DOLBECBJIMH_TypeDefinitionIndex = 56205;

	class DOLBECBJIMH : public ::LHHEGNEBMLN
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SwordTrainingProperty, ::GKMKOMHLGDC*>* KFALNNHFIGN; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Collections::Generic::List_1<::System::Object*>*>* PLNDDMFCGDA; // 0x40
		::RPG::GameCore::FixPoint _EnemyHpMultiplier_k__BackingField; // 0x48
		::System::UInt32 _EnemyRank_k__BackingField; // 0x50
		::System::UInt32 _AllyRank_k__BackingField; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLBECBJIMH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLBECBJIMH_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::System::Void OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLBECBJIMH_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLBECBJIMH_DISPOSE_OFFSET))(this);
		}

		::System::Void OIDMDDCJMDJ(::RPG::GameCore::SwordTrainingProperty a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DOLBECBJIMH_OIDMDDCJMDJ_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint IJHAHICJPKJ(::RPG::GameCore::SwordTrainingProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::SwordTrainingProperty))((::PBYTE)hIl2Cpp + DOLBECBJIMH_IJHAHICJPKJ_OFFSET))(this, a1);
		}

		::System::Int32 ILGPPFNKBFB(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::SwordTrainingProperty a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::SwordTrainingProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DOLBECBJIMH_ILGPPFNKBFB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NMNIAMJBBJK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOLBECBJIMH_NMNIAMJBBJK_OFFSET))(this, a1);
		}

		::System::Void OHJNHGKGKPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOLBECBJIMH_OHJNHGKGKPO_OFFSET))(this, a1);
		}

		::System::Void CPLAEGIONDN(::RPG::GameCore::LevelRemoveModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRemoveModifier*))((::PBYTE)hIl2Cpp + DOLBECBJIMH_CPLAEGIONDN_OFFSET))(this, a1);
		}

		::System::Void CJIHNCLNDCO(::RPG::GameCore::LevelModifierOnUnstackProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelModifierOnUnstackProperty*))((::PBYTE)hIl2Cpp + DOLBECBJIMH_CJIHNCLNDCO_OFFSET))(this, a1);
		}

		::System::Void KJMNAOKPHCM(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + DOLBECBJIMH_KJMNAOKPHCM_OFFSET))(this, a1);
		}

		::System::UInt32 get_AllyRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLBECBJIMH_GET_ALLYRANK_OFFSET))(this);
		}

		::System::Void set_AllyRank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOLBECBJIMH_SET_ALLYRANK_OFFSET))(this, a1);
		}

		::System::UInt32 get_EnemyRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLBECBJIMH_GET_ENEMYRANK_OFFSET))(this);
		}

		::System::Void set_EnemyRank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOLBECBJIMH_SET_ENEMYRANK_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_EnemyHpMultiplier()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLBECBJIMH_GET_ENEMYHPMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_EnemyHpMultiplier(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DOLBECBJIMH_SET_ENEMYHPMULTIPLIER_OFFSET))(this, a1);
		}

	};
