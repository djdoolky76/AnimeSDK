#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class GridFightRoleBackendExtraRankConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDA692A0)
#define RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0xDA69460)
#define RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDA695C0)
#define RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xDA694D0)
#define RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDA693A0)
#define RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xDA692B0)
#define RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xDA693F0)
#define RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xDA69570)
#define RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_RANKABILITY_OFFSET UNITYSDK_OFFSET(0xDA69520)
#define RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0xDA69300)
#define RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0xDA69350)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBackExRankConfig_TypeDefinitionIndex = 66810;

	class GridFightBackExRankConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow* _Row; // 0x10
		::System::Void _ctor(::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_RoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_ROLEID_OFFSET))(this);
		}

		::RPG::GameCore::StringHash get_Trigger()
		{
			return ((::RPG::GameCore::StringHash(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_TRIGGER_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_DescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_DESCTEXTID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_RankAbility()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_RANKABILITY_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_PARAMLIST_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKEXRANKCONFIG_GET_DESC_OFFSET))(this);
		}

	};
}
