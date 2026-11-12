#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDKAFBBHPFL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class AMFPHALPHMF;
namespace RPG::Client { class GridFightChimera; }
namespace RPG::Client { class GridFightChimeraSelectGoods; }
namespace RPG::Client { class GridFightConsumableItemConfig; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_CREATEFROMCHIMERA_OFFSET UNITYSDK_OFFSET(0xDA90C10)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_CREATE_OFFSET UNITYSDK_OFFSET(0xDA8F6F0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_CTOR_1_OFFSET UNITYSDK_OFFSET(0xDA902C0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_CTOR_OFFSET UNITYSDK_OFFSET(0xDA901A0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GETDESCTEXT_OFFSET UNITYSDK_OFFSET(0xDA90B90)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_CHIMERA_OFFSET UNITYSDK_OFFSET(0xDA90310)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_CONSUMABLECONFIG_OFFSET UNITYSDK_OFFSET(0xDA90320)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0xDA908B0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDA907A0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_GOLDAMOUNT_OFFSET UNITYSDK_OFFSET(0xDA90330)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0xDA90430)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDA904D0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_ISCHIMERA_OFFSET UNITYSDK_OFFSET(0xDA90340)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_ISCONSUMABLE_OFFSET UNITYSDK_OFFSET(0xDA90390)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_ISGOLD_OFFSET UNITYSDK_OFFSET(0xDA903E0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDA90620)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_PARAM_OFFSET UNITYSDK_OFFSET(0xDA90300)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDA902F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightChimeraSelectGoods_TypeDefinitionIndex = 66693;

	class GridFightChimeraSelectGoods : public ::System::Object
	{
	public:
		::RPG::Client::GridFightChimera* _Chimera_k__BackingField; // 0x10
		::RPG::Client::GridFightConsumableItemConfig* _ConsumableConfig_k__BackingField; // 0x18
		::System::UInt32 _Param_k__BackingField; // 0x20
		::System::UInt32 _GoldAmount_k__BackingField; // 0x24
		::FDKAFBBHPFL _Type_k__BackingField; // 0x28
		::System::Void _ctor(::FDKAFBBHPFL a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDKAFBBHPFL, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::GridFightChimera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_CTOR_1_OFFSET))(this, a1);
		}

		::FDKAFBBHPFL get_Type()
		{
			return ((::FDKAFBBHPFL(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_Param()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_PARAM_OFFSET))(this);
		}

		::RPG::Client::GridFightChimera* get_Chimera()
		{
			return ((::RPG::Client::GridFightChimera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_CHIMERA_OFFSET))(this);
		}

		::RPG::Client::GridFightConsumableItemConfig* get_ConsumableConfig()
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_CONSUMABLECONFIG_OFFSET))(this);
		}

		::System::UInt32 get_GoldAmount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_GOLDAMOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsChimera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_ISCHIMERA_OFFSET))(this);
		}

		::System::Boolean get_IsConsumable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_ISCONSUMABLE_OFFSET))(this);
		}

		::System::Boolean get_IsGold()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_ISGOLD_OFFSET))(this);
		}

		::System::Boolean get_HasDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_HASDETAIL_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_DESC_OFFSET))(this);
		}

		::System::String* get_DescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GET_DESCTEXT_OFFSET))(this);
		}

		::System::String* GetDescText(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_GETDESCTEXT_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightChimeraSelectGoods* Create(::AMFPHALPHMF* a1)
		{
			return ((::RPG::Client::GridFightChimeraSelectGoods*(*)(::AMFPHALPHMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightChimeraSelectGoods* CreateFromChimera(::RPG::Client::GridFightChimera* a1)
		{
			return ((::RPG::Client::GridFightChimeraSelectGoods*(*)(::RPG::Client::GridFightChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOODS_CREATEFROMCHIMERA_OFFSET))(a1);
		}

	};
}
