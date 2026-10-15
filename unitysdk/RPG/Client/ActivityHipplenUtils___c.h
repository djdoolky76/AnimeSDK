#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPHMLOHPAAD;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGiftData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenInteractPropData; }
namespace RPG::GameCore { class ActivityHipplenPhaseRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC4462F0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC446330)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETCYCLEGROWTHPHASETRIALNAMELIST_B__26_0_OFFSET UNITYSDK_OFFSET(0xC4463D0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETITEMDISPLAYDATAFROMGIFTLIST_B__28_0_OFFSET UNITYSDK_OFFSET(0xC446410)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETNEWUNLOCKEDINTERACTPROPS_B__25_0_OFFSET UNITYSDK_OFFSET(0xC446380)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETSTATGRADETYPE_B__1_0_OFFSET UNITYSDK_OFFSET(0xC446340)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__OPENHIPPLENMAINPAGE_B__31_1_OFFSET UNITYSDK_OFFSET(0xC446470)

namespace RPG::Client
{
	class ActivityHipplenUtils___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__31_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1ECC0);
		}

		static ::System::Comparison_1<::RPG::GameCore::ActivityHipplenPhaseRow*>** StaticGet___9__26_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::ActivityHipplenPhaseRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1ECC8);
		}

		static ::System::Func_2<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*, ::System::UInt32>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1ECD0);
		}

		static ::System::Comparison_1<::KPHMLOHPAAD*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::KPHMLOHPAAD*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1ECD8);
		}

		static ::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*>** StaticGet___9__25_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1ECE0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1ECE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetStatGradeType_b__1_0(::KPHMLOHPAAD* a1, ::KPHMLOHPAAD* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KPHMLOHPAAD*, ::KPHMLOHPAAD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETSTATGRADETYPE_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetNewUnlockedInteractProps_b__25_0(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETNEWUNLOCKEDINTERACTPROPS_B__25_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetCycleGrowthPhaseTrialNameList_b__26_0(::RPG::GameCore::ActivityHipplenPhaseRow* a1, ::RPG::GameCore::ActivityHipplenPhaseRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityHipplenPhaseRow*, ::RPG::GameCore::ActivityHipplenPhaseRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETCYCLEGROWTHPHASETRIALNAMELIST_B__26_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetItemDisplayDataFromGiftList_b__28_0(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETITEMDISPLAYDATAFROMGIFTLIST_B__28_0_OFFSET))(this, a1);
		}

		::System::Void _OpenHipplenMainPage_b__31_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__OPENHIPPLENMAINPAGE_B__31_1_OFFSET))(this);
		}

	};
}
