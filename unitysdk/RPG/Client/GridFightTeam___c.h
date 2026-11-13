#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3C84A0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C84E0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETBACKROLES_B__64_0_OFFSET UNITYSDK_OFFSET(0x1D3C85A0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETBENCHROLES_B__66_0_OFFSET UNITYSDK_OFFSET(0x1D3C8660)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETFRONTROLES_B__63_0_OFFSET UNITYSDK_OFFSET(0x1D3C8540)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETMEMBERSBYTRAITID_B__33_0_OFFSET UNITYSDK_OFFSET(0x1D3C8520)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDNPCS_B__70_0_OFFSET UNITYSDK_OFFSET(0x1D3C8720)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDROLES_B__65_0_OFFSET UNITYSDK_OFFSET(0x1D3C8600)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETOVERCROWDROLES_B__67_0_OFFSET UNITYSDK_OFFSET(0x1D3C86C0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERCOUNT_B__87_0_OFFSET UNITYSDK_OFFSET(0x1D3C8840)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__28_0_OFFSET UNITYSDK_OFFSET(0x1D3C84F0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__28_1_OFFSET UNITYSDK_OFFSET(0x1D3C8510)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_BENCHMEMBERCOUNT_B__83_0_OFFSET UNITYSDK_OFFSET(0x1D3C8780)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_FRONTROLECOUNT_B__89_0_OFFSET UNITYSDK_OFFSET(0x1D3C8890)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ISOVERCROWD_B__91_0_OFFSET UNITYSDK_OFFSET(0x1D3C88F0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_OVERCROWDMEMBERCOUNT_B__85_0_OFFSET UNITYSDK_OFFSET(0x1D3C87E0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_UNLOCKEXPERTROLES_B__99_0_OFFSET UNITYSDK_OFFSET(0x1D3C8960)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c_TypeDefinitionIndex = 66862;

	class GridFightTeam___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__64_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11C60);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__65_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11C68);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__91_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11C70);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11C78);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__66_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11C80);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__83_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11C88);
		}

		static ::System::Func_2<::RPG::Client::GridFightNPC*, ::System::Boolean>** StaticGet___9__70_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightNPC*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11C90);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__28_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11C98);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__85_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11CA0);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__89_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11CA8);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11CB0);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__67_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11CB8);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>** StaticGet___9__99_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11CC0);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__87_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11CC8);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__63_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11CD0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11CD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightGridMember* _get_AllMembers_b__28_0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__28_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_AllMembers_b__28_1(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__28_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridMember* _GetMembersByTraitID_b__33_0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETMEMBERSBYTRAITID_B__33_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetFrontRoles_b__63_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETFRONTROLES_B__63_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetBackRoles_b__64_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETBACKROLES_B__64_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetOnBoardRoles_b__65_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDROLES_B__65_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetBenchRoles_b__66_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETBENCHROLES_B__66_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetOvercrowdRoles_b__67_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETOVERCROWDROLES_B__67_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetOnBoardNPCs_b__70_0(::RPG::Client::GridFightNPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDNPCS_B__70_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_BenchMemberCount_b__83_0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_BENCHMEMBERCOUNT_B__83_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_OvercrowdMemberCount_b__85_0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_OVERCROWDMEMBERCOUNT_B__85_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_AllMemberCount_b__87_0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERCOUNT_B__87_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_FrontRoleCount_b__89_0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_FRONTROLECOUNT_B__89_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsOvercrowd_b__91_0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ISOVERCROWD_B__91_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* _get_UnlockExpertRoles_b__99_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_UNLOCKEXPERTROLES_B__99_0_OFFSET))(this, a1);
		}

	};
}
