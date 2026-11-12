#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
class EFGIHHJGCFA;
namespace RPG::Client { class ActivityPhaseData; }
namespace RPG::Client { class GridFightResidentActivityPanelData; }
namespace RPG::Client { class RogueResidentActivityPanelData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCEAF530)
#define RPG_CLIENT_ACTIVITYMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCEAF560)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_B__16_0_OFFSET UNITYSDK_OFFSET(0xCEAF650)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_B__16_1_OFFSET UNITYSDK_OFFSET(0xCEAF690)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_B__59_0_OFFSET UNITYSDK_OFFSET(0xCEAF750)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_B__59_1_OFFSET UNITYSDK_OFFSET(0xCEAF7A0)
#define RPG_CLIENT_ACTIVITYMODULE___C__ISHANDBOOKPHASEALLFINISHED_B__7_0_OFFSET UNITYSDK_OFFSET(0xCEAF570)
#define RPG_CLIENT_ACTIVITYMODULE___C__ONLOGINFINISH_B__116_0_OFFSET UNITYSDK_OFFSET(0xCEAF860)
#define RPG_CLIENT_ACTIVITYMODULE___C___ONGETACTIVITYREWARDCOUNTDATASCRSP_B__136_0_OFFSET UNITYSDK_OFFSET(0xCEAF870)
#define RPG_CLIENT_ACTIVITYMODULE___C___ONGETALLACTIVITYREWARDCOUNTDATASCRSP_B__137_0_OFFSET UNITYSDK_OFFSET(0xCEAF890)
#define RPG_CLIENT_ACTIVITYMODULE___C___PREPAREMISSIONDATA_B__141_0_OFFSET UNITYSDK_OFFSET(0xCEAF8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityModule___c_TypeDefinitionIndex = 63095;

	class ActivityModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2BC60);
		}

		static ::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2BC68);
		}

		static ::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2BC70);
		}

		static ::System::Action** StaticGet___9__116_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2BC78);
		}

		static ::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::String*>** StaticGet___9__59_1()
		{
			return (::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2BC80);
		}

		static ::System::Func_2<::EFGIHHJGCFA*, ::System::UInt32>** StaticGet___9__136_0()
		{
			return (::System::Func_2<::EFGIHHJGCFA*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2BC88);
		}

		static ::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::String*>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2BC90);
		}

		static ::System::Func_2<::EFGIHHJGCFA*, ::System::UInt32>** StaticGet___9__137_0()
		{
			return (::System::Func_2<::EFGIHHJGCFA*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2BC98);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*>, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2BCA0);
		}

		static ::System::Action** StaticGet___9__141_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2BCA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsHandbookPhaseAllFinished_b__7_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__ISHANDBOOKPHASEALLFINISHED_B__7_0_OFFSET))(this, a1);
		}

		::System::Boolean _FindCurrentGridFightActivityIDForRewardCount_b__16_0(::RPG::Client::GridFightResidentActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_B__16_0_OFFSET))(this, a1);
		}

		::System::String* _FindCurrentGridFightActivityIDForRewardCount_b__16_1(::RPG::Client::GridFightResidentActivityPanelData* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::GridFightResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_B__16_1_OFFSET))(this, a1);
		}

		::System::Boolean _FindCurrentTournRogueActivityIDForRewardCount_b__59_0(::RPG::Client::RogueResidentActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_B__59_0_OFFSET))(this, a1);
		}

		::System::String* _FindCurrentTournRogueActivityIDForRewardCount_b__59_1(::RPG::Client::RogueResidentActivityPanelData* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::RogueResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_B__59_1_OFFSET))(this, a1);
		}

		::System::Void _OnLoginFinish_b__116_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__ONLOGINFINISH_B__116_0_OFFSET))(this);
		}

		::System::UInt32 __OnGetActivityRewardCountDataScRsp_b__136_0(::EFGIHHJGCFA* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::EFGIHHJGCFA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C___ONGETACTIVITYREWARDCOUNTDATASCRSP_B__136_0_OFFSET))(this, a1);
		}

		::System::UInt32 __OnGetAllActivityRewardCountDataScRsp_b__137_0(::EFGIHHJGCFA* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::EFGIHHJGCFA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C___ONGETALLACTIVITYREWARDCOUNTDATASCRSP_B__137_0_OFFSET))(this, a1);
		}

		::System::Void __PrepareMissionData_b__141_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C___PREPAREMISSIONDATA_B__141_0_OFFSET))(this);
		}

	};
}
