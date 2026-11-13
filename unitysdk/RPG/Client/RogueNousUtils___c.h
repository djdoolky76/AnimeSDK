#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore { class RogueNousAeonRow; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUENOUSUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB47E80)
#define RPG_CLIENT_ROGUENOUSUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB47EC0)
#define RPG_CLIENT_ROGUENOUSUTILS___C__CHECKLOCKMAINMISSIONSALLFINISHED_B__17_0_OFFSET UNITYSDK_OFFSET(0x1CB47F30)
#define RPG_CLIENT_ROGUENOUSUTILS___C__GETROGUENOUSACCESSIBLEAEONROWSORTEDLIST_B__8_0_OFFSET UNITYSDK_OFFSET(0x1CB47ED0)
#define RPG_CLIENT_ROGUENOUSUTILS___C__GETSLOTDATAITEMSORDERBYSLOTID_B__10_0_OFFSET UNITYSDK_OFFSET(0x1CB47F10)
#define RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_0_OFFSET UNITYSDK_OFFSET(0x1CB47F90)
#define RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_1_OFFSET UNITYSDK_OFFSET(0x1CB48000)
#define RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_2_OFFSET UNITYSDK_OFFSET(0x1CB48010)
#define RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_3_OFFSET UNITYSDK_OFFSET(0x1CB48030)
#define RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_4_OFFSET UNITYSDK_OFFSET(0x1CB48050)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousUtils___c_TypeDefinitionIndex = 69432;

	class RogueNousUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::MainMissionData*>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::MainMissionData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F50);
		}

		static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>** StaticGet___9__19_3()
		{
			return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F58);
		}

		static ::System::Comparison_1<::RPG::GameCore::RogueNousAeonRow*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::RogueNousAeonRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F60);
		}

		static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::Boolean>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F68);
		}

		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F70);
		}

		static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::Boolean>** StaticGet___9__19_4()
		{
			return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F78);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F80);
		}

		static ::System::Func_2<::RPG::Client::RogueNousDiceSlotDataItem*, ::System::UInt32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::RogueNousDiceSlotDataItem*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F88);
		}

		static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::Boolean>** StaticGet___9__19_2()
		{
			return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetRogueNousAccessibleAeonRowSortedList_b__8_0(::RPG::GameCore::RogueNousAeonRow* a1, ::RPG::GameCore::RogueNousAeonRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C__GETROGUENOUSACCESSIBLEAEONROWSORTEDLIST_B__8_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetSlotDataItemsOrderBySlotID_b__10_0(::RPG::Client::RogueNousDiceSlotDataItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C__GETSLOTDATAITEMSORDERBYSLOTID_B__10_0_OFFSET))(this, a1);
		}

		::System::UInt32 _CheckLockMainMissionsAllFinished_b__17_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C__CHECKLOCKMAINMISSIONSALLFINISHED_B__17_0_OFFSET))(this, a1);
		}

		::RPG::Client::MainMissionData* __CheckMainMissionAllFinished_b__19_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_0_OFFSET))(this, a1);
		}

		::System::Boolean __CheckMainMissionAllFinished_b__19_1(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_1_OFFSET))(this, a1);
		}

		::System::Boolean __CheckMainMissionAllFinished_b__19_2(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_2_OFFSET))(this, a1);
		}

		::System::UInt32 __CheckMainMissionAllFinished_b__19_3(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_3_OFFSET))(this, a1);
		}

		::System::Boolean __CheckMainMissionAllFinished_b__19_4(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_4_OFFSET))(this, a1);
		}

	};
}
