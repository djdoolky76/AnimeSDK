#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridMember; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3E5880)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E58C0)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1D3E58D0)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__6_1_OFFSET UNITYSDK_OFFSET(0x1D3E5940)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__6_2_OFFSET UNITYSDK_OFFSET(0x1D3E59B0)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__6_3_OFFSET UNITYSDK_OFFSET(0x1D3E59D0)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__6_4_OFFSET UNITYSDK_OFFSET(0x1D3E5AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitBackStrengthenFrontEffect___c_TypeDefinitionIndex = 67232;

	class GridFightTraitBackStrengthenFrontEffect___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__6_3()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14C80);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14C88);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::UInt32>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14C90);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14C98);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14CA0);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__6_4()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14CA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShowMemberUIDs_b__6_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetShowMemberUIDs_b__6_1(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__6_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetShowMemberUIDs_b__6_2(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__6_2_OFFSET))(this, a1);
		}

		::System::Boolean _GetShowMemberUIDs_b__6_3(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__6_3_OFFSET))(this, a1);
		}

		::System::Boolean _GetShowMemberUIDs_b__6_4(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT___C__GETSHOWMEMBERUIDS_B__6_4_OFFSET))(this, a1);
		}

	};
}
