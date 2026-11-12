#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::GameCore { class GridFightChimeraInfoConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTCHIMERA_CTOR_OFFSET UNITYSDK_OFFSET(0xDA8E120)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GETDESCTEXT_OFFSET UNITYSDK_OFFSET(0xDA8EB20)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_ASSOCIATEDROLECONFIG_OFFSET UNITYSDK_OFFSET(0xDA8E7A0)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_ASSOCIATEDROLEID_OFFSET UNITYSDK_OFFSET(0xDA8E750)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0xDA8E9B0)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDA8E570)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_DISPLAYSTAR_OFFSET UNITYSDK_OFFSET(0xDA8E430)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_EFFECTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDA8E6F0)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_FUNDESCTEXT_OFFSET UNITYSDK_OFFSET(0xDA8EEF0)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_FUNDESC_OFFSET UNITYSDK_OFFSET(0xDA8E670)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDA8E480)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_ID_OFFSET UNITYSDK_OFFSET(0xDA8E3F0)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xDA8F020)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_LIMIT_OFFSET UNITYSDK_OFFSET(0xDA8E960)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_MAXSTAR_OFFSET UNITYSDK_OFFSET(0xDA8E420)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDA8E4F0)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_ROLEDESCTEXT_OFFSET UNITYSDK_OFFSET(0xDA8ED80)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_ROLEDESC_OFFSET UNITYSDK_OFFSET(0xDA8E5F0)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_STAR_OFFSET UNITYSDK_OFFSET(0xDA8E400)
#define RPG_CLIENT_GRIDFIGHTCHIMERA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xDA8E410)
#define RPG_CLIENT_GRIDFIGHTCHIMERA__COMPUTEMAXSTAR_OFFSET UNITYSDK_OFFSET(0xDA8E170)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightChimera_TypeDefinitionIndex = 67152;

	class GridFightChimera : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightChimeraInfoConfigRow* _Row; // 0x10
		::System::UInt32 _UniqueId_k__BackingField; // 0x18
		::System::UInt32 _Star_k__BackingField; // 0x1C
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::UInt32 _MaxStar_k__BackingField; // 0x24
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_STAR_OFFSET))(this);
		}

		::System::UInt32 get_UniqueId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::UInt32 get_MaxStar()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_MAXSTAR_OFFSET))(this);
		}

		::System::UInt32 get_DisplayStar()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_DISPLAYSTAR_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_RoleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_ROLEDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_FunDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_FUNDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_EffectParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_EFFECTPARAMLIST_OFFSET))(this);
		}

		::System::UInt32 get_AssociatedRoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_ASSOCIATEDROLEID_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleConfig* get_AssociatedRoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_ASSOCIATEDROLECONFIG_OFFSET))(this);
		}

		::System::UInt32 get_Limit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_LIMIT_OFFSET))(this);
		}

		::System::String* get_DescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_DESCTEXT_OFFSET))(this);
		}

		::System::String* GetDescText(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GETDESCTEXT_OFFSET))(this, a1);
		}

		::System::String* get_RoleDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_ROLEDESCTEXT_OFFSET))(this);
		}

		::System::String* get_FunDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_FUNDESCTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA_GET_ISVALID_OFFSET))(this);
		}

		static ::System::UInt32 _ComputeMaxStar(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERA__COMPUTEMAXSTAR_OFFSET))(a1);
		}

	};
}
