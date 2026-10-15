#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAIPJANPCEK;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class ChenLingFesBuff; }
namespace RPG::GameCore { class ChenLingFesBuffConfig; }
namespace RPG::GameCore { class ChenLingFesGameConfig; }
namespace RPG::GameCore { class ChenLingFesItemAbilityConfig; }
namespace RPG::GameCore { class ChenLingFesLevelAbilityConfig; }
namespace RPG::GameCore { class ChenLingFesLevelConfigRow; }
namespace RPG::GameCore { class ChenLingFesLevelSettings; }
namespace RPG::GameCore { class ChenLingFesRegionConfig; }
namespace RPG::GameCore { class ChenLingFesVCameraConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGBGCKBDJEH_BBBINBHLCAF_OFFSET UNITYSDK_OFFSET(0x159F5CF0)
#define GGBGCKBDJEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x159F6350)
#define GGBGCKBDJEH_CTOR_OFFSET UNITYSDK_OFFSET(0x159F4E10)
#define GGBGCKBDJEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159F5B60)
#define GGBGCKBDJEH_ENKLKGOKAGO_OFFSET UNITYSDK_OFFSET(0x159F5EB0)
#define GGBGCKBDJEH_FLOJDPDEMLI_OFFSET UNITYSDK_OFFSET(0x159F5D40)
#define GGBGCKBDJEH_GET_BUFFCONFIG_OFFSET UNITYSDK_OFFSET(0x159F6300)
#define GGBGCKBDJEH_GET_CELLCONFIGMAP_OFFSET UNITYSDK_OFFSET(0x159F6280)
#define GGBGCKBDJEH_GET_CHENLINGCONFIGMAP_OFFSET UNITYSDK_OFFSET(0x159F6260)
#define GGBGCKBDJEH_GET_FIELDCONFIG_OFFSET UNITYSDK_OFFSET(0x159F6220)
#define GGBGCKBDJEH_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x159F6320)
#define GGBGCKBDJEH_GET_ITEMCONFIGMAP_OFFSET UNITYSDK_OFFSET(0x159F6240)
#define GGBGCKBDJEH_GET_ITEMRULEGROUPIDMAP_OFFSET UNITYSDK_OFFSET(0x159F62A0)
#define GGBGCKBDJEH_GET_REGIONCONFIG_OFFSET UNITYSDK_OFFSET(0x159F62E0)
#define GGBGCKBDJEH_GET_UNLOCKNORMALCELLPREFABPATH_OFFSET UNITYSDK_OFFSET(0x159F62C0)
#define GGBGCKBDJEH_GLJHILCNOEN_OFFSET UNITYSDK_OFFSET(0x159F60E0)
#define GGBGCKBDJEH_KHLLFBIPNMP_OFFSET UNITYSDK_OFFSET(0x159F5F40)
#define GGBGCKBDJEH_LNJAFOAHILD_OFFSET UNITYSDK_OFFSET(0x159F6340)
#define GGBGCKBDJEH_MAKNGHBKLHN_OFFSET UNITYSDK_OFFSET(0x159F5FA0)
#define GGBGCKBDJEH_NENHCOHIKEA_OFFSET UNITYSDK_OFFSET(0x159F5D90)
#define GGBGCKBDJEH_ODEEJLMPCJE_OFFSET UNITYSDK_OFFSET(0x159F5020)
#define GGBGCKBDJEH_ODPIKJCGHAH_OFFSET UNITYSDK_OFFSET(0x159F5760)
#define GGBGCKBDJEH_SET_BUFFCONFIG_OFFSET UNITYSDK_OFFSET(0x159F6310)
#define GGBGCKBDJEH_SET_CELLCONFIGMAP_OFFSET UNITYSDK_OFFSET(0x159F6290)
#define GGBGCKBDJEH_SET_CHENLINGCONFIGMAP_OFFSET UNITYSDK_OFFSET(0x159F6270)
#define GGBGCKBDJEH_SET_FIELDCONFIG_OFFSET UNITYSDK_OFFSET(0x159F6230)
#define GGBGCKBDJEH_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x159F6330)
#define GGBGCKBDJEH_SET_ITEMCONFIGMAP_OFFSET UNITYSDK_OFFSET(0x159F6250)
#define GGBGCKBDJEH_SET_ITEMRULEGROUPIDMAP_OFFSET UNITYSDK_OFFSET(0x159F62B0)
#define GGBGCKBDJEH_SET_REGIONCONFIG_OFFSET UNITYSDK_OFFSET(0x159F62F0)
#define GGBGCKBDJEH_SET_UNLOCKNORMALCELLPREFABPATH_OFFSET UNITYSDK_OFFSET(0x159F62D0)

inline static constexpr unsigned int GGBGCKBDJEH_TypeDefinitionIndex = 77749;

