#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTalentNode; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD28AFC0)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD28B000)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_FIRSTARRIVEDNODE_B__17_0_OFFSET UNITYSDK_OFFSET(0xD28B010)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_HASTALENTCANUNLOCK_B__19_0_OFFSET UNITYSDK_OFFSET(0xD28B110)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_UNLOCKCNT_B__21_0_OFFSET UNITYSDK_OFFSET(0xD28B390)

namespace RPG::Client
{
	class GridFightTalentTree___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1350);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1358);
		}

		static ::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1360);
		}

		static ::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_FirstArrivedNode_b__17_0(::RPG::Client::GridFightTalentNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTalentNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_FIRSTARRIVEDNODE_B__17_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_HasTalentCanUnlock_b__19_0(::RPG::Client::GridFightTalentNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTalentNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_HASTALENTCANUNLOCK_B__19_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_UnlockCnt_b__21_0(::RPG::Client::GridFightTalentNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTalentNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_UNLOCKCNT_B__21_0_OFFSET))(this, a1);
		}

	};
}
