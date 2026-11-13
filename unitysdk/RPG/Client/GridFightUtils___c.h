#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightRoleSkillStyleRemarkRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA104B0)
#define RPG_CLIENT_GRIDFIGHTUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA104F0)
#define RPG_CLIENT_GRIDFIGHTUTILS___C__SORTTRAITIDSBYTEAM_B__55_1_OFFSET UNITYSDK_OFFSET(0x1CA10B30)
#define RPG_CLIENT_GRIDFIGHTUTILS___C__TRANSFERTOLAUNCHER_B__0_0_OFFSET UNITYSDK_OFFSET(0x1CA10500)
#define RPG_CLIENT_GRIDFIGHTUTILS___C__TRYSHOWNEWBIELOSEDIALOG_B__64_0_OFFSET UNITYSDK_OFFSET(0x1CA10B50)
#define RPG_CLIENT_GRIDFIGHTUTILS___C___GETSTYLEREMARKROWS_B__23_0_OFFSET UNITYSDK_OFFSET(0x1CA109F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUtils___c_TypeDefinitionIndex = 66440;

	class GridFightUtils___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::GridFightRoleSkillStyleRemarkRow*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GridFightRoleSkillStyleRemarkRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x18480);
		}

		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x18488);
		}

		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::UInt32>** StaticGet___9__55_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x18490);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__64_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x18498);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x184A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C_CTOR_OFFSET))(this);
		}

		::System::Void _TransferToLauncher_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__TRANSFERTOLAUNCHER_B__0_0_OFFSET))(this);
		}

		::System::Int32 __GetStyleRemarkRows_b__23_0(::RPG::GameCore::GridFightRoleSkillStyleRemarkRow* a1, ::RPG::GameCore::GridFightRoleSkillStyleRemarkRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightRoleSkillStyleRemarkRow*, ::RPG::GameCore::GridFightRoleSkillStyleRemarkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C___GETSTYLEREMARKROWS_B__23_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _SortTraitIDsByTeam_b__55_1(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__SORTTRAITIDSBYTEAM_B__55_1_OFFSET))(this, a1);
		}

		::System::Void _TryShowNewBieLoseDialog_b__64_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__TRYSHOWNEWBIELOSEDIALOG_B__64_0_OFFSET))(this, a1);
		}

	};
}
