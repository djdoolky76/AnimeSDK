#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLKOJNFHEGG.h"
#include "unitysdk/RPG/GameCore/LevelDimensionBakedInfo.h"
#include "unitysdk/RPG/GameCore/LevelFeatureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class ADCHBAMFFON;
class DNDGOKEHEEI;
class FHNIMGBMPLN;
class JEHPCNCCGFE;
namespace RPG::Client { class FloorSavedData; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class EraFlipperConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelDimensionCrossMapBriefInfo; }
namespace RPG::GameCore { class LevelFloorCrossMapBriefInfo; }
namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace RPG::GameCore { class LevelValidNavmapSubmapConfig; }
namespace RPG::GameCore { class RtLevelGroupInstanceCommonInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define DNDGOKEHEEI_BGFKHIFHODK_OFFSET UNITYSDK_OFFSET(0x11949F20)
#define DNDGOKEHEEI_BICDPLLMGAB_OFFSET UNITYSDK_OFFSET(0x1194A100)
#define DNDGOKEHEEI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x119450C0)
#define DNDGOKEHEEI_CCNCNCMIEIH_OFFSET UNITYSDK_OFFSET(0x11947670)
#define DNDGOKEHEEI_CGOBADHDAGF_OFFSET UNITYSDK_OFFSET(0x11949A10)
#define DNDGOKEHEEI_CNHCHIBEMMA_OFFSET UNITYSDK_OFFSET(0x1194ABF0)
#define DNDGOKEHEEI_CTOR_OFFSET UNITYSDK_OFFSET(0x11945280)
#define DNDGOKEHEEI_DEHLJBJEEJJ_OFFSET UNITYSDK_OFFSET(0x1194A4C0)
#define DNDGOKEHEEI_ELILFNOAIGE_OFFSET UNITYSDK_OFFSET(0x11948660)
#define DNDGOKEHEEI_FKFCKBNAGCD_OFFSET UNITYSDK_OFFSET(0x11947080)
#define DNDGOKEHEEI_FKNJAMCOFPO_OFFSET UNITYSDK_OFFSET(0x11949860)
#define DNDGOKEHEEI_GET_DIMENSIONBAKEDINFO_OFFSET UNITYSDK_OFFSET(0x1194AB00)
#define DNDGOKEHEEI_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x1194AC50)
#define DNDGOKEHEEI_GET_ENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0x1194ACE0)
#define DNDGOKEHEEI_GET_ERAFLIPCONFIG_OFFSET UNITYSDK_OFFSET(0x1194AB60)
#define DNDGOKEHEEI_GET_FLOORBAKEDINFOCONFIG_OFFSET UNITYSDK_OFFSET(0x1194AB40)
#define DNDGOKEHEEI_GET_FLOORCONSTVALUES_OFFSET UNITYSDK_OFFSET(0x1194AC60)
#define DNDGOKEHEEI_GET_FLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0x1194AAE0)
#define DNDGOKEHEEI_GET_HASLEVELLITTLEGAME_OFFSET UNITYSDK_OFFSET(0x1194ABD0)
#define DNDGOKEHEEI_GET_MAPFIVEDIMINFO_OFFSET UNITYSDK_OFFSET(0x1194ABA0)
#define DNDGOKEHEEI_GET_MAPROTATIONINFO_OFFSET UNITYSDK_OFFSET(0x1194AB80)
#define DNDGOKEHEEI_GET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x1194AB20)
#define DNDGOKEHEEI_GKBJGAGJNKB_OFFSET UNITYSDK_OFFSET(0x1194A670)
#define DNDGOKEHEEI_GMGFEDBNFBO_OFFSET UNITYSDK_OFFSET(0x11946FC0)
#define DNDGOKEHEEI_GPJFHMLCLBO_OFFSET UNITYSDK_OFFSET(0x1194A3E0)
#define DNDGOKEHEEI_IFAAIBHANAO_OFFSET UNITYSDK_OFFSET(0x1194A2D0)
#define DNDGOKEHEEI_IHALMHIJLOI_OFFSET UNITYSDK_OFFSET(0x1194A1C0)
#define DNDGOKEHEEI_JGGOACGELAL_OFFSET UNITYSDK_OFFSET(0x11945610)
#define DNDGOKEHEEI_JINOPBADHDC_OFFSET UNITYSDK_OFFSET(0x1194A720)
#define DNDGOKEHEEI_JNHCOPDODAN_OFFSET UNITYSDK_OFFSET(0x119464E0)
#define DNDGOKEHEEI_KCBEGFCBBCE_OFFSET UNITYSDK_OFFSET(0x119458C0)
#define DNDGOKEHEEI_KDPIJCIBJKP_OFFSET UNITYSDK_OFFSET(0x11945F80)
#define DNDGOKEHEEI_KPKHNLPPJAG_OFFSET UNITYSDK_OFFSET(0x11949400)
#define DNDGOKEHEEI_LCKGGDBJPIO_OFFSET UNITYSDK_OFFSET(0x119465C0)
#define DNDGOKEHEEI_LGFDLNADMBB_OFFSET UNITYSDK_OFFSET(0x11949D00)
#define DNDGOKEHEEI_MCHCIPKHKKM_OFFSET UNITYSDK_OFFSET(0x11945700)
#define DNDGOKEHEEI_MCHHJJLGKIK_OFFSET UNITYSDK_OFFSET(0x11949EE0)
#define DNDGOKEHEEI_MIPFNJLLPJH_OFFSET UNITYSDK_OFFSET(0x119498E0)
#define DNDGOKEHEEI_NIPBDBNMEAA_OFFSET UNITYSDK_OFFSET(0x1194A450)
#define DNDGOKEHEEI_NJKLJKLEDJJ_OFFSET UNITYSDK_OFFSET(0x1194A8F0)
#define DNDGOKEHEEI_OAFOGNJPFGF_OFFSET UNITYSDK_OFFSET(0x11945550)
#define DNDGOKEHEEI_OEMOMCOGDID_OFFSET UNITYSDK_OFFSET(0x1194AC80)
#define DNDGOKEHEEI_OIJEDLCGMGJ_OFFSET UNITYSDK_OFFSET(0x11946A30)
#define DNDGOKEHEEI_OOIMHMNJDAF_OFFSET UNITYSDK_OFFSET(0x1194A370)
#define DNDGOKEHEEI_OPGJGJCNPPN_OFFSET UNITYSDK_OFFSET(0x11949CC0)
#define DNDGOKEHEEI_PCOINPOKPNK_OFFSET UNITYSDK_OFFSET(0x1194AD00)
#define DNDGOKEHEEI_SET_DIMENSIONBAKEDINFO_OFFSET UNITYSDK_OFFSET(0x1194AB10)
#define DNDGOKEHEEI_SET_ENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0x1194ACF0)
#define DNDGOKEHEEI_SET_ERAFLIPCONFIG_OFFSET UNITYSDK_OFFSET(0x1194AB70)
#define DNDGOKEHEEI_SET_FLOORBAKEDINFOCONFIG_OFFSET UNITYSDK_OFFSET(0x1194AB50)
#define DNDGOKEHEEI_SET_FLOORCONSTVALUES_OFFSET UNITYSDK_OFFSET(0x1194AC70)
#define DNDGOKEHEEI_SET_FLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0x1194AAF0)
#define DNDGOKEHEEI_SET_HASLEVELLITTLEGAME_OFFSET UNITYSDK_OFFSET(0x1194ABE0)
#define DNDGOKEHEEI_SET_MAPFIVEDIMINFO_OFFSET UNITYSDK_OFFSET(0x1194ABC0)
#define DNDGOKEHEEI_SET_MAPROTATIONINFO_OFFSET UNITYSDK_OFFSET(0x1194AB90)
#define DNDGOKEHEEI_SET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x1194AB30)

