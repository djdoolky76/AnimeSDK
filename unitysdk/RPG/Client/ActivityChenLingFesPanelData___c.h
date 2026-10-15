#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChenLingFesStageData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3D8D40)
#define RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC3D8D80)
#define RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C___HASNEWSTAGE_B__5_0_OFFSET UNITYSDK_OFFSET(0xC3D8D90)
#define RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C___ISFINISHEDALLSTAGE_B__6_0_OFFSET UNITYSDK_OFFSET(0xC3D8DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityChenLingFesPanelData___c_TypeDefinitionIndex = 61581;

	class ActivityChenLingFesPanelData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x142E0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingFesStageData*>, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingFesStageData*>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x142E8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingFesStageData*>, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingFesStageData*>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x142F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __HasNewStage_b__5_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingFesStageData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingFesStageData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C___HASNEWSTAGE_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean __IsFinishedAllStage_b__6_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingFesStageData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChenLingFesStageData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C___ISFINISHEDALLSTAGE_B__6_0_OFFSET))(this, a1);
		}

	};
}
