#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class TrainVisitorInfo; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TRAINMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE2C5850)
#define RPG_CLIENT_TRAINMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE2C5880)
#define RPG_CLIENT_TRAINMODULE___C__GETUNSEENVISITORIDLIST_B__36_1_OFFSET UNITYSDK_OFFSET(0xE2C58C0)
#define RPG_CLIENT_TRAINMODULE___C__ISVISITORONTRAIN_B__22_0_OFFSET UNITYSDK_OFFSET(0xE2C5890)
#define RPG_CLIENT_TRAINMODULE___C__REFRESHREWARDREDDOT_B__38_0_OFFSET UNITYSDK_OFFSET(0xE2C58E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule___c_TypeDefinitionIndex = 68154;

	class TrainModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::TrainVisitorInfo*, ::System::Boolean>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::RPG::Client::TrainVisitorInfo*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1FE70);
		}

		static ::System::Func_2<::RPG::Client::TrainVisitorInfo*, ::System::UInt32>** StaticGet___9__36_1()
		{
			return (::System::Func_2<::RPG::Client::TrainVisitorInfo*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1FE78);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1FE80);
		}

		static ::System::Func_2<::RPG::Client::MapNpcDef*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::RPG::Client::MapNpcDef*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1FE88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsVisitorOnTrain_b__22_0(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__ISVISITORONTRAIN_B__22_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetUnseenVisitorIDList_b__36_1(::RPG::Client::TrainVisitorInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainVisitorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__GETUNSEENVISITORIDLIST_B__36_1_OFFSET))(this, a1);
		}

		::System::Boolean _RefreshRewardRedDot_b__38_0(::RPG::Client::TrainVisitorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainVisitorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__REFRESHREWARDREDDOT_B__38_0_OFFSET))(this, a1);
		}

	};
}
