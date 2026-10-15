#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChenLingFesStageData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3E0300)
#define RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC3E0340)
#define RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C___HASNEWSTAGE_B__5_0_OFFSET UNITYSDK_OFFSET(0xC3E0350)
#define RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C___ISFINISHEDALLSTAGE_B__6_0_OFFSET UNITYSDK_OFFSET(0xC3E03A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityChenLingFesPanelData___c_TypeDefinitionIndex = 61581;

	class ActivityChenLingFesPanelData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x142F0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x142F8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __HasNewStage_b__5_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C___HASNEWSTAGE_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean __IsFinishedAllStage_b__6_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYCHENLINGFESPANELDATA___C___ISFINISHEDALLSTAGE_B__6_0_OFFSET))(this, a1);
		}

	};
}
