#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class DBOJDIKCJLF;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightExpiredRoleConfig; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleEffect; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSEASONROLE_CREATEBYROLE_OFFSET UNITYSDK_OFFSET(0x1D4E0100)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1D4F8DF0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F9100)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_AHAGROWTHLEVEL_OFFSET UNITYSDK_OFFSET(0x1D4F86F0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1D4F8BF0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x1D4F8CC0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EXPIREDFRONTBACKTYPE_OFFSET UNITYSDK_OFFSET(0x1D4F7FC0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EXPIREDRARITY_OFFSET UNITYSDK_OFFSET(0x1D4F8040)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_FRONTBACKTYPE_OFFSET UNITYSDK_OFFSET(0x1D4F7EE0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4F8190)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D4F8560)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISBOTHEXISTED_OFFSET UNITYSDK_OFFSET(0x1D4F7A80)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISDELETED_OFFSET UNITYSDK_OFFSET(0x1D4F79D0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPERT_OFFSET UNITYSDK_OFFSET(0x1D4F8AD0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPIREDWITHOUTEXPERT_OFFSET UNITYSDK_OFFSET(0x1D4F76F0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1D4F7940)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISINSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D4F8620)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1D4F7AE0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISPOSEXPIRED_OFFSET UNITYSDK_OFFSET(0x1D4F7780)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISPRESENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1D4F7B40)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISRARITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D4F77D0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISTRAILAVATAR_OFFSET UNITYSDK_OFFSET(0x1D4F8950)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0x1D4F89E0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_MINIROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4F8260)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x1D4F87E0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x1D4F88B0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1D4F8400)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0x1D4F8A70)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ROLEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D4F8B90)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4F8330)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_SHOPICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4F80C0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_STAR_OFFSET UNITYSDK_OFFSET(0x1D4F84D0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_UID_OFFSET UNITYSDK_OFFSET(0x1D4F84F0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_MARKUSEEXPIRED_OFFSET UNITYSDK_OFFSET(0x1D4E03B0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_RPG_CLIENT_IGRIDFIGHTROLEPROFILE_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x1D4F8DA0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SETAHAGROWTHLEVEL_OFFSET UNITYSDK_OFFSET(0x1D4F8790)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SETINSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D4F86A0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SETPOSINDEX_OFFSET UNITYSDK_OFFSET(0x1D4F9150)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SETTRAIL_OFFSET UNITYSDK_OFFSET(0x1D4F91B0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SETUPGRADE_OFFSET UNITYSDK_OFFSET(0x1D4F9200)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x1D4F8D50)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE_SET_STAR_OFFSET UNITYSDK_OFFSET(0x1D4F84E0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE__ISPOSEXPIRED_OFFSET UNITYSDK_OFFSET(0x1D4F7CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonRole_TypeDefinitionIndex = 66842;

	class GridFightSeasonRole : public ::System::Object
	{
	public:
		::RPG::Client::GridFightExpiredRoleConfig* ExpiredConfig; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _Equips; // 0x18
		::RPG::Client::GridFightRole* Role; // 0x20
		::System::UInt32 _Star_k__BackingField; // 0x28
		::System::UInt32 _AhaGrowthLevel; // 0x2C
		::System::Boolean _IsUpgradeAvatar; // 0x30
		::System::Boolean _IsInSpotLightStamped; // 0x31
		::System::Boolean _IsInSpotLight; // 0x32
		::System::Boolean _IsTrailAvatar; // 0x33
		::System::Boolean _IsAhaGrowthLevelStamped; // 0x34
		::System::Boolean _markUseExpired; // 0x35
		::System::Byte _padding0[0x2];
		::System::Nullable_1<::System::UInt32> _PosIndex; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsExpiredWithoutExpert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPIREDWITHOUTEXPERT_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::Boolean get_IsDeleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISDELETED_OFFSET))(this);
		}

		::System::Boolean get_IsBothExisted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISBOTHEXISTED_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISNEW_OFFSET))(this);
		}

		::System::Boolean get_IsRarityChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISRARITYCHANGED_OFFSET))(this);
		}

		::System::Boolean get_IsPresentChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISPRESENTCHANGED_OFFSET))(this);
		}

		::System::Boolean get_IsPosExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISPOSEXPIRED_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_FrontBackType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_FRONTBACKTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_ExpiredFrontBackType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EXPIREDFRONTBACKTYPE_OFFSET))(this);
		}

		::System::UInt32 get_ExpiredRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EXPIREDRARITY_OFFSET))(this);
		}

		::System::String* get_ShopIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_SHOPICONPATH_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_MINIROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_RARITY_OFFSET))(this);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SET_STAR_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_UID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsInSpotLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISINSPOTLIGHT_OFFSET))(this);
		}

		::System::Void SetInSpotLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SETINSPOTLIGHT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AhaGrowthLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_AHAGROWTHLEVEL_OFFSET))(this);
		}

		::System::Void SetAhaGrowthLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SETAHAGROWTHLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_POSINDEX_OFFSET))(this);
		}

		::System::Boolean get_IsTrailAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISTRAILAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradeAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISUPGRADEAVATAR_OFFSET))(this);
		}

		::DBOJDIKCJLF* get_RoleConfig()
		{
			return ((::DBOJDIKCJLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ROLECONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsExpert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ISEXPERT_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleEffect* get_RoleEffect()
		{
			return ((::RPG::Client::GridFightRoleEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_ROLEEFFECT_OFFSET))(this);
		}

		::System::Int32 get_EquipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EQUIPCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_GET_EQUIPS_OFFSET))(this);
		}

		::System::Void set_Equips(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SET_EQUIPS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::GridFightEquipItemData*>* RPG_Client_IGridFightRoleProfile_get_Equips()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_RPG_CLIENT_IGRIDFIGHTROLEPROFILE_GET_EQUIPS_OFFSET))(this);
		}

		static ::RPG::Client::GridFightSeasonRole* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a4)
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::GridFightSeasonRole* CreateByRole(::RPG::Client::GridFightRole* a1, ::System::Nullable_1<::System::UInt32> a2)
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::RPG::Client::GridFightRole*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_CREATEBYROLE_OFFSET))(a1, a2);
		}

		::System::Void SetPosIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SETPOSINDEX_OFFSET))(this, a1);
		}

		::System::Void SetTrail(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SETTRAIL_OFFSET))(this, a1);
		}

		::System::Void SetUpgrade(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_SETUPGRADE_OFFSET))(this, a1);
		}

		::System::Void MarkUseExpired(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE_MARKUSEEXPIRED_OFFSET))(this, a1);
		}

		::System::Boolean _IsPosExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE__ISPOSEXPIRED_OFFSET))(this);
		}

	};
}
