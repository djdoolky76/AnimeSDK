#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightFormationRole; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D68B5E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68B620)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__CANPUTROLE_B__18_0_OFFSET UNITYSDK_OFFSET(0x1D68B630)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__114_0_OFFSET UNITYSDK_OFFSET(0x1D68B820)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__114_1_OFFSET UNITYSDK_OFFSET(0x1D68B850)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__114_2_OFFSET UNITYSDK_OFFSET(0x1D68B870)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GET_RECOMMENDBASICEQUIPS_B__65_0_OFFSET UNITYSDK_OFFSET(0x1D68B7C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GET_RECOMMENDEQUIPS_B__67_0_OFFSET UNITYSDK_OFFSET(0x1D68B7D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__SAVE_B__111_0_OFFSET UNITYSDK_OFFSET(0x1D68B7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c_TypeDefinitionIndex = 66185;

	class GridFightGameFormationEditor___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71590);
		}

		static ::System::Action** StaticGet___9__111_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71598);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__67_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715A0);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__65_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715A8);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__114_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715B0);
		}

		static ::System::Func_2<::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::Client::GridFightRole*>** StaticGet___9__114_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715B8);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int32>** StaticGet___9__114_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715C0);
		}

		static ::System::Func_2<::RPG::Client::GridFightFormationRole*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightFormationRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _CanPutRole_b__18_0(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__CANPUTROLE_B__18_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _get_RecommendBasicEquips_b__65_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GET_RECOMMENDBASICEQUIPS_B__65_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _get_RecommendEquips_b__67_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GET_RECOMMENDEQUIPS_B__67_0_OFFSET))(this, a1);
		}

		::System::Void _Save_b__111_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__SAVE_B__111_0_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* _GetAllRoleOptions_b__114_0(::RPG::GameCore::GridFightRoleConfigRow* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__114_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetAllRoleOptions_b__114_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__114_1_OFFSET))(this, a1);
		}

		::System::Int32 _GetAllRoleOptions_b__114_2(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__GETALLROLEOPTIONS_B__114_2_OFFSET))(this, a1);
		}

	};
}
