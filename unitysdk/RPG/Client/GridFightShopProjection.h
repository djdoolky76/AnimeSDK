#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightShopGood.h"
#include "unitysdk/RPG/Client/GridFightShopGoodType.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/RPG/Client/TextID.h"
class CCKPBIKOIBB;
class HDEIAANGMDB;
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E159AF0)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1E15A710)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_GOODTYPE_OFFSET UNITYSDK_OFFSET(0x1E15B030)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_ID_OFFSET UNITYSDK_OFFSET(0x1E15A4E0)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x1E15A650)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_OWNED_OFFSET UNITYSDK_OFFSET(0x1E15A960)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1E15AF00)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_PROJECTION_OFFSET UNITYSDK_OFFSET(0x1E15A530)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1E15A5C0)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0x1E15A540)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0x1E15AE20)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1E15A770)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopProjection_TypeDefinitionIndex = 66950;

	class GridFightShopProjection : public ::RPG::Client::GridFightShopGood
	{
	public:
		::CCKPBIKOIBB* _ProtoGoodsProjection; // 0x20
		::RPG::Client::GridFightProjection* _Projection_k__BackingField; // 0x28
		::System::Void _ctor(::HDEIAANGMDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDEIAANGMDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_ID_OFFSET))(this);
		}

		::RPG::Client::GridFightProjection* get_Projection()
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_PROJECTION_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_ROLECONFIG_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::GridFightTraitConfig*>* get_Traits()
		{
			return ((::Il2CppArray<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_TRAITS_OFFSET))(this);
		}

		::System::Boolean get_Owned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_OWNED_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_SHOPICON_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_PresetType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_PRESETTYPE_OFFSET))(this);
		}

		::RPG::Client::GridFightShopGoodType get_GoodType()
		{
			return ((::RPG::Client::GridFightShopGoodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION_GET_GOODTYPE_OFFSET))(this);
		}

	};
}
