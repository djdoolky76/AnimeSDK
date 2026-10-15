#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ExpeditionGroupData; }
namespace RPG::Client { class ExpeditionHarvestData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_EXPEDITIONMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE5A230)
#define RPG_CLIENT_EXPEDITIONMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCE5A260)
#define RPG_CLIENT_EXPEDITIONMODULE___C__GETALLGROUPIDS_B__3_0_OFFSET UNITYSDK_OFFSET(0xCE5A2D0)
#define RPG_CLIENT_EXPEDITIONMODULE___C__PREPAREUNLOCKEDCONDITIONDATA_B__0_0_OFFSET UNITYSDK_OFFSET(0xCE5A270)
#define RPG_CLIENT_EXPEDITIONMODULE___C___REGISTERWAITSTORESHOWREDDOT_B__26_0_OFFSET UNITYSDK_OFFSET(0xCE5A2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionModule___c_TypeDefinitionIndex = 63967;

	class ExpeditionModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x56DF0);
		}

		static ::System::Func_2<::RPG::Client::ExpeditionHarvestData*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::ExpeditionHarvestData*, ::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x56DF8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x56E00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x56E08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareUnlockedConditionData_b__0_0(::RPG::Client::ExpeditionHarvestData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ExpeditionHarvestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C__PREPAREUNLOCKEDCONDITIONDATA_B__0_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetAllGroupIds_b__3_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C__GETALLGROUPIDS_B__3_0_OFFSET))(this, a1);
		}

		::System::Void __RegisterWaitStoreShowReddot_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE___C___REGISTERWAITSTORESHOWREDDOT_B__26_0_OFFSET))(this);
		}

	};
}
