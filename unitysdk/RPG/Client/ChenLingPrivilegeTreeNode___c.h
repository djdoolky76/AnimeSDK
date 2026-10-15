#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChenLingPrivilegeTreeNode; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCADD670)
#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCADD6B0)
#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__ADDCHILD_B__2_0_OFFSET UNITYSDK_OFFSET(0xCADD710)
#define RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__ADDPARENT_B__1_0_OFFSET UNITYSDK_OFFSET(0xCADD6C0)

namespace RPG::Client
{
	class ChenLingPrivilegeTreeNode___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2570);
		}

		static ::System::Comparison_1<::RPG::Client::ChenLingPrivilegeTreeNode*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChenLingPrivilegeTreeNode*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2578);
		}

		static ::System::Comparison_1<::RPG::Client::ChenLingPrivilegeTreeNode*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChenLingPrivilegeTreeNode*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _AddParent_b__1_0(::RPG::Client::ChenLingPrivilegeTreeNode* a1, ::RPG::Client::ChenLingPrivilegeTreeNode* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeTreeNode*, ::RPG::Client::ChenLingPrivilegeTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__ADDPARENT_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _AddChild_b__2_0(::RPG::Client::ChenLingPrivilegeTreeNode* a1, ::RPG::Client::ChenLingPrivilegeTreeNode* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeTreeNode*, ::RPG::Client::ChenLingPrivilegeTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGETREENODE___C__ADDCHILD_B__2_0_OFFSET))(this, a1, a2);
		}

	};
}