	class DNDGOKEHEEI : public ::System::Object
	{
	public:
		::ADCHBAMFFON* KCFLGALPFOC; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::RPG::Client::MapEntityDef*>* IMFCHFJFAMA; // 0x18
		::RPG::Client::MapRotationInfo* _MapRotationInfo_k__BackingField; // 0x20
		::RPG::GameCore::LevelDimensionBakedInfo _DimensionBakedInfo_k__BackingField; // 0x28
		::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>* OFPPBAAEEFK; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::RPG::Client::MapAnchorDef*>* AFMLPKBINBC; // 0x40
		::DLKOJNFHEGG _MapFiveDimInfo_k__BackingField; // 0x48
		::RPG::Client::FloorSavedData* _FloorSavedValues_k__BackingField; // 0x60
		::RPG::GameCore::EraFlipperConfig* _EraFlipConfig_k__BackingField; // 0x68
		::JEHPCNCCGFE* _FloorConstValues_k__BackingField; // 0x70
		::FHNIMGBMPLN* _FloorBakedInfoConfig_k__BackingField; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Int16>* HLDNJHMALDF; // 0x80
		::RPG::GameCore::LevelFloorCrossMapBriefInfo* MBGFIIKDDOG; // 0x88
		::System::String* _EnvironmentProfilePath_k__BackingField; // 0x90
		::RPG::GameCore::LevelNavmapConfig* _NavmapConfig_k__BackingField; // 0x98
		::RPG::GameCore::LevelDimensionCrossMapBriefInfo* LOLKILMMFIP; // 0xA0
		::System::UInt32 JBMOIEJNEFD; // 0xA8
		::System::UInt32 DLHOKIMOHFG; // 0xAC
		::System::Boolean _HasLevelLittleGame_k__BackingField; // 0xB0
		::System::Byte _padding0[0x3];
		::System::UInt32 ILHNIKNFFPN; // 0xB4
		::System::UInt32 _DimensionID_k__BackingField; // 0xB8
		::System::UInt32 GAPNANDKMHM; // 0xBC
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::DNDGOKEHEEI* BPLPBPMEODA(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::DNDGOKEHEEI*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void ELILFNOAIGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_ELILFNOAIGE_OFFSET))(this);
		}

		::RPG::GameCore::RuntimeGroupInfo* FKNJAMCOFPO(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_FKNJAMCOFPO_OFFSET))(this, a1);
		}

		::System::Boolean MIPFNJLLPJH(::System::UInt32 a1, ::System::String* a2, ::System::Int16 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_MIPFNJLLPJH_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MapAnchorDef* CGOBADHDAGF()
		{
			return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_CGOBADHDAGF_OFFSET))(this);
		}

		::RPG::Client::MapPropDef* LGFDLNADMBB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MapPropDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_LGFDLNADMBB_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapDistrictDef* BGFKHIFHODK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MapDistrictDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_BGFKHIFHODK_OFFSET))(this, a1, a2);
		}

		::System::Void OAFOGNJPFGF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_OAFOGNJPFGF_OFFSET))(this, a1, a2);
		}

		static ::System::String* BICDPLLMGAB(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_BICDPLLMGAB_OFFSET))(a1, a2, a3);
		}

		::System::Void JGGOACGELAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_JGGOACGELAL_OFFSET))(this);
		}

		::System::Void MCHCIPKHKKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_MCHCIPKHKKM_OFFSET))(this);
		}

		::System::Void KCBEGFCBBCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_KCBEGFCBBCE_OFFSET))(this);
		}

		::RPG::GameCore::RtLevelGroupInstanceCommonInfo* IHALMHIJLOI(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RtLevelGroupInstanceCommonInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_IHALMHIJLOI_OFFSET))(this, a1);
		}

		::System::Void JNHCOPDODAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_JNHCOPDODAN_OFFSET))(this, a1);
		}

		::System::Boolean IFAAIBHANAO(::RPG::GameCore::LevelFeatureType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelFeatureType))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_IFAAIBHANAO_OFFSET))(this, a1);
		}

		::System::Void KDPIJCIBJKP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_KDPIJCIBJKP_OFFSET))(this, a1);
		}

		::System::Void GMGFEDBNFBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_GMGFEDBNFBO_OFFSET))(this);
		}

		::System::Void FKFCKBNAGCD(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_FKFCKBNAGCD_OFFSET))(this, a1, a2);
		}

		::System::Void LCKGGDBJPIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_LCKGGDBJPIO_OFFSET))(this);
		}

		::System::Void OIJEDLCGMGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_OIJEDLCGMGJ_OFFSET))(this);
		}

		::System::Void KPKHNLPPJAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_KPKHNLPPJAG_OFFSET))(this);
		}

		::System::Void CCNCNCMIEIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_CCNCNCMIEIH_OFFSET))(this);
		}

		::System::Void NIPBDBNMEAA(::System::UInt32 a1, ::RPG::GameCore::LevelMonsterInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_NIPBDBNMEAA_OFFSET))(this, a1, a2);
		}

		::System::Void GPJFHMLCLBO(::System::UInt32 a1, ::RPG::GameCore::LevelNPCInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_GPJFHMLCLBO_OFFSET))(this, a1, a2);
		}

		::System::Void OOIMHMNJDAF(::System::UInt32 a1, ::RPG::GameCore::LevelPropInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_OOIMHMNJDAF_OFFSET))(this, a1, a2);
		}

		::System::Void GKBJGAGJNKB(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_GKBJGAGJNKB_OFFSET))(this, a1);
		}

		::RPG::Client::MapNpcDef* DEHLJBJEEJJ(::System::UInt32 a1, ::RPG::GameCore::LevelMonsterInfo* a2)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_DEHLJBJEEJJ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapNpcDef* JINOPBADHDC(::System::UInt32 a1, ::RPG::GameCore::LevelNPCInfo* a2)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_JINOPBADHDC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapPropDef* NJKLJKLEDJJ(::System::UInt32 a1, ::RPG::GameCore::LevelPropInfo* a2)
		{
			return ((::RPG::Client::MapPropDef*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_NJKLJKLEDJJ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FloorSavedData* get_FloorSavedValues()
		{
			return ((::RPG::Client::FloorSavedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_GET_FLOORSAVEDVALUES_OFFSET))(this);
		}

		::System::Void set_FloorSavedValues(::RPG::Client::FloorSavedData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FloorSavedData*))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_SET_FLOORSAVEDVALUES_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelDimensionBakedInfo get_DimensionBakedInfo()
		{
			return ((::RPG::GameCore::LevelDimensionBakedInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_GET_DIMENSIONBAKEDINFO_OFFSET))(this);
		}

		::System::Void set_DimensionBakedInfo(::RPG::GameCore::LevelDimensionBakedInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelDimensionBakedInfo))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_SET_DIMENSIONBAKEDINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelNavmapConfig* get_NavmapConfig()
		{
			return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_GET_NAVMAPCONFIG_OFFSET))(this);
		}

		::System::Void set_NavmapConfig(::RPG::GameCore::LevelNavmapConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_SET_NAVMAPCONFIG_OFFSET))(this, a1);
		}

		::FHNIMGBMPLN* get_FloorBakedInfoConfig()
		{
			return ((::FHNIMGBMPLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_GET_FLOORBAKEDINFOCONFIG_OFFSET))(this);
		}

		::System::Void set_FloorBakedInfoConfig(::FHNIMGBMPLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNIMGBMPLN*))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_SET_FLOORBAKEDINFOCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::EraFlipperConfig* get_EraFlipConfig()
		{
			return ((::RPG::GameCore::EraFlipperConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_GET_ERAFLIPCONFIG_OFFSET))(this);
		}

		::System::Void set_EraFlipConfig(::RPG::GameCore::EraFlipperConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraFlipperConfig*))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_SET_ERAFLIPCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::MapRotationInfo* get_MapRotationInfo()
		{
			return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_GET_MAPROTATIONINFO_OFFSET))(this);
		}

		::System::Void set_MapRotationInfo(::RPG::Client::MapRotationInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapRotationInfo*))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_SET_MAPROTATIONINFO_OFFSET))(this, a1);
		}

		::DLKOJNFHEGG get_MapFiveDimInfo()
		{
			return ((::DLKOJNFHEGG(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_GET_MAPFIVEDIMINFO_OFFSET))(this);
		}

		::System::Void set_MapFiveDimInfo(::DLKOJNFHEGG a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLKOJNFHEGG))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_SET_MAPFIVEDIMINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_HasLevelLittleGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_GET_HASLEVELLITTLEGAME_OFFSET))(this);
		}

		::System::Void set_HasLevelLittleGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_SET_HASLEVELLITTLEGAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple, ::RPG::Client::MapEntityDef*>* MCHHJJLGKIK()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple, ::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_MCHHJJLGKIK_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple, ::RPG::Client::MapAnchorDef*>* OPGJGJCNPPN()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple, ::RPG::Client::MapAnchorDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_OPGJGJCNPPN_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* CNHCHIBEMMA()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_CNHCHIBEMMA_OFFSET))(this);
		}

		::System::UInt32 get_DimensionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_GET_DIMENSIONID_OFFSET))(this);
		}

		::JEHPCNCCGFE* get_FloorConstValues()
		{
			return ((::JEHPCNCCGFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_GET_FLOORCONSTVALUES_OFFSET))(this);
		}

		::System::Void set_FloorConstValues(::JEHPCNCCGFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEHPCNCCGFE*))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_SET_FLOORCONSTVALUES_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>* OEMOMCOGDID()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_OEMOMCOGDID_OFFSET))(this);
		}

		::System::String* get_EnvironmentProfilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_GET_ENVIRONMENTPROFILEPATH_OFFSET))(this);
		}

		::System::Void set_EnvironmentProfilePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_SET_ENVIRONMENTPROFILEPATH_OFFSET))(this, a1);
		}

		::RPG::GameCore::HoyoTagContainer* PCOINPOKPNK()
		{
			return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDGOKEHEEI_PCOINPOKPNK_OFFSET))(this);
		}

	};
