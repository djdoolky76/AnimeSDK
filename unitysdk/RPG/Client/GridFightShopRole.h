#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightShopGood.h"
#include "unitysdk/RPG/Client/GridFightShopGoodType.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/RPG/Client/TextID.h"
class HDEIAANGMDB;
class NJBGFHDPFNO;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPROLE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC7C260)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0xDC7E340)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_GOODTYPE_OFFSET UNITYSDK_OFFSET(0xDC7F520)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ID_OFFSET UNITYSDK_OFFSET(0xDC7D0D0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISINSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xDC7EE90)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISMULTIRECOMMEND_OFFSET UNITYSDK_OFFSET(0xDC7E7F0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0xDC7E440)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0xDC7E4A0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRAITTRACKED_OFFSET UNITYSDK_OFFSET(0xDC7E620)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRIAL_OFFSET UNITYSDK_OFFSET(0xDC7E850)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_OWNED_OFFSET UNITYSDK_OFFSET(0xDC7ED10)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0xDC7F170)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xDC7E3B0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xDC7F2F0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xDC7E390)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0xDC7F0F0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPROLENAME_OFFSET UNITYSDK_OFFSET(0xDC7F220)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_STAR_OFFSET UNITYSDK_OFFSET(0xDC7D120)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xDC7F340)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPGRADABLE_OFFSET UNITYSDK_OFFSET(0xDC7E8D0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPLEVEL_OFFSET UNITYSDK_OFFSET(0xDC7EB30)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_WILLLEVELUP_OFFSET UNITYSDK_OFFSET(0xDC7E950)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_REFRESHROLE_OFFSET UNITYSDK_OFFSET(0xDC7DE80)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_SET_ROLE_OFFSET UNITYSDK_OFFSET(0xDC7E3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopRole_TypeDefinitionIndex = 66945;

	class GridFightShopRole : public ::RPG::Client::GridFightShopGood
	{
	public:
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x20
		::NJBGFHDPFNO* _GoodsRole; // 0x28
		::System::Void _ctor(::HDEIAANGMDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDEIAANGMDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_CTOR_OFFSET))(this, a1);
		}

		::System::Void RefreshRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_REFRESHROLE_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_AvatarData()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_AVATARDATA_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_SET_ROLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_STAR_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_RARITY_OFFSET))(this);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Boolean get_IsReferenced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISREFERENCED_OFFSET))(this);
		}

		::System::Boolean get_IsTraitTracked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRAITTRACKED_OFFSET))(this);
		}

		::System::Boolean get_IsMultiRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISMULTIRECOMMEND_OFFSET))(this);
		}

		::System::Boolean get_IsTrial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRIAL_OFFSET))(this);
		}

		::System::Boolean get_Upgradable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPGRADABLE_OFFSET))(this);
		}

		::System::Boolean get_WillLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_WILLLEVELUP_OFFSET))(this);
		}

		::System::UInt32 get_UpLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPLEVEL_OFFSET))(this);
		}

		::System::Boolean get_Owned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_OWNED_OFFSET))(this);
		}

		::System::Boolean get_IsInSpotLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISINSPOTLIGHT_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPICON_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_PresetType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_PRESETTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ShopRoleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPROLENAME_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLECONFIG_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::GridFightTraitConfig*>* get_Traits()
		{
			return ((::Il2CppArray<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_TRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightShopGoodType get_GoodType()
		{
			return ((::RPG::Client::GridFightShopGoodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_GOODTYPE_OFFSET))(this);
		}

	};
}
