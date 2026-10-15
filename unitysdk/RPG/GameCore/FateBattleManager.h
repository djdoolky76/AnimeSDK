#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/LHHEGNEBMLN_ERegisterMode.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FateAffixInsertMonsterPhaseType.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/RPG/GameCore/FateHouguType.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FateBattleManager___c__DisplayClass11_0.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ACIOOFOEGOH;
class ACLMDNMDHLE;
class DMDLPHCBMIC;
class EKFMIDBJDIA;
class ENEIHJJPNPI;
class FABMDCOFHCG;
class FAPIMOFPHBB;
class IANPCCLEEOP;
class KHEOBHMINFI;
class LHIMBLCIHBN;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class BattleFateHouguRuntime; }
namespace RPG::GameCore { class InfiniteBattleData; }
namespace RPG::GameCore { class InfinitePerWaveData; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_FATEBATTLEMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xE690C50)
#define RPG_GAMECORE_FATEBATTLEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xE6897D0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE68A620)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GAINNEWHOUGU_OFFSET UNITYSDK_OFFSET(0xE68D9B0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GENHOUGUPROJECTIONWEIGHTPOOL_OFFSET UNITYSDK_OFFSET(0xE68D430)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GENHOUGUPROJECTION_OFFSET UNITYSDK_OFFSET(0xE68D1F0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xE68BAB0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GETCLAZZTRAITPARAM_OFFSET UNITYSDK_OFFSET(0xE68FDC0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GETCONTENTPARAM_OFFSET UNITYSDK_OFFSET(0xE68CC70)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xE6897B0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_AFFIXMAP_OFFSET UNITYSDK_OFFSET(0xE690A70)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_AUTOSELECT_OFFSET UNITYSDK_OFFSET(0xE690C30)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_FATEBUFFLIST_OFFSET UNITYSDK_OFFSET(0xE68F270)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_HOUGUMAP_OFFSET UNITYSDK_OFFSET(0xE68EBB0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_MASTERCONTENT_OFFSET UNITYSDK_OFFSET(0xE68FDA0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_REGISTERMODE_OFFSET UNITYSDK_OFFSET(0xE6897C0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJUAFFIXLIST_OFFSET UNITYSDK_OFFSET(0xE690B60)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJULIST_OFFSET UNITYSDK_OFFSET(0xE690A90)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__AFFIXLIST_OFFSET UNITYSDK_OFFSET(0xE6909A0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__HOUGULIST_OFFSET UNITYSDK_OFFSET(0xE68DC50)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITBUFFLIST_OFFSET UNITYSDK_OFFSET(0xE6903E0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITLIST_OFFSET UNITYSDK_OFFSET(0xE690310)
#define RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYCONTENTPARAM_OFFSET UNITYSDK_OFFSET(0xE68CE70)
#define RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYFATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xE68EBD0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYLEVELPARAM_OFFSET UNITYSDK_OFFSET(0xE68F340)
#define RPG_GAMECORE_FATEBATTLEMANAGER_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xE68A380)
#define RPG_GAMECORE_FATEBATTLEMANAGER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xE689BA0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0xE68AC30)
#define RPG_GAMECORE_FATEBATTLEMANAGER_REMOVEHOUGU_OFFSET UNITYSDK_OFFSET(0xE68DE60)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_AFFIXMAP_OFFSET UNITYSDK_OFFSET(0xE690A80)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_AUTOSELECT_OFFSET UNITYSDK_OFFSET(0xE690C40)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_HOUGUMAP_OFFSET UNITYSDK_OFFSET(0xE68EBC0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SET_MASTERCONTENT_OFFSET UNITYSDK_OFFSET(0xE68FDB0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_SORTBYFATEBATTLERULE_OFFSET UNITYSDK_OFFSET(0xE68C6E0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENTCLIENTUID_OFFSET UNITYSDK_OFFSET(0xE68C8C0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENT_OFFSET UNITYSDK_OFFSET(0xE68CBA0)
#define RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETLEVELPARAM_OFFSET UNITYSDK_OFFSET(0xE68D900)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYAFFIX_OFFSET UNITYSDK_OFFSET(0xE68B830)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYFATEBUFF_OFFSET UNITYSDK_OFFSET(0xE68ACD0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYHOUGU_OFFSET UNITYSDK_OFFSET(0xE68B6E0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYINSERTMONSTER_OFFSET UNITYSDK_OFFSET(0xE68F760)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYINSERTWAVE_OFFSET UNITYSDK_OFFSET(0xE68A3D0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMASTER_OFFSET UNITYSDK_OFFSET(0xE68B980)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xE68E4A0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYREIJUANDREIJUAFFIX_OFFSET UNITYSDK_OFFSET(0xE68B3B0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__APPLYTRAITBUFF_OFFSET UNITYSDK_OFFSET(0xE68AFF0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__COMPAREMONSTERRANK_OFFSET UNITYSDK_OFFSET(0xE68FBE0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GENSTATISTICS_G___GETRANK_11_0_OFFSET UNITYSDK_OFFSET(0xE68C5E0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETRANDOMBYWEIGHT_OFFSET UNITYSDK_OFFSET(0xE68D7A0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETRANK_OFFSET UNITYSDK_OFFSET(0xE68FC70)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITBUFFPARAMMAP_OFFSET UNITYSDK_OFFSET(0xE68CD20)
#define RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITRUNTIMEBYTRAITID_OFFSET UNITYSDK_OFFSET(0xE6904B0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__ONAFTERCONTENTPARAMCHANGE_OFFSET UNITYSDK_OFFSET(0xE68D060)
#define RPG_GAMECORE_FATEBATTLEMANAGER__ONFIRSTWAVEDATAREADY_OFFSET UNITYSDK_OFFSET(0xE68F570)
#define RPG_GAMECORE_FATEBATTLEMANAGER__REFRESHFATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xE68EC90)
#define RPG_GAMECORE_FATEBATTLEMANAGER__REMOVEMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xE68E160)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPAFFIXRUNTIMEMAP_OFFSET UNITYSDK_OFFSET(0xE6905E0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPBASICDATA_OFFSET UNITYSDK_OFFSET(0xE689FA0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPGAMECORELEVELPARAM_OFFSET UNITYSDK_OFFSET(0xE68F4C0)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHASHCACHEFORFATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xE68EF70)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHOUGURUNTIMEMAP_OFFSET UNITYSDK_OFFSET(0xE68E220)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPORREUSEAFFIXABILITY_OFFSET UNITYSDK_OFFSET(0xE690860)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPORREUSEHOUGUABILITY_OFFSET UNITYSDK_OFFSET(0xE68DD20)
#define RPG_GAMECORE_FATEBATTLEMANAGER__SETUPTRAITDATA_OFFSET UNITYSDK_OFFSET(0xE690080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateBattleManager_TypeDefinitionIndex = 56085;

	class FateBattleManager : public ::LHHEGNEBMLN
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DMDLPHCBMIC*>* _AffixMap_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>* _HouguMap_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _FateBuffAmplificationKeyMap; // 0x48
		::System::Collections::Generic::List_1<::LHIMBLCIHBN*>* _TraitRuntimeList; // 0x50
		::ACLMDNMDHLE* _LevelParamMap; // 0x58
		::ACIOOFOEGOH* _RiderBloodFortAndromedaManaNotifyParam; // 0x60
		::KHEOBHMINFI* _ArcherMagicalEnergyNotifyParam; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ACLMDNMDHLE*>* ContentMap; // 0x70
		::ACLMDNMDHLE* _MasterContent_k__BackingField; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _RankFindingMap; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LHIMBLCIHBN*>* TraitRuntimeFindingMap; // 0x88
		::FAPIMOFPHBB* _BattleData; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ACLMDNMDHLE*>*>* _TypedContentMap; // 0x98
		::System::Boolean _AutoSelect_k__BackingField; // 0xA0
		static ::RPG::GameCore::StringHash* StaticGet_ClientUidKeyHash()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("RPG.GameCore", "FateBattleManager")->GetStaticField(0x142F0);
		}

		// static const ::System::String* ClientUidKey; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_CCTOR_OFFSET))();
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::LHHEGNEBMLN_ERegisterMode get_RegisterMode()
		{
			return ((::LHHEGNEBMLN_ERegisterMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_REGISTERMODE_OFFSET))(this);
		}

		::System::Void OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnMazeBuffBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_ONMAZEBUFFBINDING_OFFSET))(this);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void SortByFateBattleRule(::RPG::GameCore::InfinitePerWaveData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InfinitePerWaveData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SORTBYFATEBATTLERULE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetContentClientUid(::RPG::GameCore::TaskContext* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENTCLIENTUID_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetContent(::System::UInt32 a1, ::ACLMDNMDHLE* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::ACLMDNMDHLE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETCONTENT_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint GetContentParam(::ACLMDNMDHLE* a1, ::RPG::GameCore::FateContentParamType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::ACLMDNMDHLE*, ::RPG::GameCore::FateContentParamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GETCONTENTPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void ModifyContentParam(::ACLMDNMDHLE* a1, ::RPG::GameCore::FateContentParamType a2, ::RPG::GameCore::PropertyModifyFunction a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::ACLMDNMDHLE*, ::RPG::GameCore::FateContentParamType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYCONTENTPARAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _OnAfterContentParamChange(::ACLMDNMDHLE* a1, ::RPG::GameCore::FateContentParamType a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::ACLMDNMDHLE*, ::RPG::GameCore::FateContentParamType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__ONAFTERCONTENTPARAMCHANGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GenHouguProjection(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::RPG::GameCore::FateHouguType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::FateHouguType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GENHOUGUPROJECTION_OFFSET))(this, a1, a2);
		}

		::System::Int32 GenHouguProjectionWeightPool(::RPG::GameCore::FateHouguType a1, ::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FateHouguType, ::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GENHOUGUPROJECTIONWEIGHTPOOL_OFFSET))(this, a1, a2);
		}

		::System::Void GainNewHougu(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GAINNEWHOUGU_OFFSET))(this, a1);
		}

		::System::Void RemoveHougu(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_REMOVEHOUGU_OFFSET))(this, a1, a2);
		}

		::System::Void _ApplyHougu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYHOUGU_OFFSET))(this);
		}

		::System::Void _SetupHouguRuntimeMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHOUGURUNTIMEMAP_OFFSET))(this);
		}

		::System::Void _SetupOrReUseHouguAbility(::RPG::GameCore::BattleFateHouguRuntime* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleFateHouguRuntime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPORREUSEHOUGUABILITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::ACLMDNMDHLE*>* get__HouguList()
		{
			return ((::System::Collections::Generic::List_1<::ACLMDNMDHLE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__HOUGULIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>* get_HouguMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_HOUGUMAP_OFFSET))(this);
		}

		::System::Void set_HouguMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleFateHouguRuntime*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SET_HOUGUMAP_OFFSET))(this, a1);
		}

		::System::Void ModifyFateBuffAmplification(::ACLMDNMDHLE* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::ACLMDNMDHLE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYFATEBUFFAMPLIFICATION_OFFSET))(this, a1, a2);
		}

		::System::Void _ApplyFateBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYFATEBUFF_OFFSET))(this);
		}

		::System::Void _RefreshFateBuffAmplification(::ACLMDNMDHLE* a1, ::ENEIHJJPNPI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ACLMDNMDHLE*, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__REFRESHFATEBUFFAMPLIFICATION_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupHashCacheForFateBuffAmplification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPHASHCACHEFORFATEBUFFAMPLIFICATION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ACLMDNMDHLE*>* get_FateBuffList()
		{
			return ((::System::Collections::Generic::List_1<::ACLMDNMDHLE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_FATEBUFFLIST_OFFSET))(this);
		}

		::System::Boolean TryGetLevelParam(::RPG::GameCore::FateLevelParamType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FateLevelParamType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_TRYGETLEVELPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void ModifyLevelParam(::RPG::GameCore::FateLevelParamType a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateLevelParamType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_MODIFYLEVELPARAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetupGameCoreLevelParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPGAMECORELEVELPARAM_OFFSET))(this);
		}

		::System::Void _ApplyInsertWave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYINSERTWAVE_OFFSET))(this);
		}

		::System::Void _OnFirstWaveDataReady(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__ONFIRSTWAVEDATAREADY_OFFSET))(this, a1);
		}

		::System::Void _ApplyInsertMonster(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateAffixInsertMonsterPhaseType, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1, ::RPG::GameCore::InfiniteBattleData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateAffixInsertMonsterPhaseType, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::RPG::GameCore::InfiniteBattleData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYINSERTMONSTER_OFFSET))(this, a1, a2);
		}

		::System::Int32 _CompareMonsterRank(::IANPCCLEEOP* a1, ::IANPCCLEEOP* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IANPCCLEEOP*, ::IANPCCLEEOP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__COMPAREMONSTERRANK_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetRank(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GETRANK_OFFSET))(this, a1);
		}

		::System::Void _ApplyMaster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMASTER_OFFSET))(this);
		}

		::ACLMDNMDHLE* get_MasterContent()
		{
			return ((::ACLMDNMDHLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_MASTERCONTENT_OFFSET))(this);
		}

		::System::Void set_MasterContent(::ACLMDNMDHLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACLMDNMDHLE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SET_MASTERCONTENT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetClazzTraitParam(::RPG::GameCore::FateContentParamType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FateContentParamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GETCLAZZTRAITPARAM_OFFSET))(this, a1);
		}

		::System::Void _SetupTraitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPTRAITDATA_OFFSET))(this);
		}

		::System::Void _ApplyTraitBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYTRAITBUFF_OFFSET))(this);
		}

		::LHIMBLCIHBN* _GetTraitRuntimeByTraitID(::System::UInt32 a1)
		{
			return ((::LHIMBLCIHBN*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITRUNTIMEBYTRAITID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _GetTraitBuffParamMap(::ACLMDNMDHLE* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::ACLMDNMDHLE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GETTRAITBUFFPARAMMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::ACLMDNMDHLE*>* get__TraitList()
		{
			return ((::System::Collections::Generic::List_1<::ACLMDNMDHLE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ACLMDNMDHLE*>* get__TraitBuffList()
		{
			return ((::System::Collections::Generic::List_1<::ACLMDNMDHLE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__TRAITBUFFLIST_OFFSET))(this);
		}

		::System::Void _ApplyAffix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYAFFIX_OFFSET))(this);
		}

		::System::Void _SetupAffixRuntimeMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPAFFIXRUNTIMEMAP_OFFSET))(this);
		}

		::System::Void _SetupOrReUseAffixAbility(::DMDLPHCBMIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMDLPHCBMIC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPORREUSEAFFIXABILITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::ACLMDNMDHLE*>* get__AffixList()
		{
			return ((::System::Collections::Generic::List_1<::ACLMDNMDHLE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET__AFFIXLIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DMDLPHCBMIC*>* get_AffixMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DMDLPHCBMIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_AFFIXMAP_OFFSET))(this);
		}

		::System::Void set_AffixMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DMDLPHCBMIC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::DMDLPHCBMIC*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SET_AFFIXMAP_OFFSET))(this, a1);
		}

		::System::Void _SetupBasicData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__SETUPBASICDATA_OFFSET))(this);
		}

		::System::Void _ApplyReijuAndReijuAffix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYREIJUANDREIJUAFFIX_OFFSET))(this);
		}

		::FABMDCOFHCG* _ApplyMazeBuff(::ACLMDNMDHLE* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::FABMDCOFHCG*(*)(::PVOID, ::ACLMDNMDHLE*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__APPLYMAZEBUFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RemoveMazeBuff(::FABMDCOFHCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FABMDCOFHCG*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__REMOVEMAZEBUFF_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRandomByWeight(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GETRANDOMBYWEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::ACLMDNMDHLE*>* get_ReijuList()
		{
			return ((::System::Collections::Generic::List_1<::ACLMDNMDHLE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJULIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ACLMDNMDHLE*>* get_ReijuAffixList()
		{
			return ((::System::Collections::Generic::List_1<::ACLMDNMDHLE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_REIJUAFFIXLIST_OFFSET))(this);
		}

		::System::Boolean get_AutoSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_GET_AUTOSELECT_OFFSET))(this);
		}

		::System::Void set_AutoSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER_SET_AUTOSELECT_OFFSET))(this, a1);
		}

		static ::System::Int32 _GenStatistics_g___GetRank_11_0(::System::UInt32 a1, ::RPG::GameCore::FateBattleManager___c__DisplayClass11_0 a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::RPG::GameCore::FateBattleManager___c__DisplayClass11_0))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLEMANAGER__GENSTATISTICS_G___GETRANK_11_0_OFFSET))(a1, a2);
		}

	};
}