	class GGBGCKBDJEH : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingFesGameConfig* _GameConfig_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _ItemRuleGroupIDMap_k__BackingField; // 0x18
		::RPG::GameCore::ChenLingFesBuffConfig* BGPCJNLAFAN; // 0x20
		::RPG::GameCore::LittleGameLevelConfig* ECINADEAPFJ; // 0x28
		::OAIPJANPCEK* PDENFEFCAGN; // 0x30
		::RPG::GameCore::LittleGameLevelConfig* JIHKFMLPMLF; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* _ItemConfigMap_k__BackingField; // 0x40
		::RPG::GameCore::ChenLingFesLevelConfigRow* DCEHAKOFMHB; // 0x48
		::RPG::GameCore::LittleGameLevelConfig* COBGCAHFFBJ; // 0x50
		::RPG::GameCore::ChenLingFesBuffConfig* _BuffConfig_k__BackingField; // 0x58
		::RPG::GameCore::ChenLingFesRegionConfig* _RegionConfig_k__BackingField; // 0x60
		::System::String* _UnlockNormalCellPrefabPath_k__BackingField; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* _CellConfigMap_k__BackingField; // 0x70
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* _ChenLingConfigMap_k__BackingField; // 0x78
		::RPG::GameCore::LittleGameEntityConfig* _FieldConfig_k__BackingField; // 0x80
		static ::System::String** StaticGet_KIBEKMGOMCA()
		{
			return (::System::String**)UnitySDK::FromName("", "GGBGCKBDJEH")->GetStaticField(0x63480);
		}

		::System::Void _ctor(::OAIPJANPCEK* a1, ::RPG::GameCore::LittleGameLevelConfig* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*, ::RPG::GameCore::LittleGameLevelConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGBGCKBDJEH_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingFesItemAbilityConfig* BBBINBHLCAF(::System::String* a1)
		{
			return ((::RPG::GameCore::ChenLingFesItemAbilityConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_BBBINBHLCAF_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingFesLevelAbilityConfig* FLOJDPDEMLI(::System::String* a1)
		{
			return ((::RPG::GameCore::ChenLingFesLevelAbilityConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_FLOJDPDEMLI_OFFSET))(this, a1);
		}

		::System::Void ODEEJLMPCJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_ODEEJLMPCJE_OFFSET))(this);
		}

		::System::Void ODPIKJCGHAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_ODPIKJCGHAH_OFFSET))(this);
		}

		::System::Boolean NENHCOHIKEA(::System::String* a1, ::RPG::GameCore::ChenLingFesBuff* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::ChenLingFesBuff*))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_NENHCOHIKEA_OFFSET))(this, a1, a2);
		}

		::System::Int32 ENKLKGOKAGO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_ENKLKGOKAGO_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingFesVCameraConfig* MAKNGHBKLHN()
		{
			return ((::RPG::GameCore::ChenLingFesVCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_MAKNGHBKLHN_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingFesVCameraConfig* GLJHILCNOEN()
		{
			return ((::RPG::GameCore::ChenLingFesVCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_GLJHILCNOEN_OFFSET))(this);
		}

		::RPG::GameCore::LittleGameEntityConfig* get_FieldConfig()
		{
			return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_GET_FIELDCONFIG_OFFSET))(this);
		}

		::System::Void set_FieldConfig(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_SET_FIELDCONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* get_ItemConfigMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_GET_ITEMCONFIGMAP_OFFSET))(this);
		}

		::System::Void set_ItemConfigMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>*))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_SET_ITEMCONFIGMAP_OFFSET))(this, a1);
		}

		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* get_ChenLingConfigMap()
		{
			return ((::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_GET_CHENLINGCONFIGMAP_OFFSET))(this);
		}

		::System::Void set_ChenLingConfigMap(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>*))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_SET_CHENLINGCONFIGMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* get_CellConfigMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_GET_CELLCONFIGMAP_OFFSET))(this);
		}

		::System::Void set_CellConfigMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>*))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_SET_CELLCONFIGMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_ItemRuleGroupIDMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_GET_ITEMRULEGROUPIDMAP_OFFSET))(this);
		}

		::System::Void set_ItemRuleGroupIDMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_SET_ITEMRULEGROUPIDMAP_OFFSET))(this, a1);
		}

		::System::String* get_UnlockNormalCellPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_GET_UNLOCKNORMALCELLPREFABPATH_OFFSET))(this);
		}

		::System::Void set_UnlockNormalCellPrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_SET_UNLOCKNORMALCELLPREFABPATH_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingFesRegionConfig* get_RegionConfig()
		{
			return ((::RPG::GameCore::ChenLingFesRegionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_GET_REGIONCONFIG_OFFSET))(this);
		}

		::System::Void set_RegionConfig(::RPG::GameCore::ChenLingFesRegionConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesRegionConfig*))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_SET_REGIONCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingFesBuffConfig* get_BuffConfig()
		{
			return ((::RPG::GameCore::ChenLingFesBuffConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_GET_BUFFCONFIG_OFFSET))(this);
		}

		::System::Void set_BuffConfig(::RPG::GameCore::ChenLingFesBuffConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesBuffConfig*))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_SET_BUFFCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingFesGameConfig* get_GameConfig()
		{
			return ((::RPG::GameCore::ChenLingFesGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_GET_GAMECONFIG_OFFSET))(this);
		}

		::System::Void set_GameConfig(::RPG::GameCore::ChenLingFesGameConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesGameConfig*))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_SET_GAMECONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingFesLevelConfigRow* LNJAFOAHILD()
		{
			return ((::RPG::GameCore::ChenLingFesLevelConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_LNJAFOAHILD_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingFesLevelSettings* KHLLFBIPNMP()
		{
			return ((::RPG::GameCore::ChenLingFesLevelSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGCKBDJEH_KHLLFBIPNMP_OFFSET))(this);
		}

	};
