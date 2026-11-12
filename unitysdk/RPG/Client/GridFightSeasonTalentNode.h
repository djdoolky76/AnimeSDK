#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTalentNode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::Client { class GridFightTalentTree; }
namespace RPG::GameCore { class GridFightSeasonTalentConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC6AB00)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_COST_OFFSET UNITYSDK_OFFSET(0xDC6A7E0)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDC6A6D0)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDC6A790)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ID_OFFSET UNITYSDK_OFFSET(0xDC6A5A0)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ISARRIVED_OFFSET UNITYSDK_OFFSET(0xDC6A890)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0xDC6A830)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xDC6A740)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_TAG_OFFSET UNITYSDK_OFFSET(0xDC6A5F0)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_TALENTTREE_OFFSET UNITYSDK_OFFSET(0xDC6A550)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xDC6A660)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonTalentNode_TypeDefinitionIndex = 67011;

	class GridFightSeasonTalentNode : public ::RPG::Client::GridFightTalentNode
	{
	public:
		::RPG::GameCore::GridFightSeasonTalentConfigRow* _ConfigRow; // 0x28
		static ::RPG::Client::GridFightTalentTree** StaticGet_Tree()
		{
			return (::RPG::Client::GridFightTalentTree**)UnitySDK::FromName("RPG.Client", "GridFightSeasonTalentNode")->GetStaticField(0xC200);
		}

		::System::Void _ctor(::RPG::GameCore::GridFightSeasonTalentConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSeasonTalentConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTalentTree* get_TalentTree()
		{
			return ((::RPG::Client::GridFightTalentTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_TALENTTREE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Tag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_TAG_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_PARAMLIST_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_COST_OFFSET))(this);
		}

		::System::Boolean get_IsOCEffective()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ISOCEFFECTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsArrived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE_GET_ISARRIVED_OFFSET))(this);
		}

	};
}
