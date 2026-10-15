#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridMember; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1E0A40)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD1E0A80)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__GETTRAITSUMMONRULEACTIVE_B__32_0_OFFSET UNITYSDK_OFFSET(0xD1E0BA0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__GET_SORTEDTRAITIDS_B__9_0_OFFSET UNITYSDK_OFFSET(0xD1E0A90)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C___GETUNLOCKRULETIP_B__33_0_OFFSET UNITYSDK_OFFSET(0xD1E0C10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightProjectionConfig___c_TypeDefinitionIndex = 65081;

	class GridFightProjectionConfig___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B9B0);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B9B8);
		}

		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B9C0);
		}

		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B9C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_SortedTraitIDs_b__9_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__GET_SORTEDTRAITIDS_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetTraitSummonRuleActive_b__32_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C__GETTRAITSUMMONRULEACTIVE_B__32_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetUnlockRuleTip_b__33_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG___C___GETUNLOCKRULETIP_B__33_0_OFFSET))(this, a1);
		}

	};
}
