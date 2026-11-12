#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTalentNode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::Client { class GridFightTalentTree; }
namespace RPG::GameCore { class GridFightTalentConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC227E0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_COST_OFFSET UNITYSDK_OFFSET(0xDC224C0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDC223B0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDC22470)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ID_OFFSET UNITYSDK_OFFSET(0xDC22280)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ISARRIVED_OFFSET UNITYSDK_OFFSET(0xDC22570)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0xDC22510)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xDC22420)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_TAG_OFFSET UNITYSDK_OFFSET(0xDC222D0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_TALENTTREE_OFFSET UNITYSDK_OFFSET(0xDC22230)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xDC22340)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPermanentTalentNode_TypeDefinitionIndex = 67008;

	class GridFightPermanentTalentNode : public ::RPG::Client::GridFightTalentNode
	{
	public:
		::RPG::GameCore::GridFightTalentConfigRow* _ConfigRow; // 0x28
		static ::RPG::Client::GridFightTalentTree** StaticGet_Tree()
		{
			return (::RPG::Client::GridFightTalentTree**)UnitySDK::FromName("RPG.Client", "GridFightPermanentTalentNode")->GetStaticField(0x689F0);
		}

		::System::Void _ctor(::RPG::GameCore::GridFightTalentConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTalentConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTalentTree* get_TalentTree()
		{
			return ((::RPG::Client::GridFightTalentTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_TALENTTREE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Tag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_TAG_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_PARAMLIST_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_COST_OFFSET))(this);
		}

		::System::Boolean get_IsOCEffective()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ISOCEFFECTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsArrived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTNODE_GET_ISARRIVED_OFFSET))(this);
		}

	};
}
